main (int argc, char * argv [])
{	const char *VAR1 = "" ;
VAR2 *VAR3 ;
int VAR4, VAR5 ;

if (argc < 2)
{	FUN1 ("") ;
FUN2 (0) ;
} ;

if (argc == 2 && strcmp (argv [1], "") == 0)
return FUN3 (VAR1) ;

VAR3 = FUN4 (VAR1) ;

if (argc == 2)
{	if (strcmp (argv [1], "") == 0)
return FUN5 (VAR3) ;

if (strcmp (argv [1], "") == 0)
{	FUN6 () ;
VAR5 = FUN7 (VAR3) ;
FUN8 ("") ;
return VAR5 ;
} ;
} ;

if (argc == 3 && strcmp (argv [1], "") == 0)
{	FUN9 (VAR3, argv [2]) ;
FUN10 (VAR3) ;
return 0 ;
} ;

if (strcmp (argv [1], "") == 0)
{	FUN6 () ;

for (VAR4 = 2 ; VAR4 < argc ; VAR4++)
FUN11 (VAR3, argv [VAR4]) ;
FUN10 (VAR3) ;
return 0 ;
} ;

if (strcmp (argv [1], "") == 0)
{	FUN6 () ;

for (VAR4 = 2 ; VAR4 < argc ; VAR4++)
FUN12 (VAR3, argv [VAR4]) ;
FUN10 (VAR3) ;
return 0 ;
} ;

FUN1 ("") ;
for (VAR4 = 1 ; VAR4 < argc ; VAR4++)
FUN1 ("", argv [VAR4]) ;
FUN8 ("") ;

return 1 ;
}