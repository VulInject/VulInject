void mf_peer_rdpsnd_input_callback(void* inUserData, AudioQueueRef inAQ,
AudioQueueBufferRef inBuffer, const AudioTimeStamp* inStartTime,
UInt32 inNumberPacketDescriptions,
const AudioStreamPacketDescription* inPacketDescs)
{
OSStatus status;
AQRecorderState* rState;
rState = inUserData;

if (inNumberPacketDescriptions == 0 && rState->dataFormat.mBytesPerPacket != 0)
{
inNumberPacketDescriptions =
inBuffer->mAudioDataByteSize / rState->dataFormat.mBytesPerPacket;
}

if (rState->isRunning == 0)
{
return;
}

rState->snd_context->SendSamples(rState->snd_context, inBuffer->mAudioData,
inBuffer->mAudioDataByteSize / 4,
(UINT16)(GetTickCount() & 0xffff));
status = AudioQueueEnqueueBuffer(rState->queue, inBuffer, 0, NULL);

if (status != noErr)
{
WLog_DBG(TAG, "AudioQueueEnqueueBuffer() returned status = %" PRId32 "", status);
}
}