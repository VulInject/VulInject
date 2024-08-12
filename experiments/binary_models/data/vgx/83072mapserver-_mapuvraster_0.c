static char **FUN1(VAR1 *VAR2, float VAR3, float VAR4, const VAR5* VAR6)
{
char **VAR7;
int VAR8 = 0;
char VAR9[100];
float VAR10;
int *VAR11 = (int*)VAR2->VAR12;
VAR13 *VAR14 = (VAR13 *) VAR2->VAR15;
double VAR16 = VAR17;
double VAR18 = VAR17;

if(VAR2->VAR19 == 0)
return(NULL);

if(!VAR2->VAR12) { 
if (FUN2(VAR2) != VAR20)
return NULL;
VAR11 = (int*)VAR2->VAR12; 
}

if((VAR7 = (char **)malloc(sizeof(char *)*VAR2->VAR19)) == NULL) {
FUN3(VAR21, NULL, "");
return(NULL);
}




VAR10 = 1;
if( FUN4( VAR2->VAR22, "" ) != NULL ) {
VAR10 =
FUN5(FUN4( VAR2->VAR22, "" ));
}

if( VAR14->VAR23 )
{
if( VAR14->VAR24 == NULL )
VAR14->VAR24 = FUN6(&VAR2->VAR25, NULL);
if( VAR14->VAR24 )
{
pointObj VAR26 = *VAR6;
if( FUN7(VAR14->VAR24, &VAR26) == VAR20 )
{
VAR16 = VAR26.VAR27;
VAR18 = VAR26.VAR28;
}
}
}

for(VAR8=0; VAR8<VAR2->VAR19; VAR8++) {
if (VAR11[VAR8] == VAR29) {
snprintf(VAR9, 100, "", (FUN8((double)VAR4, (double)VAR3) * 180 / VAR30));
VAR7[VAR8] = FUN9(VAR9);
} else if (VAR11[VAR8] == VAR31) {
double VAR32;
VAR32 = (FUN8((double)VAR4, (double)VAR3) * 180 / VAR30)+180;
if (VAR32 >= 360)
VAR32 -= 360;
snprintf(VAR9, 100, "", VAR32);
VAR7[VAR8] = FUN9(VAR9);
} else if ( (VAR11[VAR8] == VAR33) ||
(VAR11[VAR8] == VAR34) ) {
float VAR35 = FUN10((VAR3*VAR3)+(VAR4*VAR4))*VAR10;

if (VAR11[VAR8] == VAR33)
snprintf(VAR9, 100, "", VAR35);
else
snprintf(VAR9, 100, "", VAR35/2);

VAR7[VAR8] = FUN9(VAR9);
} else if (VAR11[VAR8] == VAR36) {
snprintf(VAR9, 100, "",VAR3);
VAR7[VAR8] = FUN9(VAR9);
} else if (VAR11[VAR8] == VAR37) {
snprintf(VAR9, 100, "",VAR4);
VAR7[VAR8] = FUN9(VAR9);
} else if (VAR11[VAR8] == VAR38) {
snprintf(VAR9, sizeof(VAR9), "",VAR16);
VAR7[VAR8] = FUN9(VAR9);
} else if (VAR11[VAR8] == VAR39) {
snprintf(VAR9, sizeof(VAR9), "",VAR18);
VAR7[VAR8] = FUN9(VAR9);
} else {
VAR7[VAR8] = NULL;
}
}

return VAR7;
}