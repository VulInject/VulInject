int synth_1to1_i586_dither(real *bandPtr, int channel, mpg123_handle *fr, int final)
{
int ret;
int bo_dither[2]; 
if(fr->have_eq_settings) do_equalizer(bandPtr,channel,fr->equalizer);

bo_dither[0] = fr->bo;
bo_dither[1] = fr->ditherindex;
ret = synth_1to1_i586_asm_dither(bandPtr, channel, fr->buffer.data+fr->buffer.fill, fr->rawbuffs, bo_dither, fr->decwin, fr->dithernoise);
fr->bo          = bo_dither[0];
fr->ditherindex = bo_dither[1];

if(final) fr->buffer.fill += 128;
return ret;
}