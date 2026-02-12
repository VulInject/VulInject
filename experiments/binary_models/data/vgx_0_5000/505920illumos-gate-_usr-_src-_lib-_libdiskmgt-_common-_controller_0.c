static descriptor_t **
get_assoc_drives(descriptor_t *desc, int *errp)
{
controller_t	*cp;
descriptor_t	**drives;
int		cnt;
int		i;

cp = desc->p.controller;


for (cnt = 0; cp->disks[cnt]; cnt++);


drives = (descriptor_t **)calloc(cnt + 1, sizeof (descriptor_t *));
if (drives == NULL) {
*errp = ENOMEM;
return (NULL);
}

for (i = 0; cp->disks[i]; i++) {
drives[i] = cache_get_desc(DM_DRIVE, cp->disks[i], NULL, NULL,
errp);
if (*errp != 0) {
cache_free_descriptors(drives);
return (NULL);
}
}
drives[i] = NULL;

*errp = 0;
return (drives);
}