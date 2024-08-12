int
FUN1(VAR1 *VAR2, int VAR3,
char *VAR4, VAR5 *VAR6, char **VAR7)
{
char	*VAR8;
uint_t	VAR9;
int	VAR10;

if (VAR7)
*VAR7 = NULL;

if ((VAR2 == NULL) || (VAR4 == NULL))
return (-1);		


if ((FUN2(VAR2) && (VAR3 < 0)) ||
(!FUN2(VAR2) && (VAR3 >= 0)))
return (-1);		


if ((FUN3(VAR2) != VAR11) &&
(FUN3(VAR2) != VAR12)) {
VAR4 += strspn(VAR4, "");
VAR8 = VAR4 + strcspn(VAR4, "");
if (*VAR8) {
if (VAR7)
*VAR7 = VAR8;
return (-1);	
}
}

VAR10 = VAR13;
switch (FUN3(VAR2)) {
case VAR11: {
char	*VAR14;


if (FUN4(VAR2, &VAR14) == 0) {
if (VAR6) {
if (FUN5(VAR6, VAR14,
(VAR15)0, NULL, 0) == 0)
return (1);	
} else {
if (strcmp(VAR4, VAR14) == 0)
return (1);	
}
}
break;
}
case VAR12: {
char **VAR16;


if ((FUN6(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9)) {
if (VAR6) {
if (FUN5(VAR6, VAR16[VAR3],
(VAR15)0, NULL, 0) == 0)
return (1);
} else {
if (strcmp(VAR4, VAR16[VAR3]) == 0)
return (1);
}
}
break;
}
case VAR17: {
uchar_t VAR14, VAR18;


VAR10 = sscanf(VAR4, "", &VAR18);
if ((VAR10 == 1) && (FUN7(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR19: {
VAR20 *VAR16, VAR18;



VAR10 = sscanf(VAR4, "", &VAR18);
if ((VAR10 == 1) &&
(FUN8(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR21: {
int8_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR22, &VAR18);
if ((VAR10 == 1) &&
(FUN9(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR23: {
VAR24 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR22, &VAR18);
if ((VAR10 == 1) &&
(FUN10(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR25: {
uint8_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR22, (VAR24 *)&VAR18);
if ((VAR10 == 1) &&
(FUN11(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR26: {
VAR27 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR22, (VAR24 *)&VAR18);
if ((VAR10 == 1) &&
(FUN12(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR28: {
int16_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR29, &VAR18);
if ((VAR10 == 1) &&
(FUN13(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR30: {
VAR31 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR29, &VAR18);
if ((VAR10 == 1) &&
(FUN14(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR32: {
uint16_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR29, (VAR31 *)&VAR18);
if ((VAR10 == 1) &&
(FUN15(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR33: {
VAR34 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR29, (VAR31 *)&VAR18);
if ((VAR10 == 1) &&
(FUN16(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR35: {
int32_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR36, &VAR18);
if ((VAR10 == 1) &&
(FUN17(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR37: {
VAR38 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR36, &VAR18);
if ((VAR10 == 1) &&
(FUN18(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR39: {
uint32_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR36, (VAR38 *)&VAR18);
if ((VAR10 == 1) &&
(FUN19(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR40: {
VAR41 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR36, (VAR38 *)&VAR18);
if ((VAR10 == 1) &&
(FUN20(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR42: {
int64_t VAR14, VAR18;


VAR10 = sscanf(VAR4, ""VAR43, &VAR18);
if ((VAR10 == 1) &&
(FUN21(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR44: {
VAR45 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR43, &VAR18);
if ((VAR10 == 1) &&
(FUN22(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR46: {
uint64_t VAR18, VAR14;


VAR10 = sscanf(VAR4, ""VAR43, (VAR45 *)&VAR18);
if ((VAR10 == 1) &&
(FUN23(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR47: {
VAR48 *VAR16, VAR18;


VAR10 = sscanf(VAR4, ""VAR43, (VAR45 *)&VAR18);
if ((VAR10 == 1) &&
(FUN24(VAR2, &VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR49: {
int32_t VAR18;
boolean_t VAR14;


VAR10 = sscanf(VAR4, ""VAR36, (VAR38 *)&VAR18);
if ((VAR10 == 1) &&
(FUN25(VAR2, &VAR14) == 0) &&
(VAR14 == VAR18))
return (1);
break;
}
case VAR50: {
VAR51 *VAR16;
int32_t VAR18;


VAR10 = sscanf(VAR4, ""VAR36, (VAR38 *)&VAR18);
if ((VAR10 == 1) &&
(FUN26(VAR2,
&VAR16, &VAR9) == 0) &&
(VAR3 < VAR9) &&
(VAR16[VAR3] == VAR18))
return (1);
break;
}
case VAR52:
case VAR53:
case VAR54:
case VAR55:
case VAR56:
case VAR57:
default:

return (-1);		
}


if (VAR10 != 1) {
if (VAR7)
*VAR7 = VAR4;
return (-1);		
}

return (0);			
}