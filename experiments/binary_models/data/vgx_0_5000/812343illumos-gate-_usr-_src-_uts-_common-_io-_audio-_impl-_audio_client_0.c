int
auclnt_set_channels(audio_stream_t *sp, int nchan)
{
audio_parms_t	parms;
int		rv = 0;


if ((nchan > AUDIO_MAX_CHANNELS) || (nchan < 1)) {
return (EINVAL);
}

if (nchan != sp->s_user_parms->p_nchan) {
parms.p_nchan = nchan;
rv = auimpl_engine_setup(sp, 0, &parms, FORMAT_MSK_CHAN);
}

return (rv);
}