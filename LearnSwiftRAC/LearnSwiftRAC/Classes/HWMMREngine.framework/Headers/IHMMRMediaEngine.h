#ifndef HMMR_MEDIA_ENGINE_H
#define HMMR_MEDIA_ENGINE_H
#include "HMMRDefine.h"
namespace huawei {
namespace mmr {

class IHRTCConnection;

/**
 * The IHRTCAudioFrameObserver class.
 */

class IHRTCAudioFrameObserver {
public:
    virtual ~IHRTCAudioFrameObserver() {};
    virtual bool onPlaybackAudioFrame(HRTCAudioFrame& audioFrame) = 0;
    virtual bool onMixedAudioFrame(HRTCAudioFrame& audioFrame) { return false; };
    virtual bool onRecordAudioFrame(HRTCAudioFrame& audioFrame) { return false; };
    virtual bool requireRecordAudioFrame() { return true; };
    virtual bool requirePlaybackAudioFrame() { return true; };
    virtual bool requireMixedAudioFrame() { return true; };
};

/**
 * The IHRTCVideoFrameObserver class.
 */
class IHRTCVideoFrameObserver {
public:
    virtual ~IHRTCVideoFrameObserver() {};
    virtual bool onCaptureVideoFrame(HRTCVideoFrame& videoFrame) = 0;
    virtual bool onRenderVideoFrame(const char* userId, HRTCVideoFrame& videoFrame) = 0;
    virtual bool requireCaptureVideoFrame() { return true; };
    virtual bool requireRenderVideoFrame() { return true; };
};

class IHRTCConnectionVideoFrameObserver
{
public:
    virtual ~IHRTCConnectionVideoFrameObserver() {};
    virtual bool onRenderVideoFrame(IHRTCConnection* conn, const char* userId, HRTCVideoFrame& videoFrame) = 0;
};

class IHRTCPacketFrameObserver {
public:
    virtual ~IHRTCPacketFrameObserver() {};
    virtual void onSendAudioPacket (HRTCFrameBuffer &frame) { };
    virtual void onSendVideoPacket (HRTCFrameBuffer &frame) { };
    virtual void onReceiveAudioPacket (HRTCFrameBuffer &frame) { };
    virtual void onReceiveVideoPacket (HRTCFrameBuffer &frame) { };
};

class IHRTCConnectionPacketFrameObserver {
public:
    virtual ~IHRTCConnectionPacketFrameObserver() {}
    virtual void onSendAudioPacket(IHRTCConnection* conn, HRTCFrameBuffer &frame) { }
    virtual void onSendVideoPacket(IHRTCConnection* conn, HRTCFrameBuffer &frame) { }
    virtual void onReceiveAudioPacket(IHRTCConnection* conn, HRTCFrameBuffer &frame) { }
    virtual void onReceiveVideoPacket(IHRTCConnection* conn, HRTCFrameBuffer &frame) { }
};

class IHRTCMediaEngine {
 public:
    virtual ~IHRTCMediaEngine () {};
    virtual int registerVideoFrameObserver(IHRTCVideoFrameObserver* observer) = 0;
    virtual int registerAudioFrameObserver(IHRTCAudioFrameObserver* observer) = 0;
    virtual int registerPacketFrameObserver(IHRTCPacketFrameObserver* observer) = 0;
    virtual int registerVideoFrameObserver(IHRTCConnection* conn, IHRTCConnectionVideoFrameObserver* observer) = 0;
};

}  // namespace huawei

}  // namespace hrtc

#endif  // HMMR_MEDIA_ENGINE_H
