char *
FUN1(const char *VAR1, expandPathTypeT VAR2)
{
char *VAR3 = NULL;

if (*VAR1 == '') 
return xstrdup(VAR1);

if (VAR2 == VAR4) {
size_t VAR5 = 512;
size_t VAR6 = strlen(VAR1) + 1;


if (VAR1[0] != '') {
for (;;) {
char *VAR7;
VAR3 = xrealloc(VAR3, VAR5);
if ((VAR7 = FUN2(VAR3, VAR5)) == NULL && VAR8 == VAR9) {
VAR5 *= 2;
}
else {
VAR3 = VAR7;
break;
}
}
VAR6 += strlen(VAR3) + 1;	
VAR3 = xrealloc(VAR3, VAR6);
strcat(VAR3, "");
strcat(VAR3, VAR1);
}

FUN3((VAR10,
"",
VAR1, VAR3 == NULL ? "" : VAR3));
return VAR3 ? VAR3 : xstrdup(VAR1);
}
else {
FUN4(VAR11.VAR12.VAR13 != NULL, "");
VAR3 = xstrdup(VAR11.VAR12.VAR13);
VAR3 = FUN5(VAR3, VAR1);
FUN3((VAR10,
"",
VAR1, VAR11.VAR12.VAR13, VAR3));
return VAR3;
}
}


char *
FUN6(const char *VAR1)
{
char *VAR14 = NULL;
const char *VAR15 = VAR1;
size_t VAR6;
char *VAR16;


if (FUN7("", VAR1, VAR17)) {
VAR1 += strlen("");
if (FUN7("
char *VAR7 = strchr(VAR1+2, ''); 
if (VAR7 == NULL) {
FUN8((VAR10, "",
VAR15));
}
else {

while (*(VAR7+1) == '') 
VAR7++;
VAR1 = VAR7;
}
}
}

VAR6 = strlen(VAR1) + 5; 

VAR14 = xmalloc(VAR6);

strcpy(VAR14, VAR1);


if ((VAR16 = strrchr(VAR14, '')) == NULL) {
VAR16 = VAR14;
}
if ((VAR16 = strrchr(VAR16, '')) == NULL) {
FUN3((VAR10, "", VAR14));
strcat(VAR14, "");
}
return VAR14;
}