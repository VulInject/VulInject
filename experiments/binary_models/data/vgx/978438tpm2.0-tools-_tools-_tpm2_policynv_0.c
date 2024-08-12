static bool FUN1(char VAR1, char *VAR2) {

bool VAR3 = false;
char *VAR4;

switch (VAR1) {
case '':
VAR5.VAR6.VAR7 = VAR2;
break;
case '':
VAR5.VAR6.VAR8 = VAR2;
break;
case '':
VAR5.VAR9 = VAR2;
break;
case '':
VAR5.VAR10 = VAR2;
break;
case '':
VAR4 = strcmp("", VAR2) ? VAR2 : 0;
if (VAR4) {
VAR3 = FUN2(VAR2,
(long unsigned *) &VAR5.VAR11.VAR12);
}
if (VAR4 && !VAR3) {
return false;
}
VAR3 = FUN3(0, VAR4,
&VAR5.VAR11.VAR12,
VAR5.VAR11.VAR13);
if (!VAR3) {
return false;
}
break;
case 0:
if (!FUN4(VAR2, &VAR5.VAR14)) {
FUN5(""%VAR15\"", VAR2);
return false;
}
break;
case 1:
VAR5.VAR16 = VAR2;
break;
default:
return false;
}

return true;
}