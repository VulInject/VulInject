FUN1 (const char *VAR1)
{	VAR2	*VAR3 ;
SF_INFO	VAR4 ;
SF_BROADCAST_INFO_2K VAR5 ;
double VAR6 ;
int VAR7 ;

memset (&VAR4, 0, sizeof (VAR4)) ;

if ((VAR3 = FUN2 (VAR1, VAR8, &VAR4)) == NULL)
{	FUN3 ("", VAR1) ;
FUN4 (VAR9) ;
memset (VAR10, 0, sizeof (VAR10)) ;
FUN5 (FUN6 (NULL)) ;
return 1 ;
} ;

memset (&VAR5, 0, sizeof (VAR11)) ;

VAR7 = FUN7 (VAR3, VAR12, &VAR5, sizeof (VAR5)) ;
FUN8 (VAR3) ;

if (VAR7 == VAR13)
{	FUN3 ("", VAR1) ;
return 1 ;
} ;



VAR6 = ((FUN9 (2.0, 32) * VAR5.VAR14) + (1.0 * VAR5.VAR15)) / VAR4.VAR16 ;

FUN3 ("", (int) sizeof (VAR5.VAR17), VAR5.VAR17) ;
FUN3 ("", (int) sizeof (VAR5.VAR18), VAR5.VAR18) ;
FUN3 ("", (int) sizeof (VAR5.VAR19), VAR5.VAR19) ;
FUN3 ("", (int) sizeof (VAR5.VAR20), VAR5.VAR20) ;
FUN3 ("", (int) sizeof (VAR5.VAR21), VAR5.VAR21) ;

if (VAR5.VAR14 == 0 && VAR5.VAR15 == 0)
FUN3 ("") ;
else
FUN3 ("", VAR5.VAR14, VAR5.VAR15, VAR6) ;

FUN3 ("", VAR5.VAR22) ;

if (VAR5.VAR22 >= 1)
FUN3 ("", (int) sizeof (VAR5.VAR23), VAR5.VAR23) ;

if (VAR5.VAR22 >= 2)
{	

FUN3 ("", VAR5.VAR24 / 100.0) ;

FUN3 ("", VAR5.VAR25 / 100.0) ;

FUN3 ("", VAR5.VAR26 / 100.0) ;
FUN3 ("", VAR5.VAR27 / 100.0) ;
FUN3 ("", VAR5.VAR28 / 100.0) ;
} ;

FUN3 ("", VAR5.VAR29, VAR5.VAR30) ;

return 0 ;
}