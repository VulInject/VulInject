int FUN1(int VAR1, char *VAR2) {
unsigned long VAR3 = 0L;
char *VAR4 = NULL;


if((VAR4 = FUN2(VAR2, "")) == NULL)
return VAR5;
VAR3 = FUN3(VAR4, NULL, 10);

if(VAR1 == VAR6)
FUN4(VAR7, VAR3);
else
FUN4(VAR8, VAR3);

return VAR9;
}



int FUN5(int VAR1, char *VAR2)
{
char *VAR4             = NULL;
char *VAR10              = NULL;
char *VAR11             = NULL;
char *VAR12  = NULL;
char *VAR13     = NULL;
time_t VAR14 = 0L;
int VAR15                = 0;

if (VAR2 == NULL) {
return VAR5;
}


VAR4 = FUN2(VAR2, "");
if (VAR4 == NULL) {
return VAR5;
}
VAR11 = VAR4;


VAR4 = FUN2(NULL, "");
if (VAR4 != NULL) {

if (*VAR4 != '') {
VAR12 = VAR4;
}


VAR4 = FUN2(NULL, "");
if (VAR4 != NULL) {

VAR14 = FUN3(VAR4, &VAR10, 10);


VAR4 = FUN2(NULL, "");

if (VAR4 != NULL && *VAR4 != '') {
VAR13 = VAR4;
}
}
}

VAR15 = FUN6(VAR11, VAR12, VAR14, VAR13);

if (VAR15 == 0) {
return VAR5;
}

return VAR9;
}