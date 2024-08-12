static void FUN1(VAR1 *VAR2,struct VAR3 *VAR4,uint32_t VAR5,
uint32_t VAR6) {
int VAR7;
char *VAR8, *VAR9, *VAR10;
int VAR11;

FUN2(VAR2,VAR5,VAR12);
VAR11 = FUN3(VAR2);
if ( VAR11!=0 && VAR11!=1 )
return;			
VAR7 = FUN3(VAR2);
VAR8 = VAR9 = malloc(VAR7+1);

VAR10 = VAR9+VAR7;
if ( VAR11 ) {
while ( VAR9<VAR10 )
*VAR9++ = getc(VAR2);
} else {
while ( VAR9<VAR10 )
*VAR9++ = FUN3(VAR2);
}
*VAR9 = '';
if ( !VAR11 ) {
VAR9 = FUN4(VAR4->VAR13);
free(VAR8);
VAR8 = VAR9;
}
if ( VAR6==VAR14 )
VAR4->VAR15 = VAR8;
else
VAR4->VAR13 = VAR8;
}