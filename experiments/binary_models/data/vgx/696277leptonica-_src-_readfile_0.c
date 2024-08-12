VAR1
FUN1(const VAR2  *VAR3,
size_t          VAR4,
VAR5        *VAR6,
VAR5        *VAR7,
VAR5        *VAR8,
VAR5        *VAR9,
VAR5        *VAR10,
VAR5        *VAR11)
{
l_int32  VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
l_int32  VAR20;  
VAR21     *VAR22;

if (VAR7) *VAR7 = 0;
if (VAR8) *VAR8 = 0;
if (VAR9) *VAR9 = 0;
if (VAR10) *VAR10 = 0;
if (VAR11) *VAR11 = 0;
if (VAR6) *VAR6 = 0;
VAR19 = 0;  
if (!VAR3)
return FUN2("", VAR23, 1);
if (VAR4 < 12)
return FUN2("", VAR23, 1);

FUN3(VAR3, &VAR12);

switch (VAR12)
{
case VAR24:  
if ((VAR22 = FUN4(VAR3, VAR4)) == NULL)
return FUN2( "", VAR23, 1);
FUN5(VAR22, &VAR14, &VAR15, &VAR16);
FUN6(&VAR22);
VAR17 = (VAR16 == 32) ? 8 : VAR16;
VAR18 = (VAR16 == 32) ? 3 : 1;
break;

case VAR25:
VAR13 = FUN7(VAR3, VAR4, &VAR14, &VAR15, &VAR18, NULL, NULL);
VAR17 = 8;
if (VAR13)
return FUN2( "", VAR23, 1);
break;

case VAR26:
VAR13 = FUN8(VAR3, VAR4, &VAR14, &VAR15, &VAR17, &VAR18, &VAR19);
if (VAR13)
return FUN2( "", VAR23, 1);
break;

case VAR27:
case VAR28:
case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
case VAR34:

VAR13 = FUN9(VAR3, VAR4, 0, &VAR14, &VAR15, &VAR17, &VAR18,
NULL, &VAR19, &VAR12);
if (VAR13)
return FUN2( "", VAR23, 1);
break;

case VAR35:
VAR13 = FUN10(VAR3, VAR4, &VAR14, &VAR15, &VAR16, &VAR20, &VAR17, &VAR18);
if (VAR13)
return FUN2( "", VAR23, 1);
break;

case VAR36:  
if ((VAR22 = FUN11(VAR3, VAR4)) == NULL)
return FUN2( "", VAR23, 1);
FUN5(VAR22, &VAR14, &VAR15, &VAR16);
FUN6(&VAR22);
VAR19 = 1;  
VAR18 = 1;
VAR17 = VAR16;
break;

case VAR37:
VAR13 = FUN12(VAR3, VAR4, &VAR14, &VAR15, &VAR17, &VAR18, NULL);
break;

case VAR38:
VAR17 = 8;
VAR13 = FUN13(VAR3, VAR4, &VAR14, &VAR15, &VAR18);
break;

case VAR39:
if (VAR6) *VAR6 = VAR12;
return FUN2("", VAR23, 1);

case VAR40:
if (VAR6) *VAR6 = VAR12;
return FUN2("", VAR23, 1);

case VAR41:
VAR13 = FUN14((VAR42 *)VAR3, VAR4, &VAR14, &VAR15, &VAR17,
&VAR18, &VAR19);
if (VAR13)
return FUN2( "", VAR23, 1);
break;

case VAR43:
return FUN2("", VAR23, 1);
break;
}

if (VAR7) *VAR7 = VAR14;
if (VAR8) *VAR8 = VAR15;
if (VAR9) *VAR9 = VAR17;
if (VAR10) *VAR10 = VAR18;
if (VAR11) *VAR11 = VAR19;
if (VAR6) *VAR6 = VAR12;
return 0;
}