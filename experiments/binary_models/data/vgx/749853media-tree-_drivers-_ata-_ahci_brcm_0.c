static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR4->VAR7;
struct VAR8 *VAR9 = VAR6->VAR10;

FUN3(VAR9);
FUN4(VAR9);
FUN5(VAR6);
return FUN6(VAR2);
}