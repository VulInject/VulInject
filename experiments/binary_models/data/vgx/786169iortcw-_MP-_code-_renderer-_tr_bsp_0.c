int FUN1( int VAR1, int VAR2 ) {
int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
VAR11 *VAR12, *VAR13;
float *VAR14, *VAR15;

VAR12 = (VAR11 *) VAR16.VAR17[VAR1].VAR18;
VAR13 = (VAR11 *) VAR16.VAR17[VAR2].VAR18;
for ( VAR6 = 0; VAR6 < 2; VAR6++ ) {

if ( VAR6 ) {
VAR7 = ( VAR12->VAR19 - 1 ) * VAR12->VAR20;
} else { VAR7 = 0;}
if ( FUN2( VAR12, VAR7 ) ) {
continue;
}
for ( VAR3 = 0; VAR3 < VAR12->VAR20 - 2; VAR3 += 2 ) {

for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( VAR13->VAR20 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = ( VAR13->VAR19 - 1 ) * VAR13->VAR20;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR20 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR3 + 2 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + 1 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[VAR4 + 1 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR9 = VAR13->VAR19 - 1;
} else { VAR9 = 0;}
VAR13 = FUN4( VAR13, VAR4 + 1, VAR9,
VAR12->VAR22[VAR3 + 1 + VAR7].VAR23, VAR12->VAR24[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( VAR13->VAR19 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = VAR13->VAR20 - 1;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR19 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR3 + 2 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR10 = VAR13->VAR20 - 1;
} else { VAR10 = 0;}
VAR13 = FUN5( VAR13, VAR4 + 1, VAR10,
VAR12->VAR22[VAR3 + 1 + VAR7].VAR23, VAR12->VAR24[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
}
}
for ( VAR6 = 0; VAR6 < 2; VAR6++ ) {

if ( VAR6 ) {
VAR7 = VAR12->VAR20 - 1;
} else { VAR7 = 0;}
if ( FUN6( VAR12, VAR7 ) ) {
continue;
}
for ( VAR3 = 0; VAR3 < VAR12->VAR19 - 2; VAR3 += 2 ) {
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( VAR13->VAR20 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = ( VAR13->VAR19 - 1 ) * VAR13->VAR20;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR20 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR12->VAR20 * VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR12->VAR20 * ( VAR3 + 2 ) + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + 1 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR9 = VAR13->VAR19 - 1;
} else { VAR9 = 0;}
VAR13 = FUN4( VAR13, VAR4 + 1, VAR9,
VAR12->VAR22[VAR12->VAR20 * ( VAR3 + 1 ) + VAR7].VAR23, VAR12->VAR28[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( VAR13->VAR19 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = VAR13->VAR20 - 1;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR19 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR12->VAR20 * VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR12->VAR20 * ( VAR3 + 2 ) + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR10 = VAR13->VAR20 - 1;
} else { VAR10 = 0;}
VAR13 = FUN5( VAR13, VAR4 + 1, VAR10,
VAR12->VAR22[VAR12->VAR20 * ( VAR3 + 1 ) + VAR7].VAR23, VAR12->VAR28[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
}
}
for ( VAR6 = 0; VAR6 < 2; VAR6++ ) {

if ( VAR6 ) {
VAR7 = ( VAR12->VAR19 - 1 ) * VAR12->VAR20;
} else { VAR7 = 0;}
if ( FUN2( VAR12, VAR7 ) ) {
continue;
}
for ( VAR3 = VAR12->VAR20 - 1; VAR3 > 1; VAR3 -= 2 ) {

for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( !VAR13 || VAR13->VAR20 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = ( VAR13->VAR19 - 1 ) * VAR13->VAR20;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR20 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR3 - 2 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + 1 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR9 = VAR13->VAR19 - 1;
} else { VAR9 = 0;}
VAR13 = FUN4( VAR13, VAR4 + 1, VAR9,
VAR12->VAR22[VAR3 - 1 + VAR7].VAR23, VAR12->VAR24[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( !VAR13 || VAR13->VAR19 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = VAR13->VAR20 - 1;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR19 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR3 - 2 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR10 = VAR13->VAR20 - 1;
} else { VAR10 = 0;}
VAR13 = FUN5( VAR13, VAR4 + 1, VAR10,
VAR12->VAR22[VAR3 - 1 + VAR7].VAR23, VAR12->VAR24[VAR3 + 1] );
if ( !VAR13 ) {
break;
}
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
}
}
for ( VAR6 = 0; VAR6 < 2; VAR6++ ) {

if ( VAR6 ) {
VAR7 = VAR12->VAR20 - 1;
} else { VAR7 = 0;}
if ( FUN6( VAR12, VAR7 ) ) {
continue;
}
for ( VAR3 = VAR12->VAR19 - 1; VAR3 > 1; VAR3 -= 2 ) {
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( !VAR13 || VAR13->VAR20 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = ( VAR13->VAR19 - 1 ) * VAR13->VAR20;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR20 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR12->VAR20 * VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR12->VAR20 * ( VAR3 - 2 ) + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR4 + 1 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR9 = VAR13->VAR19 - 1;
} else { VAR9 = 0;}
VAR13 = FUN4( VAR13, VAR4 + 1, VAR9,
VAR12->VAR22[VAR12->VAR20 * ( VAR3 - 1 ) + VAR7].VAR23, VAR12->VAR28[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
for ( VAR5 = 0; VAR5 < 2; VAR5++ ) {

if ( !VAR13 || VAR13->VAR19 >= VAR21 ) {
break;
}
if ( VAR5 ) {
VAR8 = VAR13->VAR20 - 1;
} else { VAR8 = 0;}


for ( VAR4 = 0; VAR4 < VAR13->VAR19 - 1; VAR4++ ) {

VAR14 = VAR12->VAR22[VAR12->VAR20 * VAR3 + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR12->VAR22[VAR12->VAR20 * ( VAR3 - 2 ) + VAR7].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[1] - VAR15[1] ) > .1 ) {
continue;
}
if ( FUN3( VAR14[2] - VAR15[2] ) > .1 ) {
continue;
}

VAR14 = VAR13->VAR22[VAR13->VAR20 * VAR4 + VAR8].VAR23;
VAR15 = VAR13->VAR22[VAR13->VAR20 * ( VAR4 + 1 ) + VAR8].VAR23;
if ( FUN3( VAR14[0] - VAR15[0] ) < .01 &&
FUN3( VAR14[1] - VAR15[1] ) < .01 &&
FUN3( VAR14[2] - VAR15[2] ) < .01 ) {
continue;
}



if ( VAR5 ) {
VAR10 = VAR13->VAR20 - 1;
} else { VAR10 = 0;}
VAR13 = FUN5( VAR13, VAR4 + 1, VAR10,
VAR12->VAR22[VAR12->VAR20 * ( VAR3 - 1 ) + VAR7].VAR23, VAR12->VAR28[VAR3 + 1] );
VAR13->VAR25 = VAR26;
VAR16.VAR17[VAR2].VAR18 = (void *) VAR13;
return VAR27;
}
}
}
}
return VAR26;
}