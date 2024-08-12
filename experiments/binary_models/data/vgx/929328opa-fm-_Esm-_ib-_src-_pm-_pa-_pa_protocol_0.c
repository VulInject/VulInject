static VAR1 *
FUN1(VAR2* VAR3)
{
uint64_t	VAR4 ;
int 		VAR5;
Status_t	VAR6;
VAR1* VAR7;
VAR1*	VAR8 = NULL;

if ((VAR6 = FUN2(&VAR9)) != VAR10) {
FUN3("", VAR6);
} else {
FUN4( &VAR4 );

VAR5 = VAR3->VAR11.VAR12 % VAR13 ;
VAR7 = VAR14[ VAR5 ];
while( VAR7 ) {
if( VAR7->VAR15 == VAR3->VAR11.VAR12  && VAR7->VAR16 == VAR3->VAR17.VAR16 ) {
VAR8 = VAR7 ;
VAR7 = VAR7->VAR18 ;
VAR8->VAR19 = VAR4 ;
break ;
} else {
VAR7 = VAR7->VAR18;
}
}

if( VAR8 ) {

VAR8->VAR19 = VAR4 ;
FUN5( VAR14[ VAR5 ], VAR8 );
FUN6( VAR14[ VAR5 ], VAR8 );

VAR8->VAR20 ++ ;
}
if ((VAR6 = FUN7(&VAR9)) != VAR10) {
FUN3("", VAR6);
}
}
FUN8(VAR21, VAR8 );
return VAR8;
}