static VAR1
FUN1(VAR2 *VAR3, bool VAR4, int VAR5)
{
const VAR6 *VAR7;
Relation	VAR8;
Relation	VAR9;
VAR10 *VAR11;
RI_QueryKey VAR12;
SPIPlanPtr	VAR13;
int32		VAR14;

VAR7 = FUN2(VAR3->VAR15,
VAR3->VAR16, true);


VAR8 = FUN3(VAR7->VAR17, VAR18);
VAR9 = VAR3->VAR16;
VAR11 = VAR3->VAR19;

if (FUN4() != VAR20)
FUN5(VAR21, "");


switch (VAR5)
{
case VAR22:
VAR14 = VAR4
? VAR23
: VAR24;
break;
case VAR25:
VAR14 = VAR4
? VAR26
: VAR27;
break;
default:
FUN5(VAR21, "");
}

FUN6(&VAR12, VAR7, VAR14);

if ((VAR13 = FUN7(&VAR12)) == NULL)
{
StringInfoData VAR28;
char		VAR29[VAR30];
char		VAR31[VAR32];
char		VAR33[16];
const char *VAR34;
const char *VAR35;
Oid			VAR36[VAR37];
const char *VAR38;
int			VAR39;
const VAR40 *VAR41;

switch (VAR5)
{
case VAR22:
VAR39 = VAR7->VAR42;
VAR41 = VAR7->VAR43;
break;
case VAR25:


if (VAR7->VAR44 != 0)
{
VAR39 = VAR7->VAR44;
VAR41 = VAR7->VAR45;
}
else
{
VAR39 = VAR7->VAR42;
VAR41 = VAR7->VAR43;
}
break;
default:
FUN5(VAR21, "");
}


FUN8(&VAR28);
VAR38 = VAR8->VAR46->VAR47 == VAR48 ?
"" : "";
FUN9(VAR29, VAR8);
FUN10(&VAR28, "",
VAR38, VAR29);


VAR34 = "";
for (int VAR49 = 0; VAR49 < VAR39; VAR49++)
{
FUN11(VAR31, FUN12(VAR8, VAR41[VAR49]));
FUN10(&VAR28,
"",
VAR34, VAR31,
VAR4 ? "" : "");
VAR34 = "";
}


VAR35 = "";
for (int VAR49 = 0; VAR49 < VAR7->VAR42; VAR49++)
{
Oid			VAR50 = FUN13(VAR9, VAR7->VAR51[VAR49]);
Oid			VAR52 = FUN13(VAR8, VAR7->VAR43[VAR49]);
Oid			VAR53 = FUN14(VAR9, VAR7->VAR51[VAR49]);
Oid			VAR54 = FUN14(VAR8, VAR7->VAR43[VAR49]);

FUN11(VAR31,
FUN12(VAR8, VAR7->VAR43[VAR49]));

sprintf(VAR33, "", VAR49 + 1);
FUN15(&VAR28, VAR35,
VAR33, VAR50,
VAR7->VAR55[VAR49],
VAR31, VAR52);
if (VAR53 != VAR54 && !FUN16(VAR53))
FUN17(&VAR28, VAR53);
VAR35 = "";
VAR36[VAR49] = VAR50;
}


VAR13 = FUN18(VAR28.VAR56, VAR7->VAR42, VAR36,
&VAR12, VAR8, VAR9);
}


FUN19(VAR7, &VAR12, VAR13,
VAR8, VAR9,
VAR11, NULL,
true,		
VAR57);

if (FUN20() != VAR58)
FUN5(VAR21, "");

FUN21(VAR8, VAR18);

if (VAR4)
return FUN22(NULL);
else
{

return FUN23(VAR3, true);
}
}