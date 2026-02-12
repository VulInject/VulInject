fmd_scheme_hash_t *
fmd_scheme_hash_create(const char *rootdir, const char *dirpath)
{
fmd_scheme_hash_t *shp;
char path[PATH_MAX];
fmd_scheme_t *sp;

shp = fmd_alloc(sizeof (fmd_scheme_hash_t), FMD_SLEEP);
(void) snprintf(path, sizeof (path), "%s/%s", rootdir, dirpath);
shp->sch_dirpath = fmd_strdup(path, FMD_SLEEP);
(void) pthread_rwlock_init(&shp->sch_rwlock, NULL);
shp->sch_hashlen = fmd.d_str_buckets;
shp->sch_hash = fmd_zalloc(sizeof (fmd_scheme_t *) *
shp->sch_hashlen, FMD_SLEEP);

sp = fmd_scheme_create(FM_FMRI_SCHEME_FMD);
sp->sch_ops = _fmd_scheme_builtin_ops;
sp->sch_loaded = FMD_B_TRUE;
shp->sch_hash[fmd_strhash(sp->sch_name) % shp->sch_hashlen] = sp;

return (shp);
}