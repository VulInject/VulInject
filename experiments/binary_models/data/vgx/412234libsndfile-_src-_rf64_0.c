FUN1 (VAR1 *VAR2)
{	VAR3	*VAR4 ;
int VAR5, VAR6 ;

if ((VAR4 = VAR2->VAR7) == NULL)
return VAR8 ;

VAR5 = VAR2->VAR9.VAR10 & VAR11 ;


switch (VAR5)
{	case VAR12 :
case VAR13 :
case VAR14 :
case VAR15 :
case VAR16 :
case VAR17 :
case VAR18 :
case VAR19 :
VAR6 = 2 + 2 + 4 + 4 + 2 + 2 + 2 + 2 + 4 + 4 + 2 + 2 + 8 ;


FUN2 (VAR2, "", FUN3 (VAR6), FUN4 (VAR20), FUN4 (VAR2->VAR9.VAR21), FUN3 (VAR2->VAR9.VAR22)) ;

FUN2 (VAR2, "", FUN3 (VAR2->VAR9.VAR22 * VAR2->VAR23 * VAR2->VAR9.VAR21)) ;

FUN2 (VAR2, "", FUN4 (VAR2->VAR23 * VAR2->VAR9.VAR21), FUN4 (VAR2->VAR23 * 8)) ;


FUN2 (VAR2, "", FUN4 (22)) ;


FUN2 (VAR2, "", FUN4 (VAR2->VAR23 * 8)) ;


if (VAR4->VAR24 != VAR25)
FUN2 (VAR2, "", FUN3 (0)) ;
else if (VAR4->VAR26 != 0)
FUN2 (VAR2, "", FUN3 (VAR4->VAR26)) ;
else
{	
switch (VAR2->VAR9.VAR21)
{	case 1 :	
FUN2 (VAR2, "", FUN3 (0x4)) ;
break ;

case 2 :	
FUN2 (VAR2, "", FUN3 (0x1 | 0x2)) ;
break ;

case 4 :	
FUN2 (VAR2, "", FUN3 (0x1 | 0x2 | 0x10 | 0x20)) ;
break ;

case 6 :	
FUN2 (VAR2, "", FUN3 (0x1 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20)) ;
break ;

case 8 :	
FUN2 (VAR2, "", FUN3 (0x1 | 0x2 | 0x4 | 0x8 | 0x10 | 0x20 | 0x40 | 0x80)) ;
break ;

default :	
FUN2 (VAR2, "", FUN3 (0x0)) ;
break ;
} ;
} ;
break ;

case VAR27 : 
default :
return VAR28 ;
} ;



switch (VAR5)
{	case VAR12 :
case VAR13 :
case VAR14 :
case VAR15 :
FUN5 (VAR2, VAR4->VAR24 == VAR25 ?
&VAR29 : &VAR30) ;
break ;

case VAR16 :
case VAR17 :
FUN5 (VAR2, VAR4->VAR24 == VAR25 ?
&VAR31 : &VAR32) ;
break ;

case VAR18 :
FUN5 (VAR2, &VAR33) ;
break ;

case VAR19 :
FUN5 (VAR2, &VAR34) ;
break ;

default : return VAR28 ;
} ;

return 0 ;
}