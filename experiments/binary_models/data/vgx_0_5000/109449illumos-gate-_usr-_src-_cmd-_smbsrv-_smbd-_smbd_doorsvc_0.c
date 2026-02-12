void
smbd_door_fini(smbd_door_t *sdh)
{
timestruc_t	delay;
int		rc = 0;

(void) mutex_lock(&sdh->sd_mutex);

while (rc != ETIME && sdh->sd_ncalls != 0) {
delay.tv_sec = 1;
delay.tv_nsec = 0;
rc = cond_reltimedwait(&sdh->sd_cv, &sdh->sd_mutex, &delay);
}

if (sdh->sd_ncalls != 0)
syslog(LOG_NOTICE, "smbd_door_fini[%s]: %d remaining",
sdh->sd_name, sdh->sd_ncalls);

(void) mutex_unlock(&sdh->sd_mutex);
}