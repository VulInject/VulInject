static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6, 0);
struct VAR7 *VAR9 = FUN4(VAR6, 0);
struct VAR10 *VAR11 = VAR6->VAR12;
int VAR13 = 0;
unsigned VAR14 = ((struct VAR15 *)
FUN5(VAR11))->VAR14;


VAR13 = FUN6(VAR8, 0, VAR14, VAR16);
if (VAR13 < 0)
return VAR13;


VAR13 = FUN6(VAR9, 0, VAR14, VAR16);
if (VAR13 < 0 && VAR13 != -VAR17)
return VAR13;

return 0;
}