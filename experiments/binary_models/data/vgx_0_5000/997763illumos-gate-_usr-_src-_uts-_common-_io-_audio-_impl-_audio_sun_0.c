static void
devaudio_input(audio_client_t *c)
{
audio_stream_t	*sp = auclnt_input_stream(c);
daclient_t	*dc = auclnt_get_private(c);
unsigned	framesz = auclnt_get_framesz(sp);
queue_t		*rq = auclnt_get_rq(c);
mblk_t		*mp;
unsigned	nbytes = dc->dc_proc->p_info.record.buffer_size;
unsigned	count = nbytes / framesz;



while (auclnt_get_count(sp) >= count) {

if ((!canput(rq)) ||
((mp = allocb(nbytes, BPRI_MED)) == NULL)) {

break;
}

(void) auclnt_consume_data(sp, (caddr_t)mp->b_wptr, count);
mp->b_wptr += nbytes;
(void) putq(rq, mp);
}
}