static int qd_find_disk_type (ide_drive_t *drive,
int *active_time, int *recovery_time)
{
struct qd65xx_timing_s *p;
char *m = (char *)&drive->id[ATA_ID_PROD];
char model[ATA_ID_PROD_LEN];

if (*m == 0)
return 0;

strncpy(model, m, ATA_ID_PROD_LEN);
ide_fixstring(model, ATA_ID_PROD_LEN, 1); 

for (p = qd65xx_timing ; p->offset != -1 ; p++) {
if (!strncmp(p->model, model+p->offset, 4)) {
printk(KERN_DEBUG "%s: listed !\n", drive->name);
*active_time = p->active;
*recovery_time = p->recovery;
return 1;
}
}
return 0;
}