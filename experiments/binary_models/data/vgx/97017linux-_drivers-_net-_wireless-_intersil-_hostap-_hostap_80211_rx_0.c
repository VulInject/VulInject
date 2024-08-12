void FUN1(const char *VAR1, struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
u16 VAR8;

VAR7 = (struct VAR6 *) VAR3->VAR9;

FUN2(VAR10 ""
"",
VAR1, VAR5->signal, VAR5->VAR11, VAR5->VAR12,
VAR3->VAR13, VAR14);

if (VAR3->VAR13 < 2)
return;

VAR8 = FUN3(VAR7->VAR15);
FUN2(VAR10 "",
VAR8, (VAR8 & VAR16) >> 2,
(VAR8 & VAR17) >> 4,
VAR8 & VAR18 ? "" : "",
VAR8 & VAR19 ? "" : "");

if (VAR3->VAR13 < VAR20) {
FUN2("");
return;
}

FUN2("", FUN3(VAR7->VAR21),
FUN3(VAR7->VAR22));

FUN2(VAR10 "", VAR7->VAR23);
FUN2("", VAR7->VAR24);
FUN2("", VAR7->VAR25);
if (VAR3->VAR13 >= 30)
FUN2("", VAR7->VAR26);
FUN2("");
}