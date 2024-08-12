static int FUN1(char *VAR1, VAR2 *VAR3, int VAR4) {
int VAR5, VAR6 = -1;
char *VAR7, *VAR8 = strchr (VAR1, '');
if (VAR8) {
*VAR8++ = 0;
VAR6 ++;
for (VAR5 = 0; VAR5 < VAR4; VAR5++) {
VAR6 ++;
VAR7 = strchr (VAR8, '');
if (VAR7) {
*VAR7++ = 0;
}
VAR3[VAR5] = FUN2 (NULL, VAR8);
if (VAR7) {
VAR8 = VAR7;
} else {
break;
}
}
}
return VAR6;
}