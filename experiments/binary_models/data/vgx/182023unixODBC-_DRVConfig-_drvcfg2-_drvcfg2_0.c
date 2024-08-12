int FUN1( HODBCINSTPROPERTY VAR1 )
{
VAR1->VAR2 				= (VAR3)malloc( sizeof(VAR4) );
VAR1 						= VAR1->VAR2;
memset( VAR1, 0, sizeof(VAR4) );
VAR1->VAR5			= VAR6;
strncpy( VAR1->VAR7, "", VAR8 );
strncpy( VAR1->VAR9, "", VAR10 );

return 1;
}