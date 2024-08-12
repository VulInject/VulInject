}
FUN1(VAR1);

int FUN2(struct VAR2 *VAR3, int VAR4, int VAR5)
{
if (VAR4 <= 0)
return -VAR6;

VAR4 = FUN3(VAR4, 4);

return FUN4(VAR3,
FUN5(VAR3->VAR7, VAR8),
VAR3->VAR9, VAR4, 0, NULL, VAR5);
}