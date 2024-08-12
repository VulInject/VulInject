struct VAR1 *
FUN1(struct VAR2 *VAR3, int VAR4)
{
struct VAR5 *VAR6;
struct VAR1 *VAR7;

if (!FUN2(VAR4, VAR3->VAR8))
return NULL;

VAR7 = FUN3(sizeof(*VAR7), VAR9);
if (!VAR7)
return NULL;

VAR6 = VAR3->VAR10[VAR4];

VAR7->VAR6 = VAR6;

FUN4(&VAR3->VAR11);
FUN4(&VAR6->VAR12);

return VAR7;
}