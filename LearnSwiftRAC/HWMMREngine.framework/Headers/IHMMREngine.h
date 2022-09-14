//
//  HuaweiMmrEngine SDK
//
//  Copyright (c) 2020 Huawei.io. All rights reserved.
//

/**
 @defgroup createHuaweiMmrEngine Create an HuweiMmrEngine
 */

#ifndef HMMR_ENGINE_H
#define HMMR_ENGINE_H
#include "HMMRDefine.h"
#include "IHMMRConnection.h"
#include "IHMMRMediaEngine.h"
#include <list>
using namespace std;

namespace huawei {
    namespace mmr {

        class IHRTCAudioDeviceManager {
        public:
            virtual ~IHRTCAudioDeviceManager() {}
            virtual int getPlaybackDevices(HRTCDeviceInfo *deviceInfo, unsigned int *counts) = 0;
            virtual int getRecordingDevices(HRTCDeviceInfo *deviceInfo, unsigned int *counts) = 0;
            virtual int setPlaybackDevice(const char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
            virtual int setRecordingDevice(const char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
            virtual int setPlaybackDeviceVolume(unsigned int volume) = 0;
            virtual int setRecordingDeviceVolume(unsigned int volume) = 0;
            virtual int getPlaybackDeviceVolume(unsigned int *volume) = 0;
            virtual int getRecordingDeviceVolume(unsigned int *volume) = 0;
            virtual int setPlaybackDeviceMute(bool mute) = 0;
            virtual int setRecordingDeviceMute(bool mute) = 0;
            virtual int getPlaybackDeviceMute(bool *mute) = 0;
            virtual int getRecordingDeviceMute(bool *mute) = 0;
            virtual int getCurrentPlaybackDevice(char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
            virtual int getCurrentRecordingDevice(char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
        };

        class IVideoDeviceCollection {
        public:
            virtual int getCount() = 0;
            virtual HRTCDeviceInfo* getDevice(int index) = 0;
            virtual void release() = 0;
        };

        class IHRTCVideoDeviceManager {
        public:
            virtual ~IHRTCVideoDeviceManager() {}
            virtual int getVideoDevices(HRTCDeviceInfo *deviceInfo, unsigned int *counts) = 0;
            virtual IVideoDeviceCollection* getVideoDevices() = 0;
            virtual int setVideoDevice(const char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
            virtual int getCurrentVideoDevice(char deviceId[HRTCConstant::HRTC_MAX_DEVICE_ID_LEN + 1]) = 0;
        };

        class IHRTCScreenCaptureSourceList {
        public:
            virtual ~IHRTCScreenCaptureSourceList() {}
            virtual unsigned int getCount() = 0;
            virtual HRTCScreenCaptureSourceInfo getSourceInfo(unsigned int index) = 0;
            virtual void release() = 0;
        };

        class IHRTCEngineEventHandler {
        public:
            virtual ~IHRTCEngineEventHandler() {}
            virtual void onWarning(int warn, const char* msg) {
                (void)warn;
                (void)msg;
            }
            virtual void onError(int error, const char* msg) {
                (void)error;
                (void)msg;
            }
            virtual void onCameraStatus(unsigned int errorCode) {
                (void)errorCode;
            }
            virtual void onJoinRoomSuccess(const char* roomId, const char* userId, const char* mediaSrvAddr, int mediaSrvPort) {
                (void)roomId;
                (void)userId;
                (void)mediaSrvAddr;
                (void)mediaSrvPort;
            }
            virtual void onJoinRoomFailure(int error, const char* msg) {
                (void)error;
                (void)msg;
            }

            virtual void onLeaveRoom(HRTCLeaveReason reason, const HRTCStatsInfo &statsInfo) {
                (void)reason;
                (void)statsInfo;
            }    

            virtual void onRejoinRoomSuccess(const char* roomId, const char* userId) {
                (void)roomId;
                (void)userId;
            }

            virtual void onConnectOtherRoom(HRTCConnectInfo* info, int error, const char* msg) {
                (void)info;
                (void)error;
                (void)msg;
            }

            virtual void onDisconnectOtherRoom(HRTCConnectInfo* info, int error, const char* msg) {
                (void)info;
                (void)error;
                (void)msg;
            }

            virtual void onUserJoined(const char* roomId, const char* userId, const char* userName) {
                (void)roomId;
                (void)userId;
                (void)userName;
            }
            virtual void onUserOffline(const char* roomId, const char* userId, int reason) {
                (void)roomId;
                (void)userId;
                (void)reason;
            }
            virtual void onRemoteUserNameChanged(const char* roomId, const char* userId, const char* userName) {
                (void)roomId;
                (void)userId;
                (void)userName;
            }
            virtual void onUserNameChanged(const char* oldUserName, const char* newUserName) {
                (void)oldUserName;
                (void)newUserName;
            }
            virtual void onFirstRemoteVideoDecoded(const char* roomId, const char* userId, int width, int height) {
                (void)roomId;
                (void)userId;
                (void)width;
                (void)height;
            }
            virtual void onFirstRemoteVideoDecoded(const char* roomId, const char* userId, int width, int height, unsigned int elapsed) {
                (void)roomId;
                (void)userId;
                (void)width;
                (void)height;
                (void)elapsed;
            }
            virtual void onFirstRemoteSubStreamDecoded(const char* roomId, const char* userId, int width, int height) {
                (void)roomId;
                (void)userId;
                (void)width;
                (void)height;
            }
            virtual void onFirstRemoteSubStreamDecoded(const char* roomId, const char* userId, int width, int height, unsigned int elapsed) {
                (void)roomId;
                (void)userId;
                (void)width;
                (void)height;
                (void)elapsed;
            }
            virtual void onConnectStateChange(HRTCConnStateTypes state, HRTCConnChangeReason reason, const char* description) {
                (void)state;
                (void)reason;
                (void)description;
            }
            virtual void onDeviceStateChanged(const char* deviceId, HRTCDeviceType deviceType, HRTCDeviceState deviceState) {
                (void)deviceId;
                (void)deviceType;
                (void)deviceState;
            }
            virtual void onDeviceVolumeChanged(HRTCDeviceType deviceType, unsigned int volume, unsigned int muted) {
                (void)deviceType;
                (void)volume;
                (void)muted;
            }

            /*
             *
             * @param result Pointer to the result of log upload.
             */
            virtual void onLogUploadResult(int result) {
                (void)result;
            }

            /*
             *
             * @param progress Pointer to the progress of log upload.
             */
            virtual void onLogUploadProgress(int progress) {
                (void)progress;
            }

            virtual void onUserRoleChanged(HRTCRoleType oldRole, HRTCRoleType newRole) {
                (void)oldRole;
                (void)newRole;
            }

            virtual void onUserRoleChanged(const char* roomId, HRTCRoleType oldRole, HRTCRoleType newRole) {
                (void)roomId;
                (void)oldRole;
                (void)newRole;
            }

            virtual void onVideoStats(HRTCLocalVideoStats *localStats, unsigned int localStatsCount, HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount) {
                (void)localStats;
                (void)localStatsCount;
                (void)remoteStats;
                (void)remoteStatsCount;
            }

            virtual void onAudioStats(HRTCLocalAudioStats *localStats, unsigned int localStatsCount, HRTCRemoteAudioStats *remoteStats, unsigned int remoteStatsCount) {
                (void)localStats;
                (void)localStatsCount;
                (void)remoteStats;
                (void)remoteStatsCount;
            }

            virtual void onCaptureVideoStats(HRTCCaptureVideoStats *captureStats)
            {
                (void)captureStats;
            }

            virtual void onScreenCaptureStarted() {
            }

            virtual void onScreenCaptureStoped(int reason) {
                (void)reason;
            }

            virtual void onUserSubStreamAvailable(const char* roomId, const char* userId, bool available)
            {
                (void)roomId;
                (void)userId;
                (void)available;
            }

            virtual void onSubStreamStats(HRTCLocalVideoStats *localStats, unsigned int localStatsCount, HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount) {
                (void)localStats;
                (void)localStatsCount;
                (void)remoteStats;
                (void)remoteStatsCount;
            }

            virtual void onSignatureExpired(){
            }

            virtual void onUserVolumeStats(const HRTCVolumeInfo* userVolumes, unsigned int userVolumesCount, unsigned int totalVolume) {
                (void)userVolumes;
                (void)userVolumesCount;
                (void)totalVolume;
            }

            virtual void onActiveSpeaker(const char* userId) {
                (void)userId;
            }

            virtual void onRemoteAudioStateChanged(const char* roomId, const char* userId, HRTCRemoteAudioStreamState state, HRTCRemoteAudioStreamStateReason reason)
            {
                (void)roomId;
                (void)userId;
                (void)state;
                (void)reason;
            }

            virtual void onRemoteVideoStateChanged(const char* roomId, const char* userId, HRTCRemoteVideoStreamState state, HRTCRemoteVideoStreamStateReason reason)
            {
                (void)roomId;
                (void)userId;
                (void)state;
                (void)reason;
            }

            virtual void onLocalAudioStateChanged(HRTCLocalAudioStreamState state, HRTCLocalAudioStreamStateReason reason)
            {
                (void)state;
                (void)reason;
            }

            virtual void onLocalVideoStateChanged(HRTCLocalVideoStreamState state, HRTCLocalVideoStreamStateReason reason)
            {
                (void)state;
                (void)reason;
            }

            virtual void onRenderDataFrame(const char* roomId, HRTCMediaDirection direction, const char* userId, HRTCVideoFrame& videoFrame)
            {
                (void)roomId;
                (void)userId;
                (void)videoFrame;
            }

            virtual void onRenderVideoFrame(const char* roomId, HRTCMediaDirection direction, const char* userId, HRTCVideoFrame& videoFrame)
            {
                (void)roomId;
                (void)userId;
                (void)videoFrame;
            }

            virtual void onPlaybackAudioFrame(const char* roomId, HRTCMediaDirection direction, HRTCAudioFrame& audioFrame)
            {
                (void)roomId;
                (void)audioFrame;
            }

            virtual void onStartAudioFileNotify(int result)
            {
                (void)result;
            }

            virtual void onStopAudioFileNotify(int result)
            {
                (void)result;
            }

            virtual void onPauseAudioFileNotify(int result)
            {
                (void)result;
            }

            virtual void onResumeAudioFileNotify(int result)
            {
                (void)result;
            }

            virtual void onNetworkTestQuality(HRTCNetworkQualityLevel level)
            {
                (void)level;
            }
            virtual void onNetworkTestResult(HRTCNetworkTestResult& networkTestResult)
            {
                (void)networkTestResult;
            }
            virtual void onHowlingUpDetected(int result)
            {
                (void)result;
            }

            virtual void onHowlingDownDetected(int result)
            {
                (void)result;
            }

            virtual void onNetworkQuality(HRTCQualityInfo* localQuality, unsigned int localQualityCount, HRTCQualityInfo* remoteQuality, unsigned int remoteQualityCount)
            {
                (void)localQuality;
                (void)localQualityCount;
                (void)remoteQuality;
                (void)remoteQualityCount;
            }

            virtual void onMediaStreamRecvPktNotify(const HRTCStreamPacketInfo *streamRecvPacketNotify, unsigned int streamRecvPacketNotifyCount)
            {
                (void)streamRecvPacketNotify;
                (void)streamRecvPacketNotifyCount;
            }

            virtual void onRenderSuccessNotify(const char* userId, unsigned int isAux)
            {
                (void)userId;
                (void)isAux;
            }

            virtual void onLocalVolumeChanged(unsigned int volume, unsigned int muted)
            {
                (void)volume;
                (void)muted;
            }

            virtual void onFirstRemoteAudioDecoded(const char* userId, unsigned int elapsed)
            {
                (void)userId;
                (void)elapsed;
            }

            virtual void onFirstLocalAudioFrame(unsigned int elapsed)
            {
                (void)elapsed;
            }

            virtual void onFirstLocalVideoFrame(unsigned int elapsed)
            {
                (void)elapsed;
            }

            virtual void onAudioRouteChanged(HRTCAudioRoute route)
            {
                (void)route;
            }

            virtual void onMediaConnectStateChange(HRTCMediaConnStateTypes state, HRTCMediaConnChangeReason reason, const char* description)
            {
                (void)state;
                (void)reason;
                (void)description;
            }

            virtual void onAudioFileStateChanged(HRTCAudioFileState state, HRTCAudioFileReason reason, unsigned long long value)
            {
                (void)state;
                (void)reason;
                (void)value;
            }

            virtual void onAudioFileFinished()
            {
            }

            virtual void onAudioClipFinished(int soundId)
            {
                (void)soundId;
            }
            virtual void onSetupAllRemoteViewResult(int errCode, const char* errMsg, unsigned int counts, const HRTCSetupRemoteViewResult* results)
            {
                (void)errCode;
                (void)errMsg;
                (void)counts;
                (void)results;
            }

            virtual void onRtcStats(HRTCOnStats *rtcStats)
            {
                (void)rtcStats;
            }

            virtual void onConnectionInterrupted()
            {
            }

            virtual void onConnectionLost()
            {
            }

            virtual void onLocalVideoStats(const HRTCLocalVideoStats *localStats, unsigned int localStatsCount)
            {
                (void)localStats;
                (void)localStatsCount;
            }

            virtual void onRemoteVideoStats(const HRTCRemoteVideoStats *remoteStats, unsigned int remoteStatsCount)
            {
                (void)remoteStats;
                (void)remoteStatsCount;
            }

            virtual void onLocalAudioStats(const HRTCLocalAudioStats *localStats, unsigned int localStatsCount)
            {
                (void)localStats;
                (void)localStatsCount;
            }

            virtual void onRemoteAudioStats(const HRTCRemoteAudioStats *remoteStats, unsigned int remoteStatsCount)
            {
                (void)remoteStats;
                (void)remoteStatsCount;
            }

            virtual void onVideoSizeChanged(const char* userId, int width, int height)
            {
                (void)userId;
                (void)width;
                (void)height;
            }

            virtual void onDotDataReport(const char* data, int dataLen, bool isReportImmediately) {
                (void)data;
                (void)dataLen;
                (void)isReportImmediately;
            }

            virtual void onAddMeetingUserTrack(const char* eventName, const char* args) {
                (void)eventName;
                (void)args;
            }
        };


        class IHRTCEngine {
        public:
            virtual ~IHRTCEngine() {}
            virtual char* getVersion() = 0;
            virtual int setLogParam(bool enable, const HRTCLogInfo &logInfo) = 0;
            virtual int setTerminalParam(const char* terminalOsName,int osLength, const char* terminalVersion,int versionLength) = 0;
            virtual int setConfigFilePath(const char* filePath) = 0;
            virtual int initMMR(IHRTCEngineEventHandler* eventHandler) = 0;
            virtual int updateAppId(const char* appId) = 0;
            virtual int updateDomain(const char* domain) = 0;
            virtual int initialize(const char* domain, const char* appId, IHRTCEngineEventHandler* eventHandler) = 0;
            virtual int initialize(const HRTCEngineConfig &rtcEngineConfig, IHRTCEngineEventHandler *eventHandler) = 0;
            // 新增bandwidth，配置项 type 0->90p 
            virtual int SetBandWidth(unsigned int type, unsigned int value)=0;
            // 新增h265相关配置项
            virtual int SetEnableH265(bool enable, unsigned int delayOfH264ToH265)=0;
            virtual int SetLocalIp(const char* localIp)=0;

            virtual void release() = 0;
            virtual IHRTCConnection* createConnection(const char* roomId, IHRTCConnectionEventHandler* eventHandler) = 0;
            virtual int joinRoom(const HRTCUserInfo &userInfo, const char* roomId, HRTCMediaType mediaType) = 0;
            virtual int joinRoom(const HRTCUserInfo &userInfo, const char* roomId, HRTCMediaOptions option = HRTCMediaOptions()) = 0;
            virtual int leaveRoom() = 0;
            virtual int connectOtherRoom(HRTCConnectInfo* connectInfo) = 0;
            virtual int disconnectOtherRoom(HRTCConnectInfo* connectInfo) = 0;

            virtual int switchCamera() = 0;
            virtual int setLayoutDirect(HRTCOrientationMode direct) = 0;

            virtual int setSpeakerModel(HRTCSpeakerModel speakerModel) = 0;
            virtual int setupLocalView(view_t view, HRTCVideoDisplayMode viewMode) = 0;
            virtual int setupLocalView(view_t view) = 0;
            virtual int setupLocalView(view_t view, HMMRLocalWindowType localWndType) = 0;
            virtual int startRemoteStreamView(const char* userId, view_t view, HRTCStreamType streamType) = 0;
            virtual int startRemoteStreamView(const char* userId, view_t view, HRTCStreamType streamType, bool disableAdjustRes) = 0;
            virtual int setupRemoteView(const char* userId, view_t view) = 0;
            virtual int setupAllRemoteView(unsigned int counts, const HRTCVideoRemoteView *viewInfo) = 0;
            virtual int setupAllRemoteViewForBatch(unsigned int counts, const HRTCVideoRemoteView *viewInfo) = 0;
            virtual int stopRemoteStreamView(const char* userId) = 0;
            virtual int setRemoteViewDisplayMode(const char* userId, HRTCVideoDisplayMode viewMode) = 0;
            virtual int setRemoteViewRotation(const char* userId, HRTCVideoRotation rotation) =0;
            virtual int setRemoteViewMirrorMode(const char* userId, int enable) = 0;

            virtual int setRemoteViewOrientation(const char *userId, HRTCVideoOrientation orientation) = 0;

            virtual int muteLocalVideo(bool mute) = 0;
            virtual int muteLocalAudio(bool mute) = 0;
            virtual int setVideoMuteImage(const char* imagePath, int fps) = 0;
            virtual int enableLocalAudio(bool enabled) = 0;
            virtual int setRemoteAudioTopNVoice(unsigned int topNVoice) = 0;
            virtual int muteRemoteAudio(const char* userId, bool mute) = 0;
            virtual int muteAllRemoteAudio(bool mute) = 0;
            virtual int muteRemoteVideo(const char* userId, bool mute) = 0;
            virtual int muteAllRemoteVideo(bool mute) = 0;
            virtual int logUpload() = 0;
            virtual int setUserRole(HRTCRoleType role) = 0;
            virtual int setUserRole(const char* roomId, HRTCRoleType role) = 0;
            virtual int setVideoEncParam(unsigned int totalBitRate, HRTCVideoEncParam *encoderParams, unsigned int encoderCount) = 0;
            virtual int setVideoEncParam(const HRTCVideoEncParam &encParam) = 0;
            virtual int enableSmallVideoStream(bool enable, const HRTCVideoEncParam &encParam) = 0;
            virtual int adjustRecordingVolume(unsigned int volume) = 0;
            virtual int adjustPlaybackVolume(unsigned int volume) = 0;
            virtual int adjustPlaybackVolume(const char* userId, unsigned int volume) = 0;
            virtual int startPreview() = 0;
            virtual int stopPreview() = 0;
            virtual int startScreenCapture() = 0;
            virtual int stopScreenCapture() = 0;
            virtual int startRemoteSubStreamView(const char* userId, view_t view) = 0;
            virtual int stopRemoteSubStreamView(const char* userId) = 0;
            virtual int setRemoteSubStreamViewDisplayMode(const char* userId, HRTCVideoDisplayMode viewMode) = 0;
            virtual int setRemoteSubStreamViewMirrorMode(const char *userId, int enable) = 0;
            virtual int setRemoteSubStreamViewRotation(const char *userId, HRTCVideoRotation rotation) = 0;

            virtual int setRemoteSubStreamViewOrientation(const char *userId, HRTCVideoOrientation orientation) = 0;

            virtual int renewSignature(const char* signature, long long ctime) = 0;
            virtual int setScreenSmooth(bool enable) = 0;
            virtual int setShareComputerSound(bool enable) = 0;
            virtual int setLocalViewMirror(HRTCVideoMirrorType mirrorType) = 0;
            virtual int setVideoEncoderMirror(HRTCVideoMirrorType mirrorType) = 0;
            virtual int setLocalViewDisplayMode(HRTCVideoDisplayMode displayMode) = 0;
            virtual int enableUserVolumeNotify(unsigned int interval) = 0;
            virtual int setExternalAudioCapture(bool enabled, int sampleRate, int channels) = 0;
            virtual int setExternalVideoCapture(bool enable) = 0;
            virtual int pushExternalAudioFrame(void* audioData, int size) = 0;
            virtual int pushExternalVideoFrame(HRTCVideoFrame* videoFrame, HRTCVideoRotation rotation) = 0;
            virtual int setExternalAudioFrameOutput(bool localEnable, bool remoteEnable) = 0;
            virtual int setExternalVideoFrameOutput(bool localEnable, bool remoteEnable, HRTCImageBufferFormat format = HRTCImageBufferFormat()) = 0;
            virtual int setExternalDataFrameOutput(bool localEnable, bool remoteEnable) = 0;
            virtual int startNetworkTest(const HRTCNetworkTestConfig* networkTestConfig) = 0;
            virtual int stopNetworkTest() = 0;
            virtual int enableRtcStats(bool enabled) = 0;
            virtual int enableHowlingDetect(bool enabled) = 0;
            virtual int enableHowlingControl(bool enabled) = 0;
            virtual int enableVideoBeauty(bool enabled) = 0;
            virtual int enableVideoBrighten(bool enabled) = 0;
            virtual int enableAudioTNR(bool enabled) = 0;
            virtual int setDefaultImage(const char* imagePath) = 0;
            virtual int setPriorRemoteVideoStreamType(HRTCVideoStreamType type) = 0;
            virtual int setRemoteVideoStreamType(const char *userId, HRTCVideoStreamType type) = 0;
            virtual int setRemoteVideoAdjustResolution(bool enable) = 0;
            virtual int disableRejoinRoom(bool disable) = 0;
            virtual int enableEncryption(bool enable) = 0;
            virtual int setDefaultMuteAllRemoteAudioStreams(bool mute) = 0;
            virtual int setDefaultMuteAllRemoteVideoStreams(bool mute) = 0;
            virtual int setDefaultMuteLocalVideoStreams(bool mute) = 0;
            virtual IHRTCScreenCaptureSourceList*  getScreenCaptureSources(HRTCScreenCaptureIconType type) = 0;
            virtual int selectScreenCaptureTarget(HRTCScreenCaptureSourceInfo* info, HRTCSrceenCaptureOptionalInfo* optionalInfo) = 0;
            virtual int setSubStreamEncParam(HRTCSubStreamEncParam &encoderParams) = 0;
            virtual int setUserNotifyType(HRTCUserNotifyType type) = 0;
            virtual int enableTopThreeAudioMode(unsigned int enabled) = 0;
            virtual int setRemoteAudioMode(HRTCRemoteAudioMode mode)= 0;
            virtual IHRTCAudioDeviceManager* getAudioDeviceManager() = 0;
            virtual IHRTCVideoDeviceManager* getVideoDeviceManager() = 0;
            virtual IHRTCMediaEngine* getMediaEngine() = 0;
            virtual int enableStreamRecvPacketNotify(bool enable, int timeInterval) = 0;
            virtual int setParameters(const char* configs) = 0;
            virtual int changeUserName(const char* userName) = 0;
            virtual int startAudioFile(const char *filePath, int publish, int cycle, int replace) = 0;
            virtual int startAudioFile(const char *filePath, int publish, int cycle, int replace, unsigned int startPos) = 0;
            virtual int stopAudioFile() = 0;
            virtual int pauseAudioFile() = 0;
            virtual int resumeAudioFile() = 0;
            virtual int adjustAudioFileVolume(unsigned int volume) = 0;
            virtual int adjustAudioFilePlayoutVolume(unsigned int volume) = 0;
            virtual int adjustAudioFilePublishVolume(unsigned int volume) = 0;
            virtual int getAudioFileVolume() = 0;
            virtual int getAudioFilePlayoutVolume() = 0;
            virtual int getAudioFilePublishVolume() = 0;
            virtual int getAudioFileDuration() = 0;
            virtual int getAudioFilePosition() = 0;
            virtual int setAudioFilePosition(unsigned long long position) = 0;
            virtual int startEchoTest(int intervalInSeconds) = 0;
            virtual int stopEchoTest() = 0;
            virtual int getAudioClipsVolume() = 0;
            virtual int setAudioClipsVolume(double volume) = 0;
            virtual int getVolumeOfAudioClip(int soundId) = 0;
            virtual int setVolumeOfAudioClip(int soundId, double volume) = 0;
            virtual int playAudioClip(int soundId, const char *filePath,
                int loop, double pitch, double pan, double gain, int publish, int startPos) = 0;
            virtual int stopAudioClip(int soundId) = 0;
            virtual int stopAllAudioClips() = 0;
            virtual int preloadAudioClip(int soundId, const char *filePath) = 0;
            virtual int unloadAudioClip(int soundId) = 0;
            virtual int pauseAudioClip(int soundId) = 0;
            virtual int pauseAllAudioClips() = 0;
            virtual int resumeAudioClip(int soundId) = 0;
            virtual int resumeAllAudioClips() = 0;
            virtual int getAudioClipCurrentPosition(int soundId) = 0;
            virtual int setAudioClipPosition(int soundId, int pos) = 0;
            virtual int getAudioClipDuration(const char *filePath) = 0;
            virtual int setAudioVqeModel(HRTCAudioQueModel model) = 0;
            virtual int addExcludedShareWindow(view_t view) = 0;
            virtual int removeExcludedShareWindow(view_t view) = 0;
            virtual int removeAllExcludedShareWindow() = 0;
            virtual int loadVoiceActivityDetectionModel(const unsigned int type, const char *modelPath) = 0;
            virtual int unloadVoiceActivityDetectionModel(const unsigned int type) = 0;
            virtual int loadHowlingControlModel(const char *modelPath) = 0;
            virtual int unloadHowlingControlModel() = 0;
            virtual int enableVoiceBasedDenoising(bool enabled) = 0;
            virtual int enablePassHardWareParam(bool enabled) = 0;
            virtual int setVideoEncodeResolutionMode(HRTCVideoEncodeResolutionMode resolutionMode) = 0;
            virtual int enableTls(bool enable) = 0;
            virtual int enableSrtp(bool enable) = 0;
            virtual int trackNetworkChanged(const char *network) = 0;
            virtual int setGSensorMode(HRTCGSensorMode mode) = 0;
            virtual int setDefaultSpeakerModel(HRTCSpeakerModel speakerModel) = 0;
            virtual char* getDeviceId() = 0;
            virtual int queryInterface(HRTCInterfaceIdType iid, void **inter) = 0;
            virtual int setMaxCaptureFrameRate(unsigned int maxFrameRate) = 0;
            virtual int addPluginTrackInfo(HRTCPluginTrackInfo trackInfo) = 0; // 添加插件模块的打点信息
            virtual int getRenderMode() = 0;
            virtual bool getH265EnableBeforeJoin() = 0;
            virtual int setHmeVqeParam(const char* vqeParam) = 0;
            virtual int enableHdSvc(bool enable) = 0;
            virtual int configAudioFrequencyParam(bool enable, unsigned int period, const char* filePath) = 0;
        };
        
        HRTC_API void* HRTC_CALL createRenderer(void* context);
        HRTC_API char* HRTC_CALL getVersion();
    } // namespace mmr
} // namespace huawei


/** Creates the MmrEngine object and returns the pointer.return Pointer to the MmrEngine object. */
HRTC_API huawei::mmr::IHRTCEngine* HRTC_CALL createMmrEngine(void);
/** returns the pointer.return Pointer to the MmrEngine object.*/
HRTC_API huawei::mmr::IHRTCEngine* HRTC_CALL getMmrEngine(void);
#endif
