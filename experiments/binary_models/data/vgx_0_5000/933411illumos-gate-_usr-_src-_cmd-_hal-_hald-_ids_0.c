ids_find_pnp (const char *pnp_id, char **pnp_description)
{
static gboolean sorted = FALSE;
struct pnp_id search, *res;

if (!sorted) {

qsort(pnp_ids_list, sizeof(pnp_ids_list)/sizeof(pnp_ids_list[0]), 
sizeof(struct pnp_id), ids_comp_pnp);
sorted = TRUE;
}

search.id = (char *) pnp_id;
res = bsearch(&search, pnp_ids_list, sizeof(pnp_ids_list)/sizeof(pnp_ids_list[0]), 
sizeof(struct pnp_id), ids_comp_pnp);

if (res != NULL)
*pnp_description = res->desc;
else
*pnp_description = NULL; 
return;
}