//  Huawei Engine SDK
//
//  Copyright (c) 2020 huawei.io. All rights reserved.
//

#ifndef HMMR_CONNECTION_H
#define HMMR_CONNECTION_H

#include "HMMRDefine.h"

namespace huawei {
    namespace mmr {

        class IHRTCConnection;

        class IHRTCConnectionEventHandler {
        public:
            virtual ~IHRTCConnectionEventHandler() {}

            virtual void onError(IHRTCConnection* conn, int error, const char* msg) {}
            virtual void onWarning(IHRTCConnection* conn, int warn, const char* msg) {}
            virtual void onConnectStateChange(IHRTCConnection* conn, HRTCConnStateTypes state, HRTCConnChangeReason reason, const char* description) {}
            virtual void onSignatureExpired(IHRTCConnection* conn) {}
            virtual void onJoinRoomSuccess(IHRTCConnection* conn, const char* userId, const char* mediaSrvAddr, int mediaSrvPort) {}
            virtual void onJoinRoomFailure(IHRTCConnection* conn, int error, const char* msg) {}
            virtual void onRejoinRoomSuccess(IHRTCConnection* conn, const char* userId) {}
            virtual void onLeaveRoom(IHRTCConnection* conn, HRTCLeaveReason reason, const HRTCStatsInfo &statsInfo) {}
            virtual void onUserRoleChanged(IHRTCConnection* conn, HRTCRoleType oldRole, HRTCRoleType newRole) {}
            virtual void onUserJoined(IHRTCConnection* conn, const char* userId, const char* userName) {}
            virtual void onUserOffline(IHRTCConnection* conn, const char* userId, int reason) {}
            virtual void onRemoteUserNameChanged(IHRTCConnection* conn, const char* userId, const char* userName) {}
            virtual void onUserNameChanged(IHRTCConnection* conn, const char* oldUserName, const char* newUserName) {}
            virtual void onRemoteAudioStateChanged(IHRTCConnection* conn, const char* userId, HRTCRemoteAudioStreamState state, HRTCRemoteAudioStreamStateReason reason) {}
            virtual void onRemoteVideoStateChanged(IHRTCConnection* conn, const char* userId, HRTCRemoteVideoStreamState state, HRTCRemoteVideoStreamStateReason reason) {}
            virtual void onUserVolumeStats(IHRTCConnection* conn, const HRTCVolumeInfo* userVolumes, unsigned int userVolumesCount, unsigned int totalVolume) {}
            virtual void onActiveSpeaker(IHRTCConnection* conn, const char* userId) {}
            virtual void onUserSubStreamAvailable(IHRTCConnection* conn, const char* userId, bool available) {}
            virtual void onFirstRemoteAudioDecoded(IHRTCConnection* conn, const char* userId, unsigned int elapsed) {}
            virtual void onFirstRemoteVideoDecoded(IHRTCConnection* conn, const char* userId, int width, int height) {}
            virtual void onFirstRemoteVideoDecoded(IHRTCConnection* conn, const char* userId, int width, int height, unsigned int elapsed) {}
            virtual void onFirstRemoteSubStreamDecoded(IHRTCConnection* conn, const char* userId, int width, int height) {}
            virtual void onFirstRemoteSubStreamDecoded(IHRTCConnection* conn, const char* userId, int width, int height, unsigned int elapsed) {}
            virtual void onMediaStreamRecvPktNotify(IHRTCConnection* conn, const HRTCStreamPacketInfo *streamRecvPacketNotify, unsigned int streamRecvPacketNotifyCount) {}
            virtual void onRenderSuccessNotify(IHRTCConnection* conn, const char* userId, unsigned int isAux) {}
            virtual void onAudioStats(IHRTCConnection* conn, HRTCLocalAudioStats *localStats, unsigned int localStatsCount, HRTCRemoteAudioStats *remoteStats, unsigned int remoteStatsCount) {}
            virtual void onVideoStats(IHRTCConnection* conn, HRTCLocalVideoStats *localStats, unsigned int localStatsCount, HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount) {}
            virtual void onSubStreamStats(IHRTCConnection* conn, HRTCLocalVideoStats *localStats, unsigned int localStatsCount, HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount) {}
            virtual void onNetworkQuality(IHRTCConnection* conn, HRTCQualityInfo* localQuality, unsigned int localQualityCount, HRTCQualityInfo* remoteQuality, unsigned int remoteQualityCount) {}
            virtual void onDestroyConnection(IHRTCConnection* conn) {}
            virtual void onMediaConnectStateChange(IHRTCConnection* conn, HRTCMediaConnStateTypes state, HRTCMediaConnChangeReason reason, const char* description) {}
            virtual void onSetupAllRemoteViewResult(IHRTCConnection* conn, int errCode, const char* errMsg, unsigned int counts, const HRTCSetupRemoteViewResult* results) {}
            virtual void onRtcStats(IHRTCConnection* conn, HRTCOnStats *rtcStats) {}
            virtual void onConnectionInterrupted(IHRTCConnection* conn) {}
            virtual void onConnectionLost(IHRTCConnection* conn) {}
            virtual void onRemoteVideoStats(IHRTCConnection* conn, const HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount) {}
            virtual void onRemoteAudioStats(IHRTCConnection* conn, const HRTCRemoteAudioStats *remoteStats, unsigned int remoteStatsCount) {}
            virtual void onVideoSizeChanged(IHRTCConnection* conn, const char* userId, int width, int height) {}
            virtual void onCameraStatus(IHRTCConnection* conn, unsigned int errorCode) {}
            virtual void onCaptureVideoStats(IHRTCConnection* conn, HRTCCaptureVideoStats *captureStats) {}
        };

