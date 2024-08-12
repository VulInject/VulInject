static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
FUN2(VAR5);
struct VAR6 *VAR7 = VAR2->VAR7;
const char *VAR8 = "";

int VAR9 = FUN3(VAR7, VAR8, "", VAR4);
if (!FUN4(FUN5(VAR9) == VAR10))
return false;

const char *VAR11 = FUN6(VAR2, "");
FUN7(VAR4);
intptr_t VAR12 = FUN8(VAR7, VAR8, VAR4);
if (!FUN4(FUN9(VAR11, (char *) VAR12)))
{
FUN10("", FUN11(VAR4));
return false;
}
FUN10("", VAR8, VAR11, (char *) VAR12);

FUN2(VAR5);
return true;
}