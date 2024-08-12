static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5,
bool VAR6,
Form_pg_sequence VAR7,
Form_pg_sequence_data VAR8,
bool *VAR9,
VAR3 **VAR10)
{
VAR11    *VAR12 = NULL;
VAR11    *VAR13 = NULL;
VAR11    *VAR14 = NULL;
VAR11    *VAR15 = NULL;
VAR11    *VAR16 = NULL;
VAR11    *VAR17 = NULL;
VAR11    *VAR18 = NULL;
VAR11    *VAR19 = NULL;
VAR20   *VAR21;
bool		VAR22 = false;
bool		VAR23 = false;

*VAR9 = false;
*VAR10 = VAR24;

FUN2(VAR21, VAR4)
{
VAR11    *VAR25 = (VAR11 *) FUN3(VAR21);

if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR12)
FUN4(VAR25, VAR2);
VAR12 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR15)
FUN4(VAR25, VAR2);
VAR15 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR13)
FUN4(VAR25, VAR2);
VAR13 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR14)
FUN4(VAR25, VAR2);
VAR14 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR16)
FUN4(VAR25, VAR2);
VAR16 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR17)
FUN4(VAR25, VAR2);
VAR17 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR18)
FUN4(VAR25, VAR2);
VAR18 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (VAR19)
FUN4(VAR25, VAR2);
VAR19 = VAR25;
*VAR9 = true;
}
else if (strcmp(VAR25->VAR26, "") == 0)
{
if (*VAR10)
FUN4(VAR25, VAR2);
*VAR10 = FUN5(VAR25);
}
else if (strcmp(VAR25->VAR26, "") == 0)
{

FUN6(VAR27,
(FUN7(VAR28),
FUN8(""),
FUN9(VAR2, VAR25->VAR29)));
}
else
FUN10(VAR27, ""%VAR30\"",
VAR25->VAR26);
}


if (VAR6)
VAR8->VAR31 = 0;


if (VAR12 != NULL)
{
Oid			VAR32 = FUN11(VAR2, FUN12(VAR12));

if (VAR32 != VAR33 &&
VAR32 != VAR34 &&
VAR32 != VAR35)
FUN6(VAR27,
(FUN7(VAR36),
VAR5
? FUN8("")
: FUN8("")));

if (!VAR6)
{

if ((VAR7->VAR37 == VAR33 && VAR7->VAR38 == VAR39) ||
(VAR7->VAR37 == VAR34 && VAR7->VAR38 == VAR40) ||
(VAR7->VAR37 == VAR35 && VAR7->VAR38 == VAR41))
VAR22 = true;
if ((VAR7->VAR37 == VAR33 && VAR7->VAR42 == VAR43) ||
(VAR7->VAR37 == VAR34 && VAR7->VAR42 == VAR44) ||
(VAR7->VAR37 == VAR35 && VAR7->VAR42 == VAR45))
VAR23 = true;
}

VAR7->VAR37 = VAR32;
}
else if (VAR6)
{
VAR7->VAR37 = VAR35;
}


if (VAR15 != NULL)
{
VAR7->VAR46 = FUN13(VAR15);
if (VAR7->VAR46 == 0)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("")));
VAR8->VAR31 = 0;
}
else if (VAR6)
{
VAR7->VAR46 = 1;
}


if (VAR19 != NULL)
{
VAR7->VAR47 = FUN14(VAR19->VAR48);
FUN15(FUN16(VAR7->VAR47));
VAR8->VAR31 = 0;
}
else if (VAR6)
{
VAR7->VAR47 = false;
}


if (VAR16 != NULL && VAR16->VAR48)
{
VAR7->VAR38 = FUN13(VAR16);
VAR8->VAR31 = 0;
}
else if (VAR6 || VAR16 != NULL || VAR22)
{
if (VAR7->VAR46 > 0 || VAR22)
{

if (VAR7->VAR37 == VAR33)
VAR7->VAR38 = VAR39;
else if (VAR7->VAR37 == VAR34)
VAR7->VAR38 = VAR40;
else
VAR7->VAR38 = VAR41;
}
else
VAR7->VAR38 = -1;	
VAR8->VAR31 = 0;
}


if ((VAR7->VAR37 == VAR33 && (VAR7->VAR38 < VAR43 || VAR7->VAR38 > VAR39))
|| (VAR7->VAR37 == VAR34 && (VAR7->VAR38 < VAR44 || VAR7->VAR38 > VAR40)))
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR38,
FUN17(VAR7->VAR37))));


if (VAR17 != NULL && VAR17->VAR48)
{
VAR7->VAR42 = FUN13(VAR17);
VAR8->VAR31 = 0;
}
else if (VAR6 || VAR17 != NULL || VAR23)
{
if (VAR7->VAR46 < 0 || VAR23)
{

if (VAR7->VAR37 == VAR33)
VAR7->VAR42 = VAR43;
else if (VAR7->VAR37 == VAR34)
VAR7->VAR42 = VAR44;
else
VAR7->VAR42 = VAR45;
}
else
VAR7->VAR42 = 1;	
VAR8->VAR31 = 0;
}


if ((VAR7->VAR37 == VAR33 && (VAR7->VAR42 < VAR43 || VAR7->VAR42 > VAR39))
|| (VAR7->VAR37 == VAR34 && (VAR7->VAR42 < VAR44 || VAR7->VAR42 > VAR40)))
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR42,
FUN17(VAR7->VAR37))));


if (VAR7->VAR42 >= VAR7->VAR38)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR42,
(long long) VAR7->VAR38)));


if (VAR13 != NULL)
{
VAR7->VAR49 = FUN13(VAR13);
}
else if (VAR6)
{
if (VAR7->VAR46 > 0)
VAR7->VAR49 = VAR7->VAR42;	
else
VAR7->VAR49 = VAR7->VAR38;	
}


if (VAR7->VAR49 < VAR7->VAR42)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR49,
(long long) VAR7->VAR42)));
if (VAR7->VAR49 > VAR7->VAR38)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR49,
(long long) VAR7->VAR38)));


if (VAR14 != NULL)
{
if (VAR14->VAR48 != NULL)
VAR8->VAR50 = FUN13(VAR14);
else
VAR8->VAR50 = VAR7->VAR49;
VAR8->VAR51 = false;
VAR8->VAR31 = 0;
}
else if (VAR6)
{
VAR8->VAR50 = VAR7->VAR49;
VAR8->VAR51 = false;
}


if (VAR8->VAR50 < VAR7->VAR42)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR8->VAR50,
(long long) VAR7->VAR42)));
if (VAR8->VAR50 > VAR7->VAR38)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR8->VAR50,
(long long) VAR7->VAR38)));


if (VAR18 != NULL)
{
VAR7->VAR52 = FUN13(VAR18);
if (VAR7->VAR52 <= 0)
FUN6(VAR27,
(FUN7(VAR36),
FUN8("",
(long long) VAR7->VAR52)));
VAR8->VAR31 = 0;
}
else if (VAR6)
{
VAR7->VAR52 = 1;
}
}