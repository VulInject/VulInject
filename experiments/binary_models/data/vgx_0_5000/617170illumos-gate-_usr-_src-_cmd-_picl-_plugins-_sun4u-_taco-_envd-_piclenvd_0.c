static int
get_tach(ptree_rarg_t *parg, void *buf)
{
picl_prophdl_t	proph;
env_tuneable_t	*tuneablep;
int		fd;
int8_t		cfg;

proph = parg->proph;

tuneablep = tuneable_lookup(proph);

if (tuneablep == NULL)
return (PICL_FAILURE);

fd = open(CPU_HWM_DEVFS, O_RDWR);

if (fd == -1) {
return (PICL_FAILURE);
}

if (ioctl(fd, ADM1031_GET_CONFIG_2, &cfg) == -1) {
return (PICL_FAILURE);
}

if ((cfg & TACH_ENABLE_MASK) == TACH_ENABLE_MASK) {
*((int *)tuneablep->value) = ENABLE;

} else {
*((int *)tuneablep->value) = DISABLE;
}

(void) memcpy(buf, tuneablep->value,
tuneablep->nbytes);

(void) close(fd);
return (PICL_SUCCESS);
}