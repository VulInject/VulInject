static int
FUN1(int VAR1, char *VAR2[], char *VAR3, int VAR4, int VAR5, char *VAR6)
{
register char		*VAR7,
*VAR8;

register int		VAR9	= 0;
enum VAR10 {VAR11, VAR12, VAR13} VAR14;
VAR15 = 0;
while (FUN2(VAR3, VAR4, VAR1) != NULL) {
VAR3[strlen(VAR3) - 1] = 0;
VAR7 = VAR3 + strspn(VAR3, "");
if (*VAR7 && *VAR7 != '') {
for (VAR14 = VAR11, VAR2[VAR9++] = VAR8 = VAR7; *VAR7; ) {
switch (VAR14) {
case VAR11: 
if (*VAR7 == '') {
VAR14 = VAR13;
VAR7++;
break;
}
VAR14 = VAR12;


case VAR12: 
if (*VAR7 == '') {
if (
VAR7[1] == ''
|| strchr(VAR6, VAR7[1])
)
VAR7++;
*VAR8++ = *VAR7++;
} else if (strchr(VAR6, *VAR7)) {
*VAR8++ = 0;
VAR7++;
if (VAR9 < VAR5) {
VAR2[VAR9++] = VAR8;
VAR14 = VAR11;
}
} else
*VAR8++ = *VAR7++;
break;

case VAR13: 
if (*VAR7 == '' && VAR7[1] == '') { 
VAR7++;
*VAR8++ = *VAR7++;
} else if (*VAR7 == '') { 
VAR7++;
VAR14 = VAR12; 
} else {
*VAR8++ = *VAR7++; 
}
break;
}
}
*VAR8 = 0;
while (VAR9 < VAR5)
VAR2[VAR9++] = "";
return (VAR9);
}
}
return (-1);
}