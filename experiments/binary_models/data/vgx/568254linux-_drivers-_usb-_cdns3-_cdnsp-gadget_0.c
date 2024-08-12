static struct VAR1 *FUN1(struct VAR2 *VAR3,
gfp_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR3);
struct VAR7 *VAR8;

VAR8 = FUN3(sizeof(*VAR8), VAR4);
if (!VAR8)
return NULL;

VAR8->VAR9 = VAR6->VAR10;
VAR8->VAR6 = VAR6;

FUN4(VAR8);

return &VAR8->VAR11;
}