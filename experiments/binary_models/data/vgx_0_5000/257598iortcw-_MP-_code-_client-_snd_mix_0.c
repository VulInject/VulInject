void S_PaintChannelFromWavelet( channel_t *ch, sfx_t *sc, int count, int sampleOffset, int bufferOffset ) {
int						data;
int						leftvol, rightvol;
int						i;
portable_samplepair_t	*samp;
sndBuffer				*chunk;
short					*samples;

leftvol = ch->leftvol*snd_vol;
rightvol = ch->rightvol*snd_vol;

i = 0;
samp = &paintbuffer[ bufferOffset ];
chunk = sc->soundData;
while (sampleOffset>=(SND_CHUNK_SIZE_FLOAT*4)) {
chunk = chunk->next;
sampleOffset -= (SND_CHUNK_SIZE_FLOAT*4);
i++;
}

if (i!=sfxScratchIndex || sfxScratchPointer != sc) {
S_AdpcmGetSamples( chunk, sfxScratchBuffer );
sfxScratchIndex = i;
sfxScratchPointer = sc;
}

samples = sfxScratchBuffer;

for ( i=0 ; i<count ; i++ ) {
data  = samples[sampleOffset++];
samp[i].left += (data * leftvol)>>8;
samp[i].right += (data * rightvol)>>8;

if (sampleOffset == SND_CHUNK_SIZE*2) {
chunk = chunk->next;
decodeWavelet(chunk, sfxScratchBuffer);
sfxScratchIndex++;
sampleOffset = 0;
}
}
}