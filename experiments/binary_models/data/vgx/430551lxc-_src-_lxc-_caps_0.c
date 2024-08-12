int FUN1(void)
{
uid_t VAR1, VAR2;

VAR2 = FUN2();
if (!VAR2)
return 0;

VAR1 = FUN3();
if (VAR2 && !VAR1) {
int VAR3;
gid_t VAR4;

FUN4("", VAR2);

VAR3 = FUN5(VAR5, FUN6(1));
if (VAR3 < 0)
return FUN7(-1, VAR6, "");

VAR4 = FUN8();
VAR3 = FUN9(VAR4, VAR4, VAR4);
if (VAR3 < 0)
return FUN7(-1, VAR6, "", VAR4);

VAR3 = FUN10(VAR2, VAR2, VAR2);
if (VAR3 < 0)
return FUN7(-1, VAR6, "", VAR2);

VAR3 = FUN11();
if (VAR3 < 0)
return FUN7(-1, VAR6, "");
}

if (VAR2 == VAR1)
FUN4("", VAR2);

return 0;
}