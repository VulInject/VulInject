static int
get_pg_source(scf_propertygroup_t *pg, nvlist_t *params)
{
size_t sz = scf_limit(SCF_LIMIT_MAX_FMRI_LENGTH) + 1;
char *fmri = malloc(sz);
char *p;
int r = SCF_FAILED;

if (fmri == NULL) {
(void) scf_set_error(SCF_ERROR_NO_MEMORY);
goto out;
}

if (scf_pg_to_fmri(pg, fmri, sz) == -1) {
if (check_scf_error(scf_error(), errs_1)) {
goto out;
}
}


if ((p = strrchr(fmri, ':')) != NULL && p > fmri)
*(p - 1) = '\0';
if (nvlist_add_string(params, SCF_NOTIFY_PARAMS_SOURCE_NAME, fmri) !=
0) {
(void) scf_set_error(SCF_ERROR_NO_MEMORY);
goto out;
}

r = SCF_SUCCESS;
out:
free(fmri);
return (r);
}