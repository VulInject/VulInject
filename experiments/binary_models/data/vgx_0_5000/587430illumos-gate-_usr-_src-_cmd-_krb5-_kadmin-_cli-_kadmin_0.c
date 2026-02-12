static void
kadmin_free_tl_data(kadm5_principal_ent_t princ)
{
krb5_tl_data *tl_data = princ->tl_data;
int n_tl_data         = princ->n_tl_data;
int i;

princ->n_tl_data = 0;
princ->tl_data   = NULL;

for (i = 0; tl_data && (i < n_tl_data); i++) {
krb5_tl_data *next = tl_data->tl_data_next;
if (tl_data->tl_data_contents)
free(tl_data->tl_data_contents);
free(tl_data);
tl_data = next;
}
}