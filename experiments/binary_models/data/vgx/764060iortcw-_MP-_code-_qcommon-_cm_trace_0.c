void FUN1( VAR1 *VAR2, VAR3 *VAR4 ) {
int VAR5;
int VAR6;
VAR7    *VAR8;
VAR9    *VAR10;


for ( VAR5 = 0 ; VAR5 < VAR4->VAR11 ; VAR5++ ) {
VAR6 = VAR12.VAR13[VAR4->VAR14 + VAR5];
VAR8 = &VAR12.VAR15[VAR6];
if ( VAR8->VAR16 == VAR12.VAR16 ) {
continue;   
}
VAR8->VAR16 = VAR12.VAR16;

if ( !( VAR8->VAR17 & VAR2->VAR17 ) ) {
continue;
}

FUN2( VAR2, VAR8 );
if ( VAR2->VAR18.VAR19 ) {
return;
}
}


if ( 1 ) {
if ( !VAR20->VAR21 ) {
for ( VAR5 = 0 ; VAR5 < VAR4->VAR22 ; VAR5++ ) {
VAR10 = VAR12.VAR23[ VAR12.VAR24[ VAR4->VAR25 + VAR5 ] ];
if ( !VAR10 ) {
continue;
}
if ( VAR10->VAR16 == VAR12.VAR16 ) {
continue;   
}
VAR10->VAR16 = VAR12.VAR16;

if ( !( VAR10->VAR17 & VAR2->VAR17 ) ) {
continue;
}

if ( FUN3( VAR2, VAR10->VAR26 ) ) {
VAR2->VAR18.VAR27 = VAR2->VAR18.VAR19 = VAR28;
VAR2->VAR18.VAR29 = 0;
return;
}
}
}
}