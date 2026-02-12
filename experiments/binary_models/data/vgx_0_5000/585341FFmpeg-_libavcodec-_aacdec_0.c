static void apply_independent_coupling(AACContext *ac,
SingleChannelElement *target,
ChannelElement *cce, int index)
{
const float gain = cce->coup.gain[index][0];
const float *src = cce->ch[0].ret;
float *dest = target->ret;
const int len = 1024 << (ac->oc[1].m4ac.sbr == 1);

ac->fdsp->vector_fmac_scalar(dest, src, gain, len);
}



struct LATMContext {
AACContext aac_ctx;     

int initialized;        



int audio_mux_version_A; 

int frame_length_type;   

int frame_length;        

};