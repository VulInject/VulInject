struct VAR1 *FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3 = calloc(1, sizeof(struct VAR1));
if(NULL == VAR3)
goto VAR4;


VAR3->VAR5.VAR6 = VAR2->VAR5.VAR6;
VAR3->VAR7.VAR8 = malloc(FUN2(VAR3->VAR5.VAR6) + 1);
if(!VAR3->VAR7.VAR8)
goto VAR4;

VAR3->VAR7.VAR9 = malloc(VAR10);
if(!VAR3->VAR7.VAR9)
goto VAR4;
VAR3->VAR7.VAR11 = VAR10;


if(FUN3(VAR3, VAR2))
goto VAR4;


VAR3->VAR7.VAR12 = NULL;

VAR3->VAR7.VAR13 = NULL;

VAR3->VAR14.VAR15    = VAR2->VAR14.VAR15;
VAR3->VAR14.VAR16 = VAR2->VAR14.VAR16;

if(VAR2->VAR17) {

VAR3->VAR17 = FUN4(VAR2,
VAR2->VAR17->VAR18,
VAR3->VAR17,
VAR2->VAR5.VAR19);
if(!VAR3->VAR17)
goto VAR4;
}


if(VAR2->VAR20.VAR21) {
VAR3->VAR20.VAR21 =
FUN5(VAR2->VAR20.VAR21);
if(!VAR3->VAR20.VAR21)
goto VAR4;
}

if(VAR2->VAR20.VAR22) {
VAR3->VAR20.VAR22 = strdup(VAR2->VAR20.VAR22);
if(!VAR3->VAR20.VAR22)
goto VAR4;
VAR3->VAR20.VAR23 = VAR24;
}

if(VAR2->VAR20.VAR25) {
VAR3->VAR20.VAR25 = strdup(VAR2->VAR20.VAR25);
if(!VAR3->VAR20.VAR25)
goto VAR4;
VAR3->VAR20.VAR26 = VAR24;
}


if(FUN6(&VAR3->VAR7.VAR27,
VAR2->VAR7.VAR27))
goto VAR4;

FUN7(VAR3);

FUN8(VAR3);

VAR3->VAR28 = VAR29;



return VAR3;

VAR4:

if(VAR3) {
FUN9(VAR3->VAR20.VAR21);
VAR3->VAR20.VAR21 = NULL;
FUN10(VAR3->VAR7.VAR8);
FUN10(VAR3->VAR7.VAR9);
FUN10(VAR3->VAR20.VAR22);
FUN10(VAR3->VAR20.VAR25);
FUN11(VAR3);
free(VAR3);
}

return NULL;
}