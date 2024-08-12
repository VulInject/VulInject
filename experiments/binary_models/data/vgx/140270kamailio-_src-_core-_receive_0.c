int FUN1(char *VAR1, unsigned int VAR2)
{
char *VAR3;
int VAR4;

VAR4 = 0;
for(VAR3 = VAR1; VAR3 < VAR1 + VAR2; VAR3++) {

if(VAR4 == 0) {
if(*VAR3 == '' || *VAR3 == '' || *VAR3 == '' || *VAR3 == '')
continue;
if(VAR1 + VAR2 - VAR3 < 10)
return -1;
if(FUN2(VAR3, "", 8) == 0) {
FUN3("");
return 0;
}
VAR4 = 1;
} else {

if(*VAR3 != '' && *VAR3 != '')
continue;
if(VAR3 - 10 >= VAR1) {
if(FUN2(VAR3 - 8, "", 8) == 0) {
FUN3("");
return 0;
}
}
return -1;
}
}
return -1;
}