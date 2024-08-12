static bool FUN1(VAR1 *VAR2, const char *VAR3)
{
if (!VAR2->VAR4)
return FUN2(VAR2, "");

if (!VAR3[0]) {
FUN3("");
if (VAR5 != VAR6)
FUN4();
else
return FUN2(VAR2, "");
} else {
VAR7 *VAR8 = FUN5(VAR3);
FUN3("", VAR3);
if (VAR8 == NULL)
return FUN2(VAR2, "", VAR3);
if (!VAR8->VAR9)
return FUN2(VAR2, "", VAR3);
VAR8->VAR9 = false;
}
return FUN6(VAR2, "");
}