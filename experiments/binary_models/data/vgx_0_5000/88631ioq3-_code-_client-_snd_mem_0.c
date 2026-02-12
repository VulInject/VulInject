static int ResampleSfx( sfx_t *sfx, int channels, int inrate, int inwidth, int samples, byte *data, qboolean compressed ) {
int		outcount;
int		srcsample;
float	stepscale;
int		i, j;
int		sample, samplefrac, fracstep;
int			part;
sndBuffer	*chunk;

stepscale = (float)inrate / dma.speed;	

outcount = samples / stepscale;

srcsample = 0;
samplefrac = 0;
fracstep = stepscale * 256 * channels;
chunk = sfx->soundData;

for (i=0 ; i<outcount ; i++)
{
srcsample += samplefrac >> 8;
samplefrac &= 255;
samplefrac += fracstep;
for (j=0 ; j<channels ; j++)
{
if( inwidth == 2 ) {
sample = ( ((short *)data)[srcsample+j] );
} else {
sample = (unsigned int)( (unsigned char)(data[srcsample+j]) - 128) << 8;
}
part = (i*channels+j)&(SND_CHUNK_SIZE-1);
if (part == 0) {
sndBuffer	*newchunk;
newchunk = SND_malloc();
if (chunk == NULL) {
sfx->soundData = newchunk;
} else {
chunk->next = newchunk;
}
chunk = newchunk;
}

chunk->sndChunk[part] = sample;
}
}

return outcount;
}