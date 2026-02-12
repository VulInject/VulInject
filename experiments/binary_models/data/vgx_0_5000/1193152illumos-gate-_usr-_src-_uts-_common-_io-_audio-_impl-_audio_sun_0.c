static void
devaudio_drain(audio_client_t *c)
{
daclient_t	*dc = auclnt_get_private(c);
mblk_t		*mplist, *mp;

mutex_enter(&dc->dc_lock);
mplist = dc->dc_draining;
dc->dc_draining = NULL;
mutex_exit(&dc->dc_lock);

while ((mp = mplist) != NULL) {
mplist = mp->b_next;
mp->b_next = NULL;
mioc2ack(mp, NULL, 0, 0);
(void) putq(auclnt_get_rq(c), mp);
}
}