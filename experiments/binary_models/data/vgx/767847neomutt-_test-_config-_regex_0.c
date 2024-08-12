static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
FUN2(VAR5);
struct VAR6 *VAR7 = VAR2->VAR7;
const char *VAR8 = "";

int VAR9 = FUN3(VAR7, VAR8, "", VAR4);
if (!FUN4(FUN5(VAR9) == VAR10))
return false;

FUN6(VAR4);
intptr_t VAR11 = FUN7(VAR7, VAR8, VAR4);
struct VAR12 *VAR13 = (struct VAR12 *) VAR11;

const struct VAR12 *VAR14 = FUN8(VAR2, "");
if (!FUN4(VAR14 == VAR13))
{
FUN9("", FUN10(VAR4));
return false;
}
char *VAR15 = VAR14 ? VAR14->VAR16 : NULL;
char *VAR17 = VAR13 ? VAR13->VAR16 : NULL;
FUN9("", VAR8, FUN11(VAR15), FUN11(VAR17));

FUN2(VAR5);
return true;
}