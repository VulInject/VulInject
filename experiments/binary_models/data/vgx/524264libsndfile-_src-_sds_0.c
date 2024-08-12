FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{	unsigned char	VAR5, VAR6, VAR7, VAR8 ;
unsigned short	VAR9, VAR10 ;
unsigned int	VAR11, VAR12, VAR13, VAR14 ;
int		VAR15, VAR16 ;


VAR15 = FUN2 (VAR2, "", 0, &VAR10, &VAR5, &VAR8) ;

if (VAR10 != 0xF07E || VAR8 != 0x01)
return VAR17 ;

VAR15 += FUN2 (VAR2, "", &VAR9) ;
VAR9 = FUN3 (VAR9) ;

FUN4 (VAR2, ""
"",
VAR5, VAR9) ;

VAR15 += FUN2 (VAR2, "", &VAR6, &VAR11) ;

VAR11 = FUN3 (VAR11) ;

VAR4->VAR6 = VAR6 ;

if (VAR4->VAR6 > 1)
FUN4 (VAR2, "", VAR4->VAR6) ;
else
{	FUN4 (VAR2, "", VAR4->VAR6) ;
return VAR18 ;
} ;

if (VAR11 > 0)
{	VAR2->VAR19.VAR20 = 1000000000 / VAR11 ;

FUN4 (VAR2, ""
"",
VAR11, VAR2->VAR19.VAR20) ;
}
else
{	VAR2->VAR19.VAR20 = 16000 ;

FUN4 (VAR2, ""
"",
VAR11, VAR2->VAR19.VAR20) ;
} ;

VAR15 += FUN2 (VAR2, "", &VAR12, &VAR13, &VAR14, &VAR7) ;

VAR12 = FUN3 (VAR12) ;

VAR2->VAR19.VAR21 = VAR4->VAR21 = VAR12 ;

VAR13 = FUN3 (VAR13) ;
VAR14 = FUN3 (VAR14) ;

FUN4 (VAR2, 	""
""
""
"",
VAR13, VAR14, VAR7) ;

VAR2->VAR22 = VAR23 ;
VAR2->VAR24 = VAR2->VAR25 - VAR2->VAR22 ;

VAR15 += FUN2 (VAR2, "", &VAR8) ;
if (VAR8 != 0xF7)
FUN4 (VAR2, "", VAR8 & 0xFF) ;

for (VAR16 = 0 ; VAR15 < VAR2->VAR25 ; VAR16++)
{
VAR15 += (int) FUN5 (&VAR10, 1, 2, VAR2) ;

if (VAR10 == 0)
break ;

FUN6 (VAR2, VAR26 - 2, VAR27) ;
VAR15 += VAR26 - 2 ;
} ;

FUN4 (VAR2, "", VAR16) ;
VAR4->VAR28 = VAR16 ;

VAR4->VAR29 = VAR30 / ((VAR4->VAR6 + 6) / 7) ;
FUN4 (VAR2, "", VAR4->VAR29) ;

FUN4 (VAR2, "", VAR16 * VAR4->VAR29) ;


VAR2->VAR19.VAR31 = 1 ;
VAR2->VAR19.VAR32 = 1 ;


switch ((VAR4->VAR6 + 7) / 8)
{	case 1 :
VAR2->VAR19.VAR33 = VAR34 | VAR35 ;
break ;

case 2 :
VAR2->VAR19.VAR33 = VAR34 | VAR36 ;
break ;

case 3 :
VAR2->VAR19.VAR33 = VAR34 | VAR37 ;
break ;

case 4 :
VAR2->VAR19.VAR33 = VAR34 | VAR38 ;
break ;

default :
FUN4 (VAR2, "", (VAR4->VAR6 + 7) / 8) ;
return VAR18 ;
} ;

FUN6 (VAR2, VAR23, VAR39) ;

return 0 ;
}