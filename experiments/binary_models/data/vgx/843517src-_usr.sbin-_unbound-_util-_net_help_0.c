VAR1* FUN1(char* VAR2, int* VAR3, char** VAR4)
{
char* VAR5;
VAR1* VAR6;
size_t VAR7;
*VAR3 = VAR8;
*VAR4 = NULL;
if((VAR5=strchr(VAR2, ''))) {
char* VAR9 = strchr(VAR5+1, '');
if(VAR9) {
*VAR4 = VAR9+1;
} else {
*VAR4 = NULL;
}
*VAR3 = FUN2(VAR5+1);
if(*VAR3 == 0) {
if(!VAR9 && strcmp(VAR5+1,"")!=0)
return 0;
if(VAR9 && FUN3(VAR5+1,"",2)!=0)
return 0;
}
*VAR5 = 0;
VAR6 = FUN4(VAR2, &VAR7);
*VAR5 = '';
} else if((VAR5=strchr(VAR2, ''))) {
*VAR3 = VAR10;
*VAR4 = VAR5+1;
*VAR5 = 0;
VAR6 = FUN4(VAR2, &VAR7);
*VAR5 = '';
} else {
VAR6 = FUN4(VAR2, &VAR7);
}
return VAR6;
}