static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;

if ((VAR4->VAR6->VAR7 & VAR8) == 0)
return -VAR9;  

if (VAR4->VAR10++ == 0) {
VAR11 *VAR12 = FUN2(VAR4->VAR6);
if (FUN3(VAR12)->VAR13.VAR14 == VAR15)
VAR4->VAR16.VAR17 = FUN4(VAR4->VAR6);

FUN5(VAR4->VAR16.VAR17, VAR4);
FUN3(VAR12)->VAR18 = 1;
}
return 0;
}