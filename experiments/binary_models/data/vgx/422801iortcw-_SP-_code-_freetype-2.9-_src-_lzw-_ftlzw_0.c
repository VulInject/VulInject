typedef struct  VAR1
{
FT_Stream       VAR2;         
FT_Stream       VAR3;         
FT_Memory       VAR4;         
FT_LzwStateRec  VAR5;            

FT_Byte         VAR6[VAR7]; 
FT_ULong        VAR8;                        
VAR9*        VAR10;
VAR9*        VAR11;

} VAR12, *VAR13;



static VAR14
FUN1( FT_Stream  VAR3 )
{
FT_Error  VAR15;
FT_Byte   VAR16[2];


if ( FUN2( 0 )       ||
FUN3( VAR16, 2 ) )
goto VAR17;


if ( VAR16[0] != 0x1F ||
VAR16[1] != 0x9D )
VAR15 = FUN4( VAR18 );

VAR17:
return VAR15;
}


static VAR14
FUN5( FT_LZWFile  VAR19,
FT_Stream   VAR3,
FT_Stream   VAR2 )
{
FT_LzwState  VAR5   = &VAR19->VAR5;
FT_Error     VAR15;


VAR19->VAR3 = VAR3;
VAR19->VAR2 = VAR2;
VAR19->VAR4 = VAR3->VAR4;

VAR19->VAR11  = VAR19->VAR6 + VAR7;
VAR19->VAR10 = VAR19->VAR11;
VAR19->VAR8    = 0;


VAR15 = FUN1( VAR2 );
if ( VAR15 )
goto VAR17;


FUN6( VAR5, VAR2 );

VAR17:
return VAR15;
}


static void
FUN7( FT_LZWFile  VAR19 )
{

FUN8( &VAR19->VAR5 );

VAR19->VAR4 = NULL;
VAR19->VAR2 = NULL;
VAR19->VAR3 = NULL;
}


static VAR14
FUN9( FT_LZWFile  VAR19 )
{
FT_Stream  VAR3 = VAR19->VAR2;