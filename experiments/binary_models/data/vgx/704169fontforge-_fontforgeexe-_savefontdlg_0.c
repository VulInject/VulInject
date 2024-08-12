static VAR1 *FUN1(VAR2 *VAR3, int *VAR4) {
const VAR5 *VAR6 = FUN2(VAR3), *VAR7; VAR5 *VAR8, *VAR9;
const char *VAR10 = FUN3(""); 
int VAR11;
VAR1 *VAR12;

locale_t VAR13; locale_t VAR14; 
FUN4(&VAR13, &VAR14); 

*VAR4 = false;
VAR9 = NULL;
for ( VAR11=1, VAR7 = VAR6; (VAR8 = FUN5(VAR7,'')) || (VAR9=FUN5(VAR7,'')); ++VAR11 ) {
if ( VAR8!=NULL && VAR9!=NULL ) {
if ( VAR9<VAR8 ) VAR8 = VAR9;
} else if ( VAR9!=NULL )
VAR8 = VAR9;
VAR7 = VAR8+1;
VAR9 = NULL;
}
VAR12 = malloc((VAR11+1)*sizeof(VAR1));

for ( VAR11=0, VAR7 = VAR6; *VAR7!='' ; ) {
VAR12[VAR11]=FUN6(FUN7(VAR7,&VAR8));
if ( *VAR8!='' )
VAR12[VAR11] |= 0x10000;
else
VAR12[VAR11] |= (FUN8(VAR8+1,&VAR8,10)<<16);
if ( VAR12[VAR11]>0 ) ++VAR11;
if ( *VAR8!='' && *VAR8!='' && *VAR8!='' ) {
free(VAR12);
FUN9(VAR10);
*VAR4 = true;
break;
}
while ( *VAR8=='' || *VAR8=='' ) ++VAR8;
VAR7 = VAR8;
}
FUN10(&VAR13, &VAR14); 
if ( *VAR4 )
return( NULL );
VAR12[VAR11] = 0;
return( VAR12 );
}