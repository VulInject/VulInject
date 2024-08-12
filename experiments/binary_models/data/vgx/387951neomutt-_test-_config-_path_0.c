static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
FUN2(VAR5);
struct VAR6 *VAR7 = VAR2->VAR7;

const char *VAR8 = FUN3(VAR2, "");
const char *VAR9 = FUN3(VAR2, "");

FUN4("", VAR8);
FUN4("", VAR9);

if (!FUN5(FUN6(VAR8, "")))
{
FUN4("");
return false;
}

if (!FUN5(FUN6(VAR9, "")))
{
FUN4("");
return false;
}

FUN7(VAR7, "", "", VAR4);
FUN7(VAR7, "", NULL, VAR4);

VAR8 = FUN3(VAR2, "");
VAR9 = FUN3(VAR2, "");

struct VAR3 *VAR10 = FUN8();

int VAR11;

FUN9(VAR10);
VAR11 = FUN10(VAR7, "", VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

VAR8 = FUN3(VAR2, "");
if (!FUN5(FUN6(FUN12(VAR10), "")))
{
FUN4("", FUN12(VAR10));
return false;
}
FUN4("", VAR8);
FUN4("", FUN12(VAR10));

FUN9(VAR10);
VAR11 = FUN10(VAR7, "", VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

VAR9 = FUN3(VAR2, "");
if (!FUN5(FUN6(FUN12(VAR10), "")))
{
FUN4("", FUN12(VAR10));
return false;
}
FUN4("", VAR9);
FUN4("", FUN13(FUN12(VAR10)));

FUN9(VAR10);
VAR11 = FUN14(VAR7, "", (const char *) VAR13[2].VAR14, VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

FUN9(VAR10);
VAR11 = FUN14(VAR7, "", "", VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

FUN9(VAR10);
VAR11 = FUN14(VAR7, "", "", VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

FUN9(VAR10);
VAR11 = FUN10(VAR7, "", VAR10);
if (!FUN5(FUN11(VAR11) == VAR12))
{
FUN4("", FUN12(VAR10));
return false;
}

const char *VAR15 = FUN3(VAR2, "");
FUN4("", VAR15);
FUN4("", FUN13(FUN12(VAR10)));

FUN15(&VAR10);
FUN2(VAR5);
return true;
}