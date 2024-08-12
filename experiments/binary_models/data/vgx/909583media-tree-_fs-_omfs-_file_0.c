static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR4 = FUN2(VAR1);
int VAR5;

VAR5 = FUN3(VAR1, VAR3);
if (VAR5)
return VAR5;

if ((VAR3->VAR6 & VAR7) &&
VAR3->VAR8 != FUN4(VAR4)) {
VAR5 = FUN5(VAR4, VAR3->VAR8);
if (VAR5)
return VAR5;
FUN6(VAR4, VAR3->VAR8);
FUN7(VAR4);
}

FUN8(VAR4, VAR3);
FUN9(VAR4);
return 0;
}