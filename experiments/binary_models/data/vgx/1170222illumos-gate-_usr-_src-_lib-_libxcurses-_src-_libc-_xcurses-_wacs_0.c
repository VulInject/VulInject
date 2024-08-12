const VAR1 *VAR2 = (const VAR1 *) &VAR3;
const VAR1 *VAR4 = (const VAR1 *) &VAR5;
const VAR1 *VAR6 = (const VAR1 *) &VAR7;


static unsigned char VAR8[] =
"";

int
FUN1(chtype VAR9, VAR1 *VAR10)
{
int VAR11, VAR12;
unsigned char *VAR13;


if (VAR14 < (VAR15 & VAR9) || FUN2(VAR9, VAR10) == VAR16)
return -1;

if (!(VAR9 & VAR17))
return 0;


if (VAR18 == (char *) 0) {

VAR13 = VAR8;
VAR9 &= ~VAR17;
} else {
VAR13 = (unsigned char *) VAR18;
}


for (VAR11 = 0; VAR13[VAR11] != ''; VAR11 += 2) {
if (VAR13[VAR11] == (VAR9 & VAR15)) {
(void) FUN2(
(VAR19) ((VAR9 & VAR20) | VAR13[VAR11+1]), VAR10
);
break;
}
}

return 0;
}