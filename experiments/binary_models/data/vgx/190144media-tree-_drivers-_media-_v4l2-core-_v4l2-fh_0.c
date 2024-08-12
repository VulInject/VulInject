int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(sizeof(*VAR6), VAR7);

VAR2->VAR8 = VAR6;
if (VAR6 == NULL)
return -VAR9;
FUN4(VAR6, VAR4);
FUN5(VAR6);
return 0;
}