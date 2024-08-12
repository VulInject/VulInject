static VAR1 *
FUN1(const char *VAR2, const char *VAR3, VAR1 *VAR4, int VAR5)
{
int	VAR6, VAR7, VAR8;

if (VAR4 == NULL || VAR2 == NULL || VAR2[0] == '')
return (NULL);
VAR6 = (VAR3[1] == '');
switch (VAR3[0]) {
case '':
VAR7 = (VAR6 ? VAR9 : VAR10) | VAR11 | VAR12;
break;
case '':
VAR7 = (VAR6 ? VAR9 : VAR10) | VAR12;
break;
case '':
VAR7 = VAR6 ? VAR9 : VAR13;
break;
default:
return (NULL);
}

if (VAR5) {
VAR8 = FUN2(VAR2, VAR7, 0666);	
} else {
VAR8 = open(VAR2, VAR7, 0666);
}
if (VAR8 < 0)
return (NULL);
VAR4->VAR14 = 0;
VAR4->VAR15 = VAR8;
if (VAR8 <= VAR16) {
FUN3(VAR4, VAR8);
} else if (FUN4(VAR4, VAR8, VAR3) != 0) {

(void) close(VAR8);
return (NULL);
}
VAR4->VAR17 = VAR6 ? VAR18 : (VAR3[0] == '') ? VAR19 : VAR20;
if (VAR3[0] == '')   {
if ((FUN5(VAR8, 0L, VAR21)) < 0)  {
(void) close(VAR8);
return (NULL);
}
}
VAR4->VAR22 = VAR4->VAR23 = NULL;

return (VAR4);
}