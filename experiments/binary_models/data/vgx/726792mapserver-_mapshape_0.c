static void FUN1( VAR1 *VAR2, DBFHandle VAR3 )
{
int VAR4, VAR5;

VAR4 = FUN2( VAR3 );

for(VAR5=0; VAR5<VAR4; VAR5++) {
char VAR6[16];
int  VAR7=0, VAR8=0;
char VAR9[32], VAR10[32];
DBFFieldType VAR11;
const char *VAR12 = NULL;

VAR11 = FUN3( VAR3, VAR5, VAR6, &VAR7, &VAR8 );

VAR9[0] = '';
VAR10[0] = '';

switch( VAR11 ) {
case VAR13:
VAR12 = "";
sprintf( VAR9, "", VAR7 );
break;

case VAR14:
VAR12 = "";
sprintf( VAR9, "", VAR7 );
sprintf( VAR10, "", VAR8 );
break;

case VAR15:
default:
VAR12 = "";
sprintf( VAR9, "", VAR7 );
break;
}

FUN4(VAR2, VAR6, VAR12, VAR9, VAR10, 0);

}
}