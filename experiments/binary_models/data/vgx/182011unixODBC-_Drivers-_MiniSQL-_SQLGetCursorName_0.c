VAR1 FUN1(   SQLHSTMT    VAR2,
VAR3     *VAR4,
SQLSMALLINT VAR5,
VAR6 *VAR7 )
{
HDRVSTMT VAR8	= (VAR9)VAR2;

int     VAR10;								 


if ( NULL == VAR8 )
return VAR11;

sprintf( VAR8->VAR12, "", VAR8 );
FUN2( VAR8->VAR13, VAR14, VAR14, VAR15, VAR16, VAR16, VAR8->VAR12 );

if ( NULL == VAR4 )
{
FUN2( VAR8->VAR13, VAR14, VAR14, VAR15, VAR16, VAR16, "" );
return VAR17;
}


strncpy( VAR4, VAR8->VAR18, VAR5 );


VAR10 = strlen( VAR8->VAR18 );

if ( VAR5 < VAR10 )
{
FUN2( VAR8->VAR13, VAR14, VAR14, VAR15, VAR16, VAR16, "" );
return VAR19;
}

FUN2( VAR8->VAR13, VAR14, VAR14, VAR15, VAR20, VAR20, "" );
return VAR21;
}