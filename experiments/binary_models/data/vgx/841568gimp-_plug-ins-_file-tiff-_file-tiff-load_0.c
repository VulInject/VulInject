FUN1 (const VAR1       *VAR2,
VAR3 *VAR4,
const VAR1       *VAR5,
VAR6      *VAR7)
{
VAR8  *VAR9;
VAR8  *VAR10;
VAR8  *VAR11 = NULL;
VAR8  *VAR12  = NULL;
VAR8  *VAR13  = NULL;
gboolean    VAR14;

VAR4->VAR15 = NULL;

VAR9 = FUN2 (FUN3(""), VAR16,
NULL, 0,
VAR17, VAR2,

FUN3(""), VAR18,
FUN3(""), VAR19,

NULL);

FUN4 (FUN5 (VAR9),
VAR19,
VAR18,
-1);

FUN6 (FUN7 (VAR9));

VAR10 = FUN8 (VAR20, 12);
FUN9 (FUN10 (VAR10), 12);
FUN11 (FUN12 (FUN13 (FUN5 (VAR9))),
VAR10, VAR21, VAR21, 0);

VAR11 = FUN14 (FUN3(""));
FUN15 (FUN16 (VAR11),
VAR4->VAR11);
FUN11 (FUN12 (VAR10), VAR11, VAR21, VAR21, 0);

FUN17 (VAR11, "",
FUN18 (VAR22),
VAR4);

if (VAR4->VAR23 > 1)
{

VAR4->VAR15 = FUN19 ();
FUN20 (VAR4->VAR15, 300, 200);
FUN11 (FUN12 (VAR10), VAR4->VAR15, VAR21, VAR21, 0);

FUN21 (FUN22 (VAR4->VAR15),
VAR4->VAR24);
FUN23 (FUN22 (VAR4->VAR15),
VAR4->VAR25);


FUN24 (VAR11, VAR4);

FUN25 (VAR4->VAR15, "",
FUN18 (VAR26),
VAR9);


VAR12 = FUN14 (FUN3(""));
FUN15 (FUN16 (VAR12),
VAR4->VAR27);
FUN11 (FUN12 (VAR10), VAR12, VAR21, VAR21, 0);
}

if (VAR5)
{
VAR8 *VAR28;

VAR28 = FUN26 (VAR29,
"", VAR30,
"",      VAR5,
NULL);
FUN11 (FUN12 (VAR10), VAR28, VAR21, VAR21, 0);
FUN27 (VAR28);

VAR13 = FUN28 (VAR21, FUN3(""),
(VAR31) VAR32,
VAR7, NULL, VAR33,
FUN3(""), VAR33, NULL,
FUN3(""),     VAR34, NULL,
FUN3(""),                 VAR35,    NULL,
NULL);
FUN11 (FUN12 (VAR10), VAR13, VAR21, VAR21, 0);
FUN27 (VAR13);
}


FUN29 (VAR9);


VAR14 = (FUN30 (FUN31 (VAR9)) == VAR19);

if (VAR14)
{
if (VAR4->VAR23 > 1)
{
VAR4->VAR25 =
FUN32 (FUN22 (VAR4->VAR15));

VAR4->VAR4 =
FUN33 (FUN22 (VAR4->VAR15),
&VAR4->VAR23);

VAR4->VAR27 =
FUN34 (FUN16 (VAR12));


if (VAR4->VAR23 == 0)
{
FUN35 (FUN22 (VAR4->VAR15));

VAR4->VAR4 =
FUN33 (FUN22 (VAR4->VAR15),
&VAR4->VAR23);
}
}
}

return VAR14;
}