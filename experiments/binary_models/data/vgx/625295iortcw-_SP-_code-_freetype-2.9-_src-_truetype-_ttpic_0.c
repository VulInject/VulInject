VAR1
FUN1( FT_Library           VAR2,
VAR3**  VAR4 );
void
FUN2( FT_Library          VAR2,
VAR3*  VAR5 );
void
FUN3(
VAR6*  VAR7 );
void
FUN4(
VAR8*  VAR9 );


void
FUN5( FT_Library  VAR2 )
{
VAR10*  VAR11 = &VAR2->VAR11;
FT_Memory          VAR12        = VAR2->VAR12;


if ( VAR11->VAR13 )
{
VAR14*  VAR15 = (VAR14*)VAR11->VAR13;


if ( VAR15->VAR16 )
FUN2( VAR2, VAR15->VAR16 );
VAR15->VAR16 = NULL;
FUN6( VAR15 );
VAR11->VAR13 = NULL;
}
}


VAR1
FUN7( FT_Library  VAR2 )
{
VAR10*  VAR11 = &VAR2->VAR11;
FT_Error           VAR17         = VAR18;
VAR14*       VAR15     = NULL;
FT_Memory          VAR12        = VAR2->VAR12;



if ( FUN8( VAR15, sizeof ( *VAR15 ) ) )
return VAR17;
FUN9( VAR15, 0, sizeof ( *VAR15 ) );
VAR11->VAR13 = VAR15;



VAR17 = FUN1( VAR2,
&VAR15->VAR16 );
if ( VAR17 )
goto VAR19;