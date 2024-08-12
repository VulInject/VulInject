static void *FUN1(VAR1 *VAR2,char *VAR3,int VAR4) {
char *VAR5 = VAR3+VAR4-1;
char *VAR6 = VAR3;
int VAR7;

while ( (VAR7=getc(VAR2))!=VAR8 && VAR7!='' && VAR7!='' && VAR6<VAR5 )
*VAR6++ = VAR7;
*VAR6 = '';
if ( VAR7==VAR8 && VAR6==VAR3 )
return( NULL );
if ( VAR7=='' ) {
VAR7 = getc(VAR2);
if ( VAR7!='' )
FUN2(VAR7,VAR2);
}
return( VAR3 );
}