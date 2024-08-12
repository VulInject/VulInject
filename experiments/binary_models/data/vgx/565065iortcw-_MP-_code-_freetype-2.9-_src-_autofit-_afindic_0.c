static VAR1
FUN1( AF_CJKMetrics  VAR2,
FT_Face        VAR3 )
{

FT_CharMap  VAR4 = VAR3->VAR5;


VAR2->VAR6 = VAR3->VAR7;

if ( FUN2( VAR3, VAR8 ) )
VAR3->VAR5 = NULL;
else
{
FUN3( VAR2, VAR3 );

FUN4( VAR2, VAR3, VAR9 );
FUN5( VAR2, VAR3 );
}

FUN6( VAR3, VAR4 );

return VAR10;
}


static void
FUN7( AF_CJKMetrics  VAR2,
AF_Scaler      VAR11 )
{

FUN8( VAR2, VAR11 );
}


static VAR1
FUN9( AF_GlyphHints  VAR12,
AF_CJKMetrics  VAR2 )
{

return FUN10( VAR12, VAR2 );
}


static VAR1
FUN11( FT_UInt        VAR13,
AF_GlyphHints  VAR12,
VAR14*    VAR15,
AF_CJKMetrics  VAR2 )
{

return FUN12( VAR13, VAR12, VAR15, VAR2 );
}





static void
FUN13( AF_CJKMetrics  VAR2,
VAR16*        VAR17,
VAR16*        VAR18 )
{
if ( VAR17 )
*VAR17 = VAR2->VAR19[VAR20].VAR21;

if ( VAR18 )
*VAR18 = VAR2->VAR19[VAR22].VAR21;
}











FUN14(
VAR23,

VAR24,

sizeof ( VAR25 ),

(VAR26) VAR27,        
(VAR28)VAR29,       
(VAR30) NULL,                         
(VAR31)VAR32, 

(VAR33)   VAR34,          
(VAR35)  VAR36          
)