static VAR1
FUN1( T42_Face    VAR2,
FT_UInt     VAR3,
FT_Pointer  VAR4,
FT_UInt     VAR5 )
{
FUN2( VAR4, VAR2->VAR6.VAR7[VAR3], VAR5 );

return VAR8;
}


static VAR9
FUN3( T42_Face    VAR2,
VAR10*  VAR11 )
{
FT_Int  VAR12;


for ( VAR12 = 0; VAR12 < VAR2->VAR6.VAR13; VAR12++ )
{
VAR10*  VAR14 = VAR2->VAR6.VAR7[VAR12];


if ( VAR11[0] == VAR14[0] && !FUN4( VAR11, VAR14 ) )
return (VAR9)FUN5( (const char *)VAR2->VAR6.VAR15[VAR12],
NULL, 10 );
}

return 0;
}


static const FT_Service_GlyphDictRec  VAR16 =
{
(VAR17)  VAR18,    
(VAR19)VAR20     
};




static const char*
FUN6( T42_Face  VAR2 )
{
return (const char*)VAR2->VAR6.VAR21;
}


static const FT_Service_PsFontNameRec  VAR22 =
{
(VAR23)VAR24   
};




static VAR1
FUN7( FT_Face          VAR2,
VAR25*  VAR26 )
{
*VAR26 = ((VAR27)VAR2)->VAR6.VAR28;

return VAR8;
}