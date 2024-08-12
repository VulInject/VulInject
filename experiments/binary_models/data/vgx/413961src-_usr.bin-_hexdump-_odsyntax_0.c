static void
FUN1(char *VAR1)
{
int VAR2, VAR3, VAR4;

while (*VAR1) {
switch (*VAR1) {
case '':
VAR1++;
FUN2(""%3_u \""\\VAR5\"");
break;
case '':
VAR1++;
FUN2(""%3_c \""\\VAR5\"");
break;
case '':
VAR1++;
if        (*VAR1 == '' ||
*VAR1 == '') {
VAR1++;
FUN2("" %14.7e\""\\VAR5\"");
} else if (*VAR1 == '' ||
*VAR1 == '') {
VAR1++;
FUN2("" %16.14e\""\\VAR5\"");
} else if (*VAR1 == '')

FUN3();
else
FUN2("" %16.14e\""\\VAR5\"");
break;
case '':
VAR2 = 0;
goto VAR6;
case '':
VAR2 = 1;
goto VAR6;
case '':
VAR2 = 2;
goto VAR6;
case '':
VAR2 = 3;
VAR6:
VAR1++;
VAR3 = 2;
if (FUN4((unsigned char)*VAR1)) {
switch(*VAR1) {
case '':
VAR4 = sizeof(char);
break;
case '':
VAR4 = sizeof(short);
break;
case '':
VAR4 = sizeof(int);
break;
case '':
VAR4 = sizeof(long);
break;
default:
FUN5("",
*VAR1);
FUN3();
}
VAR1++;
} else if (FUN6((unsigned char)*VAR1))
VAR4 = FUN7(VAR1, &VAR1, 10);
else
VAR4 = 4;

switch (VAR4) {
case 1:
VAR3 = 0;
break;
case 2:
VAR3 = 1;
break;
case 4:
VAR3 = 2;
break;
case 8:
VAR3 = 3;
break;
default:
FUN5(""
"", VAR4);
FUN3();
}
FUN2(VAR7[VAR2][VAR3]);
break;
default:
FUN3();
}
}
}