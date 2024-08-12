static void FUN1(struct VAR1 *VAR2)
{
const char *VAR3, *VAR4, *VAR5;
static const char *VAR6[] = {
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
};


if (VAR2->VAR7 < VAR8) {
FUN2("",
VAR2->VAR7);
return;
}
switch (VAR2->VAR9) {
case VAR10:
VAR3 = VAR11;
VAR4 = "";
break;
case VAR12:
VAR3 = VAR13;
VAR4 = "";
break;
case VAR14:
VAR3 = VAR15;
VAR4 = "";
break;
case VAR16:
default:
VAR3 = VAR15;
VAR4 = "";
break;
}

FUN3("",
VAR3, VAR4,
VAR2->VAR17 == VAR18 ?
"" : "");
VAR5 = VAR2->VAR19 < FUN4(VAR6) ?
VAR6[VAR2->VAR19]
: "";
FUN3("", VAR3, VAR5);
FUN3("", VAR3, FUN5(VAR2->VAR20));
if ((VAR2->VAR19 == VAR21) ||
(VAR2->VAR19 == VAR22))
FUN3("", VAR3,
FUN5(VAR2->VAR23));

if (VAR2->VAR7 < VAR24)
return;


if (VAR2->VAR19 == VAR25)
FUN6(VAR3, VAR2);
}