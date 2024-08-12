VAR1  FUN1( HB_Font          VAR2,
VAR3** VAR4,
VAR5*  VAR6 )
{
HB_UInt         VAR7, VAR8, VAR9;

VAR3*  VAR10;

HB_Stream  VAR11 = VAR2->VAR11;
HB_Error   VAR12;


if ( !VAR4 )
return FUN2(VAR13);

if ( FUN3( VAR14 ) )
return VAR12;

VAR9 = FUN4();

if ( FUN5 ( VAR10, sizeof( *VAR10 ) ) )
return VAR12;

VAR10->VAR15 = (VAR16) VAR17;
VAR10->VAR18 = VAR19;



if ( FUN6( VAR9 + 4L ) ||
FUN7( 2L ) )
goto VAR20;

VAR8 = FUN8() + VAR9;

FUN9();

VAR7 = FUN4();
if ( FUN6( VAR8 ) ||
( VAR12 = FUN10( &VAR10->VAR21,
VAR11 ) ) != VAR22 )
goto VAR20;
(void)FUN6( VAR7 );

if ( FUN7( 2L ) )
goto VAR23;

VAR8 = FUN8() + VAR9;

FUN9();

VAR7 = FUN4();
if ( FUN6( VAR8 ) ||
( VAR12 = FUN11( &VAR10->VAR24,
VAR11 ) ) != VAR22 )
goto VAR23;
(void)FUN6( VAR7 );

if ( FUN7( 2L ) )
goto VAR25;

VAR8 = FUN8() + VAR9;

FUN9();

VAR7 = FUN4();
if ( FUN6( VAR8 ) ||
( VAR12 = FUN12( &VAR10->VAR26,
VAR11, VAR27 ) ) != VAR22 )
goto VAR25;

VAR10->VAR6 = VAR6;      

if ( ( VAR12 =  FUN13( VAR6, VAR11,
VAR10->VAR26.VAR28,
VAR10->VAR26.VAR29 ) ) )
goto VAR30;

*VAR4 = VAR10;

return VAR22;

VAR30:
FUN14( &VAR10->VAR26, VAR27 );

VAR25:
FUN15( &VAR10->VAR24 );

VAR23:
FUN16( &VAR10->VAR21 );

VAR20:
FUN17( VAR10 );

return VAR12;
}