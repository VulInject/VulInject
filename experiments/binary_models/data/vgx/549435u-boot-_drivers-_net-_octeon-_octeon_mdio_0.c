static int FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4, int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = VAR7->VAR8;
int VAR10;

FUN3("", VAR11,
VAR9, VAR9->VAR12, VAR7->VAR13, VAR3, VAR4, VAR5);
if (FUN4(VAR14) && VAR4 != VAR15) {
FUN3("");
VAR10 = FUN5(VAR7->VAR13 & 0xff, VAR3, VAR4,
VAR5);
} else {
VAR10 = FUN6(VAR7->VAR13 & 0xff, VAR3, VAR5);
}

FUN3("", VAR10);
return VAR10;
}