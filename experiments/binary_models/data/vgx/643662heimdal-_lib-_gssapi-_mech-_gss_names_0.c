struct VAR1 *
FUN1(gss_name_t VAR2,
struct VAR3 *VAR4)
{
struct VAR1 *VAR5;
struct VAR6 *VAR7;

VAR5 = calloc(1, sizeof(struct VAR1));
if (!VAR5)
return (0);

FUN2(&VAR5->VAR8);

if (VAR2) {
VAR7 = malloc(sizeof(struct VAR6));
if (!VAR7) {
free(VAR5);
return (0);
}

VAR7->VAR9 = VAR4;
VAR7->VAR10 = &VAR4->VAR11;
VAR7->VAR12 = VAR2;
FUN3(&VAR5->VAR8, VAR7, VAR13);
}

return (VAR5);
}