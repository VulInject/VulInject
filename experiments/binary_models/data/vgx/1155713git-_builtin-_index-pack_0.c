static int FUN1(const char *VAR1, const char *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

if (!strcmp(VAR1, "")) {
VAR5->VAR6 = FUN2(VAR1, VAR2);
if (VAR5->VAR6 > 2)
FUN3(FUN4(""VAR7), VAR5->VAR6);
return 0;
}
if (!strcmp(VAR1, "")) {
VAR8 = FUN2(VAR1, VAR2);
if (VAR8 < 0)
FUN3(FUN4(""),
VAR8);
if (!VAR9 && VAR8 != 1) {
FUN5(FUN4(""), VAR1);
VAR8 = 1;
}
return 0;
}
if (!strcmp(VAR1, "")) {
if (FUN6(VAR1, VAR2))
VAR5->VAR10 |= VAR11;
else
VAR5->VAR10 &= ~VAR11;
}
return FUN7(VAR1, VAR2, VAR3);
}