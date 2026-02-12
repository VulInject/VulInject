static void
process_delete(char *fmri, scf_handle_t *h)
{
char *lfmri, *end_inst_fmri;
const char *inst_name = NULL;
const char *pg_name = NULL;
const char *prop_name = NULL;

lfmri = safe_strdup(fmri);


if (scf_parse_svc_fmri(lfmri, NULL, NULL, &inst_name, &pg_name,
&prop_name) != SCF_SUCCESS) {
log_error(LOG_WARNING,
"Received invalid FMRI \"%s\" from repository server.\n",
fmri);
} else if (inst_name != NULL && pg_name == NULL) {
(void) dgraph_remove_instance(fmri, h);
} else if (inst_name != NULL && pg_name != NULL) {

if (strcmp(pg_name, SCF_PG_GENERAL) != 0) {
free(lfmri);
return;
}

if (prop_name != NULL &&
strcmp(prop_name, SCF_PROPERTY_ENABLED) != 0) {
free(lfmri);
return;
}


end_inst_fmri = strstr(fmri, SCF_FMRI_PROPERTYGRP_PREFIX);
if (end_inst_fmri == NULL)
bad_error("process_delete", 0);

end_inst_fmri[0] = '\0';

(void) dgraph_remove_instance(fmri, h);
}

free(lfmri);
}