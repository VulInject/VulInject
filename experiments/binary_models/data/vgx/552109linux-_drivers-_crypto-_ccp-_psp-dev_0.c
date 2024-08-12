static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR5;
struct VAR1 *VAR6;

VAR6 = FUN2(VAR5, sizeof(*VAR6), VAR7);
if (!VAR6)
return NULL;

VAR6->VAR5 = VAR5;
VAR6->VAR3 = VAR3;

snprintf(VAR6->VAR8, sizeof(VAR6->VAR8), "", VAR3->VAR9);

return VAR6;
}