        class IHRTCConnection {
        public:
            virtual ~IHRTCConnection() {}

            virtual void release() = 0;
            virtual const char* getRoomId() = 0;
            virtual int enableStreamRecvPacketNotify(bool enable, int timeInterval) = 0;
            virtual int enableEncryption(bool enable) = 0;
            virtual int joinRoom(const HRTCUserInfo &userInfo, HRTCMediaType mediaType) = 0;
            virtual int joinRoom(const HRTCUserInfo &userInfo, HRTCMediaOptions option = HRTCMediaOptions()) = 0;
            virtual int leaveRoom() = 0;
            virtual int renewSignature(const char* signature, long long ctime) = 0;
            virtual int disableRejoinRoom(bool disable) = 0;
            virtual int setUserRole(HRTCRoleType role) = 0;
            virtual int enableTopThreeAudioMode(unsigned int enabled) = 0;
            virtual int setRemoteAudioMode(HRTCRemoteAudioMode mode)= 0;
            virtual int setRemoteAudioTopNVoice(unsigned int topNVoice) = 0;
            virtual int muteRemoteAudio(const char* userId, bool mute) = 0;
            virtual int muteAllRemoteAudio(bool mute) = 0;
            virtual int setDefaultMuteAllRemoteVideoStreams(bool mute) = 0;
            virtual int setDefaultMuteAllRemoteAudioStreams(bool mute) = 0;
            virtual int setPriorRemoteVideoStreamType(HRTCVideoStreamType type) = 0;
            virtual int setupAllRemoteView(unsigned int counts, const HRTCVideoRemoteView *viewInfo) = 0;
            virtual int setupAllRemoteViewForBatch(unsigned int counts, const HRTCVideoRemoteView *viewInfo) = 0;
            virtual int setupRemoteView(const char* userId, view_t view) = 0;
            virtual int startRemoteStreamView(const char* userId, view_t view, HRTCStreamType streamType) = 0;
            virtual int startRemoteStreamView(const char* userId, view_t view, HRTCStreamType streamType, bool disableAdjustRes) = 0;
            virtual int stopRemoteStreamView(const char* userId) = 0;
            virtual int setRemoteVideoStreamType(const char *userId, HRTCVideoStreamType type) = 0;
            virtual int setRemoteViewDisplayMode(const char* userId, HRTCVideoDisplayMode viewMode) = 0;
            virtual int setRemoteViewRotation(const char* userId, HRTCVideoRotation rotation) = 0;
            virtual int setRemoteViewMirrorMode(const char* userId, int enable) = 0;
            virtual int setRemoteViewOrientation(const char *userId, HRTCVideoOrientation orientation) = 0;
            virtual int startRemoteSubStreamView(const char* userId, view_t view) = 0;
            virtual int stopRemoteSubStreamView(const char* userId) = 0;
            virtual int setRemoteSubStreamViewDisplayMode(const char* userId, HRTCVideoDisplayMode viewMode) = 0;
            virtual int setRemoteSubStreamViewRotation(const char *userId, HRTCVideoRotation rotation) = 0;
            virtual int setRemoteSubStreamViewMirrorMode(const char *userId, int enable) = 0;
            virtual int setRemoteSubStreamViewOrientation(const char *userId, HRTCVideoOrientation orientation) = 0;
            virtual int muteRemoteVideo(const char* userId, bool mute) = 0;
            virtual int muteAllRemoteVideo(bool mute) = 0;
            virtual int setRemoteVideoAdjustResolution(bool enable) = 0;
            virtual int changeUserName(const char* usrName) = 0;
            virtual int adjustPlaybackVolume(const char* userId, unsigned int volume) = 0;
        };

    } // namespace mmr
} // namespace huawei

#endif

