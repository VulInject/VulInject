int FUN1(void)
{
struct VAR1 *VAR2;

if (FUN2(VAR3->VAR4))
return 0;

VAR2 = FUN3(sizeof(*VAR2), VAR5);

if (!VAR2)
return -VAR6;

FUN4(&VAR2->VAR7);

VAR2->VAR8 = NULL;
FUN5(&VAR2->VAR9, 1);
VAR2->VAR10 = VAR11;

VAR3->VAR4 = VAR2;

return 0;
}