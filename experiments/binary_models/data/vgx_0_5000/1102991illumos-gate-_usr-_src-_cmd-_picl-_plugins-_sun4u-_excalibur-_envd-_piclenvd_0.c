static int
get_lpm_speed(lpm_dev_t *lpmdevs, int temp)
{
lpm_dev_t	*devp;
int		lpm;
int		speed;
int		maxspeed;

if (lpmdevs == NULL)
return (0);
maxspeed = 0;
for (devp = lpmdevs; devp != NULL; devp = devp->next) {
if (devp->temp_lpm_tbl == NULL)
continue;
lpm = y_of_x(devp->temp_lpm_tbl, temp);
if (env_debug)
envd_log(LOG_INFO, "ambient %d lpm %d\n", temp, lpm);
speed = y_of_x(&lpm_fspeed, lpm);
maxspeed = maxspeed > speed ? maxspeed : speed;
if (env_debug)
envd_log(LOG_INFO, "lpm %d fanspeed %d\n", lpm, speed);
}
return (maxspeed);
}