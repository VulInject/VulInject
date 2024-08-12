int
FUN1(VAR1 *VAR2, int VAR3,
char *VAR4, int VAR5, VAR6 *VAR7)
{
uint32_t VAR8 = 0;
char *VAR9;
int VAR10, VAR11;

if (VAR3 < 0)
return (1);

if (VAR5) {
for (VAR10 = 0, VAR9 = VAR4; VAR10 != VAR3 && VAR9 &&
*VAR9; VAR10++, VAR9++) {
if (*VAR9 == VAR2[VAR10].VAR12) {
VAR8 |= VAR2[VAR10].VAR13;
} else if (*VAR9 != '') {
return (1);
}
}
} else {  
for (VAR9 = VAR4; VAR9 && *VAR9; VAR9++) {
for (VAR11 = 0, VAR10 = 0; VAR10 != VAR3; VAR10++) {
if (*VAR9 == VAR2[VAR10].VAR12) {
VAR8 |= VAR2[VAR10].VAR13;
VAR11 = 1;
break;
}
}
if (VAR11 == 0)
return (1);
}
}

*VAR7 = VAR8;
return (0);
}