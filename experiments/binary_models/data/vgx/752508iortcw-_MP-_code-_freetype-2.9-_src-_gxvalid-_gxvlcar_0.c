typedef struct  VAR1
{
FT_UShort  VAR2;

} VAR3, *VAR4;












static void
FUN1( FT_Short       VAR5,
FT_UShort      VAR6,
GXV_Validator  VAR7 )
{
FUN2( "" );

if ( FUN3( VAR2 ) != 1 )
goto VAR8;

FUN4( VAR6, (VAR9)VAR5, VAR7 );

VAR8:
VAR10;
}


static void
FUN5( FT_UShort            VAR6,
GXV_LookupValueCPtr  VAR11,
GXV_Validator        VAR7 )
{
FT_Bytes   VAR12     = VAR7->VAR13->VAR14 + VAR11->VAR15;
FT_Bytes   VAR16 = VAR7->VAR13->VAR16;
FT_UShort  VAR17;
FT_Short   VAR5;
FT_UShort  VAR18;


FUN2( "" );

FUN6( 2 );
VAR17 = FUN7( VAR12 );

FUN6( 2 * VAR17 );
for ( VAR18 = 0; VAR18 < VAR17; VAR18++ )
{
VAR5 = FUN8( VAR12 );
FUN1( VAR5, VAR6, VAR7 );
}

VAR10;
}