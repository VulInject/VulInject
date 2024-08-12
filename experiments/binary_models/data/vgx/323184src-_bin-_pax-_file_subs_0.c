int
FUN1(int VAR1, char *VAR2, int VAR3, int *VAR4, int *VAR5, int VAR6,
char *VAR7)
{
char *VAR8;
char *VAR9;
int VAR10;
char *VAR11 = VAR2;
char **VAR12;


while (VAR3) {
if (!*VAR4) {

*VAR5 = 1;
*VAR4 = VAR6;
}


VAR10 = FUN2(VAR3, *VAR4);
VAR3 -= VAR10;
*VAR4 -= VAR10;
if (*VAR5) {

VAR8 = VAR11;
VAR9 = VAR11 + VAR10;


while ((VAR8 < VAR9) && (*VAR8 == ''))
++VAR8;

if (VAR8 == VAR9) {

if (VAR1 > -1 &&
FUN3(VAR1, VAR10, VAR13) < 0) {
FUN4(1,VAR14,"",
VAR7);
return(-1);
}
VAR11 = VAR8;
continue;
}

*VAR5 = 0;
}


switch (VAR1) {
case -1:
VAR12 = &VAR15;
break;
case -2:
VAR12 = &VAR16;
break;
default:
VAR12 = NULL;
break;
}
if (VAR12) {
if (*VAR12)
FUN5(1, "");
*VAR12 = malloc(VAR10 + 1);
if (*VAR12 == NULL) {
FUN6(1, "");
return(-1);
}
memcpy(*VAR12, VAR11, VAR10);
(*VAR12)[VAR10] = '';
break;
} else if (write(VAR1, VAR11, VAR10) != VAR10) {
FUN4(1, VAR14, "", VAR7);
return(-1);
}
VAR11 += VAR10;
}
return(VAR11 - VAR2);
}