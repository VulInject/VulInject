static VAR1
FUN1(VAR2 *VAR3, VAR1 *VAR4,
VAR1 *VAR5)
{
int32_t		VAR6;
int32_t		VAR7;
VAR8		*VAR9;

FUN2(VAR10, "", VAR3->VAR11);

if (VAR3->VAR12 == NULL) {
return ((VAR1)-1);
}

VAR6 = (VAR13)(strlen(VAR3->VAR12) - 1);
VAR7 = -1;


while ((VAR6 >= 0) && (VAR3->VAR12[VAR6] != '')) {

if (VAR3->VAR12[VAR6] == '') {
VAR7 = VAR6 + 1;
}

VAR6--;
}

if (VAR6 < 0) {
FUN3(VAR3, "",
VAR3->VAR12);
return ((VAR1)-1);
}

if (VAR7 == -1) {
*VAR5 = 0;
*VAR4 = (VAR1)strlen(VAR3->VAR12);
} else {

VAR9 = VAR3->VAR12 + VAR7;
*VAR5 = FUN4(&VAR9);
if (*VAR5 == 0) {
FUN3(VAR3, ""
"", VAR3->VAR12);
return ((VAR1)-1);
}

*VAR4 = (VAR1)(VAR7 - 1);
}

FUN2(VAR10, "", VAR3->VAR11);

return (0);
}