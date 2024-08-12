VAR1 *
FUN1(enum xkb_file_type VAR2, char *VAR3, VAR4 *VAR5,
enum xkb_map_flags VAR6)
{
VAR1 *VAR7;

VAR7 = calloc(1, sizeof(*VAR7));
if (!VAR7)
return NULL;

FUN2(VAR3);
VAR7->VAR8 = VAR2;
VAR7->VAR3 = VAR3 ? VAR3 : strdup("");
VAR7->VAR5 = VAR5;
VAR7->VAR6 = VAR6;

return VAR7;
}