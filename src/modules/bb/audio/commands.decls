LoadSound.BBSound( filename$ ):"bbLoadSound"
Load3DSound.BBSound( filename$ ):"bbLoad3DSound"
FreeSound( sound.BBSound ):"bbFreeSound"
LoopSound( sound.BBSound ):"bbLoopSound"
SoundPitch( sound.BBSound,pitch% ):"bbSoundPitch"
SoundVolume( sound.BBSound,volume# ):"bbSoundVolume"
SoundPan( sound.BBSound,pan# ):"bbSoundPan"
PlaySound.BBChannel( sound.BBSound ):"bbPlaySound"
PlayMusic.BBChannel( filename$ ):"bbPlayMusic"
PlayCDTrack.BBChannel( track%,mode%=1 ):"bbPlayCDTrack"
StopChannel( channel.BBChannel ):"bbStopChannel"
PauseChannel( channel.BBChannel ):"bbPauseChannel"
ResumeChannel( channel.BBChannel ):"bbResumeChannel"
ChannelPitch( channel.BBChannel,pitch% ):"bbChannelPitch"
ChannelVolume( channel.BBChannel,volume# ):"bbChannelVolume"
ChannelPan( channel.BBChannel,pan# ):"bbChannelPan"
ChannelPlaying%( channel.BBChannel ):"bbChannelPlaying"