pango_lookup_aliases (const char   *fontname,
char       ***families,
int          *n_families)
{
struct PangoAlias alias_key;
struct PangoAlias *alias;

if (pango_aliases_ht == NULL)
pango_load_aliases ();

alias_key.alias = g_ascii_strdown (fontname, -1);
alias = g_hash_table_lookup (pango_aliases_ht, &alias_key);
g_free (alias_key.alias);

if (alias)
{
*families = alias->families;
*n_families = alias->n_families;
}
else
{
*families = NULL;
*n_families = 0;
}
}