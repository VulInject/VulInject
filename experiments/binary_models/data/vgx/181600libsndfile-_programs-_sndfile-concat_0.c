main (int argc, char *argv [])
{	const char	*VAR1, *VAR2 ;
VAR3		*VAR4, **VAR5 ;
SF_INFO		VAR6, VAR7 ;
void 		(*VAR8) (VAR3*, VAR3*, int) ;
int			VAR9 ;

VAR1 = FUN1 (argv [0]) ;

if (argc < 4)
FUN2 (VAR1) ;

argv ++ ;
argc -- ;

argc -- ;
VAR2 = argv [argc] ;

if ((VAR5 = calloc (argc, sizeof (VAR3*))) == NULL)
{	FUN3 ("") ;
FUN4 (1) ;
} ;

memset (&VAR7, 0, sizeof (VAR7)) ;

if ((VAR5 [0] = FUN5 (argv [0], VAR10, &VAR7)) == NULL)
{	FUN3 ("", argv [0]) ;
FUN4 (1) ;
} ;

VAR6 = VAR7 ;

for (VAR9 = 1 ; VAR9 < argc ; VAR9++)
{	if ((VAR5 [VAR9] = FUN5 (argv [VAR9], VAR10, &VAR7)) == NULL)
{	FUN3 ("", argv [VAR9]) ;
FUN4 (1) ;
} ;

if (VAR7.VAR11 != VAR6.VAR11)
{	FUN3 ("", argv [VAR9], VAR7.VAR11, VAR6.VAR11) ;
FUN4 (1) ;
} ;
} ;

if ((VAR4 = FUN5 (VAR2, VAR12, &VAR6)) == NULL)
{	FUN3 ("", VAR2) ;
FUN6 (FUN7 (NULL)) ;
FUN4 (1) ;
} ;

if ((VAR6.VAR13 & VAR14) == VAR15 ||
(VAR6.VAR13 & VAR14) == VAR16)
VAR8 = VAR17 ;
else
VAR8 = VAR18 ;

for (VAR9 = 0 ; VAR9 < argc ; VAR9++)
{	FUN8 (VAR4, VAR5 [VAR9], VAR6.VAR11) ;
FUN9 (VAR5 [VAR9]) ;
} ;

FUN9 (VAR4) ;
free (VAR5) ;

return 0 ;
}