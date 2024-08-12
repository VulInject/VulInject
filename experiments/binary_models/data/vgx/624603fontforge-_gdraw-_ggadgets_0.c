void FUN1(VAR1 *VAR2,VAR3 *VAR4, VAR3 *VAR5) {
if ( VAR2->VAR6==VAR7 ) {
if ( VAR4!=NULL )
memset(VAR4,0,sizeof(*VAR4));
if ( VAR5!=NULL )
memset(VAR5,0,sizeof(*VAR5));
} else if ( ((char *) &VAR2->VAR8->VAR9) - ((char *) VAR2->VAR8) < VAR2->VAR8->VAR10 &&
VAR2->VAR8->VAR9!=NULL )
(VAR2->VAR8->VAR9)(VAR2,VAR4,VAR5);
else {
if ( VAR4!=NULL )
*VAR4 = VAR2->VAR11;
if ( VAR5!=NULL )
*VAR5 = VAR2->VAR5;
}
}