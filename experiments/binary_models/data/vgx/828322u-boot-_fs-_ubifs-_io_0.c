static enum VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3, struct VAR4, VAR3);

FUN3("", FUN4(VAR5->VAR6));
VAR5->VAR7 = 1;
VAR5->VAR8->VAR9 = 1;
FUN5(VAR5->VAR8);
return VAR10;
}