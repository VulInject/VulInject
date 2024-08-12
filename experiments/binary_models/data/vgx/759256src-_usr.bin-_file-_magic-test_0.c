static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const char	*VAR5, *VAR6, *VAR7, *VAR8;
size_t		 VAR9, VAR10, VAR11;
uint64_t	 VAR12;
int		 VAR13, VAR14, VAR15 = 0, VAR16 = 0, VAR17 = 0;

VAR5 = &VAR2->VAR18[(sizeof "") - 1];
if (*VAR5 != '') {
if (*VAR5 != '')
return (-1);
VAR5++;

VAR6 = FUN2(VAR5, &VAR12);
if (VAR6 == NULL || (*VAR6 != '' && *VAR6 != ''))
return (-1);

if (*VAR6 == '') {
for (VAR5 = VAR6 + 1; *VAR5 != ''; VAR5++) {
switch (*VAR5) {
case '':
case '':
VAR17 = 1;
break;
case '':
case '':
VAR16 = 1;
break;
case '':
VAR15 = 1;
break;
case '':
break;
default:
return (-1);
}
}
}
} else
VAR12 = VAR19;
if (VAR12 > (VAR20)VAR4->VAR9 - VAR4->VAR21)
VAR12 = VAR4->VAR9 - VAR4->VAR21;
VAR9 = VAR2->VAR22;


VAR10 = VAR12 + VAR9;
if (VAR10 > VAR4->VAR9 - VAR4->VAR21) {
if (VAR9 > VAR4->VAR9 - VAR4->VAR21)
VAR10 = 0;
else
VAR10 = VAR4->VAR9 - VAR4->VAR21 - VAR9;
}


VAR7 = VAR4->VAR23 + VAR4->VAR21;
if (VAR10 == 0)
VAR8 = NULL;
else if (VAR2->VAR24 == '')
VAR8 = VAR7;
else if (VAR12 == 1) {
VAR14 = FUN3(VAR7, VAR4->VAR9 - VAR4->VAR21, VAR2->VAR25,
VAR9, VAR15, VAR16, VAR17);
if (VAR14 == -1 && VAR2->VAR24 == '')
VAR8 = VAR7;
else if (VAR14 == 1 && VAR2->VAR24 == '')
VAR8 = VAR7;
else if (VAR14 == 0 && VAR2->VAR24 == '')
VAR8 = VAR7;
else
VAR8 = NULL;
} else {
if (VAR2->VAR24 != '')
return (-2);
for (VAR11 = 0; VAR11 < VAR10; VAR11++) {
VAR14 = FUN3(VAR7 + VAR11, VAR4->VAR9 - VAR4->VAR21 - VAR11,
VAR2->VAR25, VAR9, VAR15, VAR16, VAR17);
if (VAR14 == 0) {
VAR8 = VAR7 + VAR11;
break;
}
}
if (VAR11 == VAR10)
VAR8 = NULL;
}
VAR13 = (VAR8 != NULL);

if (VAR13 == !VAR2->VAR26) {
if (VAR2->VAR13 != NULL)
FUN4(VAR4, VAR2, VAR8, VAR4->VAR9 - VAR4->VAR21);
if (VAR13 && VAR8 != NULL && VAR2->VAR24 == '')
VAR4->VAR21 = (VAR8 + VAR9) - VAR4->VAR23;
}
return (VAR13);
}