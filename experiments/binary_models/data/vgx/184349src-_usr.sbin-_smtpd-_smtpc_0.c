static void
FUN1(char *VAR1)
{
static char * const VAR2[] = {
"",
"",
"",
"",
"",
"",
NULL };
char *VAR3;

while (*VAR1) {
switch (FUN2(&VAR1, VAR2, &VAR3)) {
case VAR4:
if (VAR3 == NULL)
FUN3("");
VAR5 = VAR3;
break;
case VAR6:
if (VAR3 == NULL)
FUN3("");
VAR7 = VAR3;
break;
case VAR8:
if (VAR3 != NULL)
FUN3("");
VAR9 = 1;
break;
case VAR10:
if (VAR3 != NULL)
FUN3("");
VAR11.VAR12 = 0;
break;
case VAR13:
if (VAR3 == NULL)
FUN3("");
VAR14 = VAR3;
break;
case VAR15:
if (VAR3 == NULL)
FUN3("");
VAR16 = VAR3;
break;
case -1:
if (VAR17)
FUN3(""%VAR18\"", VAR17);
FUN3("");
}
}
}