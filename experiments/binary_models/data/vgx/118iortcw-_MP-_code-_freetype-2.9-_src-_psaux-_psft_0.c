static VAR1
FUN1( const VAR2*  VAR3,
CF2_Int            VAR4 )
{
CF2_Fixed  VAR5;


FUN2( VAR4 > 0 );

if ( VAR3->VAR6 <= 0 || VAR3->VAR7 <= 0 )
return FUN3( VAR8 );

FUN2( VAR3->VAR9 == 0 && VAR3->VAR10 == 0 );
FUN2( VAR3->VAR11 == 0 && VAR3->VAR12 == 0 );

if ( VAR4 > 0x7FFF )
return FUN3( VAR13 );

VAR5 = FUN4( VAR14, FUN5( VAR4 ) );

if ( VAR3->VAR6 > VAR5 || VAR3->VAR7 > VAR5 )
return FUN3( VAR13 );

return VAR15;
}


static void
FUN6( CF2_Outline  VAR16,
CF2_Fixed    VAR17 )
{
VAR18*  VAR19 = VAR16->VAR19;


FUN2( VAR19 );

if ( !VAR19->VAR20.VAR21 )
*VAR19->VAR22 = FUN7( VAR17 );
}



static void
FUN8( void*  VAR23 )
{
CF2_Font  VAR24 = (VAR25)VAR23;


if ( VAR24 )
{
FT_Memory  VAR26 = VAR24->VAR26;


FUN9( VAR24->VAR27.VAR28 );
FUN9( VAR24->VAR27.VAR29 );
}
}









static void
FUN10( CF2_OutlineCallbacks      VAR30,
const CF2_CallbackParams  VAR31 )
{

CF2_Outline  VAR16 = (VAR32)VAR30;
VAR33*  VAR20;