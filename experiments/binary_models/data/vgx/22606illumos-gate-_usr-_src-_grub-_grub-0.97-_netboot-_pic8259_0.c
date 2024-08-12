void (*VAR1)FUN1((void)) = VAR2;
uint16_t volatile *VAR3 = &VAR4;
VAR5 *VAR6 = &VAR7;
VAR8 *VAR9 = &VAR10;
irq_t VAR11 = VAR12;


VAR5 *VAR13 = &VAR14;
VAR8 *VAR15 = &VAR16;


static uint16_t VAR17 = 0;



int FUN2 ( irq_t VAR18, segoff_t VAR19 ) {
segoff_t VAR20 = FUN3(VAR1);

if ( VAR11 != VAR12 ) {
FUN4 ( "" );
return 0;
}
if ( FUN5(VAR1) > 0xffff ) {
FUN4 ( "" );
return 0;
}

FUN4 ( "", VAR18 );
*VAR13 = VAR19;
*VAR15 = VAR18;
if ( ! FUN6 ( VAR18, &VAR20,
VAR9,
VAR6 ) )
return 0;
VAR11 = VAR18;

FUN4 ( "", VAR18 );
FUN7 ( VAR18 );
*VAR3 = 0;
VAR17 = 0;
FUN4 ( "" );
return 1;
}