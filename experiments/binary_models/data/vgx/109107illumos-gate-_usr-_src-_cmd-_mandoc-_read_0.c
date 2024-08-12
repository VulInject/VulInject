static void
FUN1(struct VAR1 *VAR2)
{
char		*VAR3, *VAR4;
int		 VAR5;



if ((VAR5 = FUN2(VAR2->VAR6)) == 0) {
VAR3 = VAR2->VAR7->VAR8;
VAR4 = VAR3 + VAR2->VAR7->VAR9;
while (VAR3 < VAR4) {
if (*VAR3 == '' || *VAR3 == ''') {
VAR3++;
if (VAR3[0] == '' && VAR3[1] == '') {
VAR5 = VAR10;
break;
}
if (VAR3[0] == '' && VAR3[1] == '') {
VAR5 = VAR11;
break;
}
}
VAR3 = memchr(VAR3, '', VAR4 - VAR3);
if (VAR3 == NULL)
break;
VAR3++;
}
}

if (VAR5 == VAR10) {
VAR2->VAR12->VAR13.VAR14 = VAR15;
if (VAR2->VAR12->VAR16 == NULL)
VAR2->VAR12->VAR16 = FUN3(VAR17, VAR18);
} else {
VAR2->VAR12->VAR13.VAR14 = VAR19;
if (VAR2->VAR12->VAR20 == NULL)
VAR2->VAR12->VAR20 = FUN3(VAR21, VAR22);
}
VAR2->VAR12->VAR13.VAR23->VAR24 = VAR25;
}