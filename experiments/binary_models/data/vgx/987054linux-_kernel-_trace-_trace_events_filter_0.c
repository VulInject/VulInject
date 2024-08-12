enum VAR1 FUN1(char *VAR2, int VAR3, char **VAR4, int *not)
{
int VAR5 = VAR6;
int VAR7;

if (VAR2[0] == '') {
*not = 1;
VAR2++;
VAR3--;
} else
*not = 0;

*VAR4 = VAR2;

if (FUN2(VAR2[0]))
return VAR8;

for (VAR7 = 0; VAR7 < VAR3; VAR7++) {
if (VAR2[VAR7] == '') {
if (!VAR7) {
VAR5 = VAR9;
} else if (VAR7 == VAR3 - 1) {
if (VAR5 == VAR9)
VAR5 = VAR10;
else
VAR5 = VAR11;
VAR2[VAR7] = 0;
break;
} else {	
return VAR12;
}
} else if (strchr("", VAR2[VAR7])) {
return VAR12;
}
}
if (VAR2[0] == '')
*VAR4 = VAR2 + 1;

return VAR5;
}