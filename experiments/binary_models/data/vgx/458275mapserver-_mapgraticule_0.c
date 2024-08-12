static void FUN1( VAR1 *VAR2, VAR3 *VAR4, double VAR5 )
{
VAR6 *VAR7 = VAR2->VAR8;
char VAR9[32];
int VAR10, VAR11;

switch( VAR7->VAR12 ) {
case VAR13:
VAR10 = (int) VAR5;
VAR5 = FUN2( VAR5 - (double) VAR10 );
VAR11 = (int) (VAR5 * 60.0);
VAR5 = VAR5 - (((double) VAR11) / 60.0);
sprintf( VAR9, VAR7->VAR14, VAR10, VAR11, (int) (VAR5 * 3600.0) );
break;
case VAR15:
VAR10 = (int) VAR5;
VAR5 = FUN2( VAR5 - (double) VAR10 );
sprintf( VAR9, VAR7->VAR14, VAR10, (int) (VAR5 * 60.0) );
break;
case VAR16:
VAR10 = (int) VAR5;
sprintf( VAR9, VAR7->VAR14, VAR10);
break;
case VAR17:
default:
sprintf( VAR9, VAR7->VAR14, VAR5 );
}

VAR4->VAR18 = FUN3( VAR9 );
}