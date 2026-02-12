static gboolean
diam_tree_to_csv(proto_node *node, gpointer data)
{
char		  *val_str = NULL;
char		  *val_tmp = NULL;
ftenum_t	   ftype;
field_info	  *fi;
header_field_info *hfi;

if (!node) {
fprintf(stderr, "traverse end: empty node. node='%p' data='%p'\n", (void *)node, (void *)data);
return FALSE;
}
fi = node->finfo;
hfi = fi ? fi->hfinfo : NULL;
if (!hfi) {
fprintf(stderr, "traverse end: hfi not found. node='%p'\n", (void *)node);
return FALSE;
}
ftype = fvalue_type_ftenum(&fi->value);
if (ftype != FT_NONE && ftype != FT_PROTOCOL) {

val_tmp = fvalue_to_string_repr(NULL, &fi->value, FTREPR_DISPLAY, hfi->display);
if (val_tmp)
{
val_str = g_strdup(val_tmp);
wmem_free(NULL, val_tmp);
} else
val_str = ws_strdup_printf("unsupported type: %s", ftype_name(ftype));


printf("%s='%s' ", hfi->name, val_str);
g_free(val_str);
}
return FALSE;
}