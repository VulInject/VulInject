static VAR1
FUN1(const struct VAR2 *VAR3, int *VAR4)
{
size_t	VAR5;
u_char	VAR6, VAR7, VAR8;

VAR5 = 0;
if (VAR3->VAR9 & VAR10) {
VAR4[VAR5++] = 38;
VAR4[VAR5++] = 5;
VAR4[VAR5++] = VAR3->VAR9 & 0xff;
} else if (VAR3->VAR9 & VAR11) {
VAR4[VAR5++] = 38;
VAR4[VAR5++] = 2;
FUN2(VAR3->VAR9, &VAR6, &VAR7, &VAR8);
VAR4[VAR5++] = VAR6;
VAR4[VAR5++] = VAR7;
VAR4[VAR5++] = VAR8;
} else {
switch (VAR3->VAR9) {
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
VAR4[VAR5++] = VAR3->VAR9 + 30;
break;
case 8:
VAR4[VAR5++] = 39;
break;
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
VAR4[VAR5++] = VAR3->VAR9;
break;
}
}
return (VAR5);
}