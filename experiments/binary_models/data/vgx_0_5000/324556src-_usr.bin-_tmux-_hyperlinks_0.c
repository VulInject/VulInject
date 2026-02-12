int
hyperlinks_get(struct hyperlinks *hl, u_int inner, const char **uri_out,
const char **internal_id_out, const char **external_id_out)
{
struct hyperlinks_uri	find, *hlu;

find.inner = inner;

hlu = RB_FIND(hyperlinks_by_inner_tree, &hl->by_inner, &find);
if (hlu == NULL)
return (0);
if (internal_id_out != NULL)
*internal_id_out = hlu->internal_id;
if (external_id_out != NULL)
*external_id_out = hlu->external_id;
*uri_out = hlu->uri;
return (1);
}