char *FUN1(const char *VAR1, const char *VAR2) {
int VAR3, VAR4;
for (;;) {
VAR3 = *VAR1++; VAR4 = *VAR2++ ;
if ( VAR3=='' )
return( (char *) VAR2 );
if ( VAR3!=VAR4 || VAR3=='' )
return(NULL);
}
}