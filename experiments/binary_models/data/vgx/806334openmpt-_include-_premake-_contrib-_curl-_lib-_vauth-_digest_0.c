VAR1 FUN1(const char *VAR2,
struct VAR3 *VAR4)
{
bool VAR5 = VAR6; 
bool VAR7 = VAR6;
bool VAR8 = VAR6;
char *VAR9 = NULL;
char *VAR10 = NULL;


if(VAR4->VAR11)
VAR5 = VAR12;


FUN2(VAR4);

for(;;) {
char VAR13[VAR14];
char VAR15[VAR16];


while(*VAR2 && FUN3(*VAR2))
VAR2++;


if(FUN4(VAR2, VAR13, VAR15, &VAR2)) {
if(FUN5(VAR13, "")) {
free(VAR4->VAR11);
VAR4->VAR11 = strdup(VAR15);
if(!VAR4->VAR11)
return VAR17;
}
else if(FUN5(VAR13, "")) {
if(FUN5(VAR15, "")) {
VAR4->VAR18 = VAR12;
VAR4->VAR19 = 1; 
}
}
else if(FUN5(VAR13, "")) {
free(VAR4->VAR20);
VAR4->VAR20 = strdup(VAR15);
if(!VAR4->VAR20)
return VAR17;
}
else if(FUN5(VAR13, "")) {
free(VAR4->VAR21);
VAR4->VAR21 = strdup(VAR15);
if(!VAR4->VAR21)
return VAR17;
}
else if(FUN5(VAR13, "")) {
char *VAR22;

VAR10 = strdup(VAR15);
if(!VAR10)
return VAR17;

VAR9 = FUN6(VAR10, "", &VAR22);
while(VAR9 != NULL) {
if(FUN5(VAR9, VAR23)) {
VAR7 = VAR12;
}
else if(FUN5(VAR9, VAR24)) {
VAR8 = VAR12;
}
VAR9 = FUN6(NULL, "", &VAR22);
}

free(VAR10);


if(VAR7) {
free(VAR4->VAR25);
VAR4->VAR25 = strdup(VAR23);
if(!VAR4->VAR25)
return VAR17;
}
else if(VAR8) {
free(VAR4->VAR25);
VAR4->VAR25 = strdup(VAR24);
if(!VAR4->VAR25)
return VAR17;
}
}
else if(FUN5(VAR13, "")) {
free(VAR4->VAR26);
VAR4->VAR26 = strdup(VAR15);
if(!VAR4->VAR26)
return VAR17;

if(FUN5(VAR15, ""))
VAR4->VAR27 = VAR28;
else if(FUN5(VAR15, ""))
VAR4->VAR27 = VAR29;
else
return VAR30;
}
else {

}
}
else
break; 


while(*VAR2 && FUN3(*VAR2))
VAR2++;


if('' == *VAR2)
VAR2++;
}


if(VAR5 && !VAR4->VAR18)
return VAR30;


if(!VAR4->VAR11)
return VAR30;

return VAR31;
}