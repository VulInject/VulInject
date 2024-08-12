static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(VAR1->VAR6, struct VAR4, VAR7);
if (!VAR5->VAR8)
return -VAR9;

if (FUN3(&VAR5->VAR10, 1, 0) == 0)
return -VAR11;


FUN4(&VAR5->VAR12);
FUN5(VAR1, VAR3);
VAR3->VAR13 = VAR5;

return 0;
}