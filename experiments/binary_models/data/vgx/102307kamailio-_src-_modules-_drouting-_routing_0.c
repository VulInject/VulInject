VAR1 *FUN1(int VAR2, VAR3 *VAR4,

int VAR5,

char *VAR6, VAR7 *VAR8)
{
char *VAR9 = NULL;
char *VAR10 = NULL;
VAR1 *VAR11 = NULL;
int *VAR12 = NULL, *VAR13 = NULL;
int VAR14 = 0, VAR15 = 0, VAR16, VAR17 = 0;
long VAR18 = 0;
VAR7 *VAR19 = NULL;

if(NULL == (VAR11 = (VAR1 *)FUN2(sizeof(VAR1)))) {
FUN3("");
goto VAR20;
}
memset(VAR11, 0, sizeof(VAR1));

VAR15 = VAR21;
if(NULL == (VAR12 = (int *)FUN2(2 * VAR15 * sizeof(int)))) {
FUN3("");
goto VAR20;
}
memset(VAR12, 0, 2 * VAR15 * sizeof(int));

VAR11->VAR2 = VAR2;
VAR11->VAR22 = VAR4;
VAR11->VAR5 = VAR5;
VAR9 = VAR6;
VAR14 = 0;

while(VAR9 && (*VAR9 != 0)) {
VAR23 = 0;
VAR18 = FUN4(VAR9, &VAR10, 10);
if(VAR10 == VAR9) {
FUN3("", *VAR10, (int)(VAR10 - VAR6), VAR6);
goto VAR20;
}
if((!FUN5(*VAR10)) && (*VAR10 != VAR24) && (*VAR10 != VAR25) && (*VAR10 != VAR26)
&& (*VAR10 != 0)) {
FUN3("", *VAR10, (int)(VAR10 - VAR6), VAR6);
goto VAR20;
}
if(VAR23 == VAR27 && (VAR18 == VAR28 || VAR18 == VAR29)) {
FUN3("");
goto VAR20;
}
VAR12[2 * VAR14] = VAR18;
VAR12[2 * VAR14 + 1] = VAR17;
if(*VAR10 == VAR26)
VAR17++;
VAR14++;

if(VAR14 >= VAR15) {
if(NULL == ((VAR13) = (int *)FUN2(
(VAR15 * 2 * 2) * sizeof(int)))) {
FUN3("");
goto VAR20;
}
memset(VAR13 + (2 * VAR15), 0, 2 * VAR15 * sizeof(int));
memcpy(VAR13, VAR12, 2 * VAR15 * sizeof(int));
FUN6(VAR12);
VAR15 *= 2;
VAR12 = VAR13;
}
if(FUN5(*VAR10))
FUN7(VAR10);
if(VAR10 && (*VAR10 == VAR24 || *VAR10 == VAR25 || *VAR10 == VAR26))
VAR10++;
VAR9 = VAR10;
}
if(VAR14 == 0) {
FUN3("");
goto VAR20;
}

VAR11->VAR30 = VAR14;
if(NULL == (VAR11->VAR31 = (VAR32 *)FUN2(
VAR11->VAR30 * sizeof(VAR32)))) {
goto VAR20;
}
memset(VAR11->VAR31, 0, VAR11->VAR30 * sizeof(VAR32));

for(VAR16 = 0; VAR16 < VAR14; VAR16++) {
if(NULL == (VAR19 = FUN8(VAR8, VAR12[2 * VAR16]))) {
FUN3("", VAR12[2 * VAR16]);
goto VAR20;
}
VAR11->VAR31[VAR16].VAR19 = VAR19;
VAR11->VAR31[VAR16].VAR33 = VAR12[2 * VAR16 + 1];

}

FUN6(VAR12);
return VAR11;

VAR20:
if(NULL != VAR12)
FUN6(VAR12);
if((NULL != VAR11) && (NULL != VAR11->VAR31))
FUN6(VAR11->VAR31);
if(NULL != VAR11)
FUN6(VAR11);
return NULL;
}