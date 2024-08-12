VAR1
FUN1(
VAR2 *VAR3,
const char *VAR4,
const char *VAR5,
const char *VAR6,
int VAR7,
VAR8	**VAR9,
VAR8	**VAR10,  
int *VAR11
)
{
VAR12	*VAR13;
int		VAR14, VAR15;



FUN2( VAR16, "", 0, 0, 0 );

if ( !FUN3( VAR3 )) {
return( VAR17 );
}
if ( NULL == VAR5) {
FUN4( VAR3, VAR17, NULL, NULL );
return( VAR17 );
}



if (( FUN5( VAR3 ) < VAR18 )
&& ((VAR6 != NULL) || (VAR9 != NULL)
|| (VAR10 != NULL))) {
FUN4( VAR3, VAR19, NULL, NULL );
return( VAR19 );
}

if ( VAR11 == NULL ) {
FUN4( VAR3, VAR17, NULL, NULL );
return( VAR17 );
}

FUN6( VAR3, VAR20 );
*VAR11 = ++VAR3->VAR21;
FUN7( VAR3, VAR20 );


if ( VAR3->VAR22 ) {
if ( VAR6 == NULL && VAR3->VAR23 != NULL ) {
FUN6( VAR3, VAR24 );
if ( (VAR14 = (VAR3->VAR23)( VAR3, *VAR11,
VAR25, VAR4, VAR5, VAR7 ))
!= 0 ) {
*VAR11 = VAR14;
FUN7( VAR3, VAR24 );
return( VAR26 );
}
FUN7( VAR3, VAR24 );
} else if ( VAR3->VAR27 != NULL ) {
FUN6( VAR3, VAR24 );
if ( (VAR14 = (VAR3->VAR27)( VAR3, *VAR11,
VAR28, VAR4, VAR5, VAR6,
VAR7 )) != 0 ) {
*VAR11 = VAR14;
return( VAR26 );
}
FUN7( VAR3, VAR24 );
}
}


if (( VAR15 = FUN8( VAR3, &VAR13 ))
!= VAR26 ) {
return( VAR15 );
}


if ( FUN9( VAR13, "", *VAR11, VAR28, VAR4,
VAR5, VAR7 ) == -1 ) {
FUN4( VAR3, VAR29, NULL, NULL );
FUN10( VAR13, 1 );
return( VAR29 );
}

if ( VAR6 == NULL ) {
if ( FUN9( VAR13, "" ) == -1 ) {
FUN4( VAR3, VAR29, NULL, NULL );
FUN10( VAR13, 1 );
return( VAR29 );
}
} else {
if ( FUN9( VAR13, "", VAR30, VAR6 )
== -1 ) {
FUN4( VAR3, VAR29, NULL, NULL );
FUN10( VAR13, 1 );
return( VAR29 );
}
}

if (( VAR14 = FUN11( VAR3, VAR9, 1, VAR13 ))
!= VAR26 ) {
FUN10( VAR13, 1 );
return( VAR14 );
}


VAR14 = FUN12( VAR3, *VAR11, VAR28,
(char *) VAR4, VAR13 );
*VAR11 = VAR14;
return( VAR14 < 0 ? FUN13( VAR3, NULL, NULL ) : VAR26 );
}