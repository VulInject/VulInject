int FUN1(struct VAR1 *VAR2, const char *VAR3,
struct VAR4 *VAR5)
{

FUN2((void *)VAR2, sizeof(*VAR2));
FUN3(&VAR2->VAR6, VAR3, VAR5, 0);
FUN4(&VAR2->VAR7);
return FUN5(VAR2, false);
}