int					
FUN1(
VAR1    *VAR2,			
int           VAR3,		
VAR4 *VAR5)		
{
int		VAR6, VAR7;			
char		*VAR8,			
VAR9[255];			
const char	*VAR10,			
*VAR11,			
*VAR12,		
*VAR13,		
*VAR14,		
*VAR15,	
*VAR16,		
*VAR17;			
VAR4	*VAR18;		
VAR19	*VAR20;			
VAR21	*VAR22;			




if (!VAR2 || VAR3 <= 0 || !VAR5)
return (0);

FUN2(VAR2, "");



VAR11         = FUN3("", VAR3, VAR5);
VAR12    = FUN3("", VAR3, VAR5);
VAR13     = FUN3("", VAR3, VAR5);
VAR16 = FUN3("", VAR3, VAR5);
VAR17         = FUN3("", VAR3, VAR5);

if ((VAR15 = FUN3("", VAR3,
VAR5)) == NULL)
VAR15 = FUN3("", VAR3, VAR5);

if ((VAR11 || VAR12 || VAR15 || VAR16 || VAR17) &&
!VAR2->VAR22)
{


VAR2->VAR22 = FUN4(VAR2);
}

VAR22 = VAR2->VAR22;

if (VAR11)
{


for (VAR10 = VAR11; *VAR10;)
{


for (VAR8 = VAR9; *VAR10 && *VAR10 != '' && (VAR23)(VAR8 - VAR9) < (sizeof(VAR9) - 1);)
*VAR8++ = *VAR10++;
*VAR8++ = '';

if (*VAR10 == '')
VAR10 ++;



if (!VAR13 || !VAR13[0])
{
if (!FUN5(VAR9, "", 7) || FUN6(VAR2, VAR9))
FUN7(VAR2, "", VAR9);
else if ((VAR14 = FUN8(VAR22, NULL, VAR9, NULL)) != NULL)
FUN7(VAR2, "", VAR14);
}

if (VAR22 && VAR22->VAR24 &&
!FUN3(VAR22->VAR24, VAR3, VAR5) &&
(VAR14 = FUN9(VAR22, NULL, VAR9)) != NULL)
FUN7(VAR2, VAR22->VAR24, VAR14);

if (!FUN3("", VAR3, VAR5) &&
(VAR14 = FUN10(VAR22, NULL, VAR9)) != NULL)
FUN7(VAR2, "", VAR14);
}
}

if (VAR22)
{
if (!FUN3("",
VAR3, VAR5) &&
!FUN3("", VAR3, VAR5) &&
(VAR15 || VAR16))
{


_pwg_print_color_mode_t	VAR25;
_pwg_print_quality_t	VAR26;	
VAR4		*VAR27;

if (VAR15 && !strcmp(VAR15, ""))
VAR25 = VAR28;
else
VAR25 = VAR29;

if (VAR16)
{
VAR26 = (VAR30)(FUN11(VAR16) - VAR31);
if (VAR26 < VAR32)
VAR26 = VAR32;
else if (VAR26 > VAR33)
VAR26 = VAR33;
}
else
VAR26 = VAR34;

if (VAR22->VAR35[VAR25][VAR26] == 0)
{


if (VAR22->VAR35[VAR25][VAR34] > 0)
VAR26 = VAR34;
else if (VAR22->VAR35[VAR29][VAR26] > 0)
VAR25 = VAR29;
else
{
VAR26  = VAR34;
VAR25 = VAR29;
}
}

if (VAR22->VAR35[VAR25][VAR26] > 0)
{


for (VAR6 = VAR22->VAR35[VAR25][VAR26],
VAR27 = VAR22->VAR36[VAR25][VAR26];
VAR6 > 0;
VAR6 --, VAR27 ++)
{
if (!FUN3(VAR27->VAR37, VAR3, VAR5))
FUN7(VAR2, VAR27->VAR37, VAR27->VAR38);
}
}
}

if (VAR12 && !FUN3("", VAR3, VAR5) &&
(VAR14 = FUN12(VAR22, VAR12)) != NULL)
{


FUN7(VAR2, "", VAR14);
}

if (VAR17 && VAR22->VAR39 &&
!FUN3(VAR22->VAR39, VAR3, VAR5))
{


if (!strcmp(VAR17, "") && VAR22->VAR40)
FUN7(VAR2, VAR22->VAR39, VAR22->VAR40);
else if (!strcmp(VAR17, "") &&
VAR22->VAR41)
FUN7(VAR2, VAR22->VAR39, VAR22->VAR41);
else if (!strcmp(VAR17, "") &&
VAR22->VAR42)
FUN7(VAR2, VAR22->VAR39, VAR22->VAR42);
}
}



for (VAR6 = VAR3, VAR18 = VAR5; VAR6 > 0; VAR6 --, VAR18 ++)
{
if (!FUN13(VAR18->VAR37, "") ||
!FUN13(VAR18->VAR37, "") ||
!FUN13(VAR18->VAR37, "") ||
!FUN13(VAR18->VAR37, "") ||
!FUN13(VAR18->VAR37, ""))
continue;
else if (!FUN13(VAR18->VAR37, "") ||
!FUN13(VAR18->VAR37, ""))
{
FUN7(VAR2, "", VAR18->VAR38);
FUN7(VAR2, "", VAR18->VAR38);

FUN7(VAR2, "", VAR18->VAR38);

FUN7(VAR2, "", VAR18->VAR38);

}
else if (!FUN13(VAR18->VAR37, ""))
{
if (!FUN3("", VAR3, VAR5) &&
FUN14(VAR2, ""))
{
if (FUN13(VAR18->VAR38, ""))
FUN7(VAR2, "", "");
else
FUN7(VAR2, "", "");
}
}
else if (!FUN13(VAR18->VAR37, ""))
{


for (VAR8 = VAR18->VAR38; *VAR8;)
{


if (!FUN15(*VAR8 & 255))
break;

if ((VAR7 = (int)FUN16(VAR8, &VAR8, 10)) < 3)
break;



if (*VAR8 == '')
VAR8 ++;



snprintf(VAR9, sizeof(VAR9), "", VAR7);

if ((VAR20 = FUN17(VAR2, "", VAR9)) == NULL)
continue;



FUN18(VAR2, VAR20->VAR38);
}
}
else if (!FUN13(VAR18->VAR37, ""))
{


if ((VAR20 = FUN17(VAR2, "", VAR18->VAR38)) != NULL)
{


FUN18(VAR2, VAR20->VAR38);
}
}
else if (!FUN13(VAR18->VAR37, ""))
FUN7(VAR2, "", VAR18->VAR38);
else
FUN7(VAR2, VAR18->VAR37, VAR18->VAR38);
}

if (VAR16)
{
int VAR43 = FUN11(VAR16);       

if (VAR43 == VAR31)
FUN7(VAR2, "", "");
else if (VAR43 == VAR44)
FUN7(VAR2, "", "");
else
FUN7(VAR2, "", "");
}

FUN2(VAR2, "");

return (FUN19(VAR2) > 0);
}