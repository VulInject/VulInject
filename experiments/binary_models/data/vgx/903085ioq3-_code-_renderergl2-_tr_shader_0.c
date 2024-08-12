static VAR1 FUN1( char **VAR2 )
{
char *VAR3;
int VAR4;

VAR4 = 0;

VAR3 = FUN2( VAR2, VAR5 );
if ( VAR3[0] != '' )
{
VAR6.FUN3( VAR7, "", VAR3, VAR8.VAR9 );
return VAR10;
}

while ( 1 )
{
VAR3 = FUN2( VAR2, VAR5 );
if ( !VAR3[0] )
{
VAR6.FUN3( VAR7, "", VAR8.VAR9 );
return VAR10;
}


if ( VAR3[0] == '' )
{
break;
}

else if ( VAR3[0] == '' )
{
if ( VAR4 >= VAR11 ) {
VAR6.FUN3( VAR7, "", VAR8.VAR9, VAR11 );
return VAR10;
}

if ( !FUN4( &VAR12[VAR4], VAR2 ) )
{
return VAR10;
}
VAR12[VAR4].VAR13 = VAR5;
VAR4++;

continue;
}

else if ( !FUN5( VAR3, "", 3 ) ) {
FUN6( VAR2 );
continue;
}

else if ( !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) ) {
float	VAR14, VAR15;
qboolean VAR16 = VAR10;

if (!FUN7( VAR3, "" ) && VAR17->VAR18 )
{
VAR16 = VAR5;
VAR19.VAR20 = VAR5;
}

VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR21[0] = FUN8( VAR3 );
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR21[1] = FUN8( VAR3 );
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR21[2] = FUN8( VAR3 );

FUN9( VAR19.VAR21 );

VAR3 = FUN2( VAR2, VAR10 );
VAR14 = FUN8( VAR3 );
FUN10( VAR19.VAR21, VAR14, VAR19.VAR21);

VAR3 = FUN2( VAR2, VAR10 );
VAR14 = FUN8( VAR3 );
VAR14 = VAR14 / 180 * VAR22;

VAR3 = FUN2( VAR2, VAR10 );
VAR15 = FUN8( VAR3 );
VAR15 = VAR15 / 180 * VAR22;

VAR19.VAR23[0] = FUN11( VAR14 ) * FUN11( VAR15 );
VAR19.VAR23[1] = FUN12( VAR14 ) * FUN11( VAR15 );
VAR19.VAR23[2] = FUN12( VAR15 );

if (VAR16)
{
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR24 = FUN8(VAR3);


VAR3 = FUN2( VAR2, VAR10 );
if (VAR3[0])
VAR19.VAR24 = FUN8(VAR3);
}

FUN6( VAR2 );
continue;
}

else if ( !FUN7( VAR3, "" ) ) {
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR25[0] = FUN8( VAR3 );
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR25[1] = FUN8( VAR3 );
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR25[2] = FUN8( VAR3 );

VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR26[0] = FUN8( VAR3 );
VAR3 = FUN2( VAR2, VAR10 );
VAR19.VAR26[1] = FUN8( VAR3 );

FUN6( VAR2 );
continue;
}
else if ( !FUN7( VAR3, "" ) ) {
FUN13( VAR2 );
continue;
}
else if ( !FUN7( VAR3, "" ) ) {
FUN6( VAR2 );
continue;
}
else if ( !FUN7( VAR3, "" ) ) {
VAR3 = FUN2( VAR2, VAR10 );
if (VAR3[0]) {
VAR8.VAR27 = FUN8(VAR3);
}
}

else if ( !FUN5( VAR3, "", 5 ) ) {
FUN6( VAR2 );
continue;
}

else if ( !FUN7( VAR3, "" ) ) {
FUN14( VAR2 );
continue;
}

else if ( !FUN7( VAR3, "" ) )
{
VAR8.VAR28 = VAR5;
VAR8.VAR29 = VAR5;
continue;
}

else if ( !FUN7( VAR3, "" ) )
{
VAR8.VAR29 = VAR5;
continue;
}

else if ( !FUN7( VAR3, "" ) )
{
VAR8.VAR30 = VAR5;
continue;
}




else if ( !FUN7( VAR3, "" ) )
{
VAR8.VAR31 = VAR5;
continue;
}

else if ( !FUN7( VAR3, "" ) ) 
{
if ( !FUN15( VAR2, 3, VAR8.VAR32.VAR33 ) ) {
return VAR10;
}

if ( VAR34->VAR18 )
{
float VAR35;

VAR35 = FUN16( VAR8.VAR32.VAR33[0], VAR8.VAR32.VAR33[1], VAR8.VAR32.VAR33[2] );
FUN17( VAR8.VAR32.VAR33, VAR35, VAR35, VAR35 );
}
else if ( VAR34->VAR36 )
{
float VAR35;

VAR35 = FUN16( VAR8.VAR32.VAR33[0], VAR8.VAR32.VAR33[1], VAR8.VAR32.VAR33[2] );
VAR8.VAR32.VAR33[0] = FUN18( VAR8.VAR32.VAR33[0], VAR35, VAR34->VAR36 );
VAR8.VAR32.VAR33[1] = FUN18( VAR8.VAR32.VAR33[1], VAR35, VAR34->VAR36 );
VAR8.VAR32.VAR33[2] = FUN18( VAR8.VAR32.VAR33[2], VAR35, VAR34->VAR36 );
}

VAR3 = FUN2( VAR2, VAR10 );
if ( !VAR3[0] ) 
{
VAR6.FUN3( VAR7, "", VAR8.VAR9 );
continue;
}
VAR8.VAR32.VAR37 = FUN8( VAR3 );


FUN6( VAR2 );
continue;
}

else if ( !FUN7(VAR3, "") )
{
VAR8.VAR38 = VAR39;
VAR8.VAR40 = VAR5;
continue;
}

else if ( !FUN7( VAR3, "" ) )
{
FUN19( VAR2 );
continue;
}

else if ( !FUN7(VAR3, "") ) 
{
FUN2( VAR2, VAR10 );
continue;
}

else if ( !FUN7( VAR3, "") ) 
{
VAR3 = FUN2( VAR2, VAR10 );
if ( VAR3[0] == 0 )
{
VAR6.FUN3( VAR7, "", VAR8.VAR9 );
continue;
}

if ( !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) )
{
VAR8.VAR41 = VAR42;
}
else if ( !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) || !FUN7( VAR3, "" ) )
{
VAR8.VAR41 = VAR43;
}
else
{
VAR6.FUN3( VAR7, "", VAR3, VAR8.VAR9 );
}
continue;
}

else if ( !FUN7( VAR3, "" ) )
{
FUN20( VAR2 );
continue;
}
else
{
VAR6.FUN3( VAR7, "", VAR3, VAR8.VAR9 );
return VAR10;
}
}




if ( VAR4 == 0 && !VAR8.VAR44 && !(VAR8.VAR45 & VAR46 ) ) {
return VAR10;
}

VAR8.VAR47 = VAR5;

return VAR5;
}