static int FUN1(int VAR1, char VAR2[], char *VAR3, size_t VAR4)
{
char		VAR5[3];
unsigned long	VAR6;	
int		VAR7;		
unsigned long	VAR8, VAR9;	

fprintf(VAR10, "", VAR2, VAR1);
if (VAR4 < 2) {
VAR11 = VAR12;
return(0);
}

if (VAR1 == 1) {
VAR5[0] = VAR2[0] & VAR13;
VAR5[1] = VAR2[1] & VAR13;
} else {
VAR5[0] = VAR2[2] & VAR13;
VAR5[1] = VAR2[3] & VAR13;
}
VAR6 = (VAR5[0] << 8) + VAR5[1];
fprintf(VAR10, "", VAR6);

switch (VAR1) {
case 1:
VAR7 = FUN2(VAR6, VAR14, VAR15);
if (VAR7 >= 0)
VAR8 = VAR14[VAR7].VAR16;
break;
case 2:
VAR7 = FUN2(VAR6, VAR17, VAR18);
if (VAR7 >= 0)
VAR8 = VAR17[VAR7].VAR16;
break;
case 3:
VAR7 = FUN2(VAR6, VAR19, VAR20);
if (VAR7 >= 0)
VAR8 = VAR19[VAR7].VAR16;
break;
default:
VAR7 = -1;	
break;
}

fprintf(VAR10, "", VAR7, VAR8);

if (VAR7 < 0) {	
*VAR3 = *(VAR3+1) = VAR21;
} else {
VAR9 = VAR8 & 0xffff;
*VAR3 = (char) ((VAR9 & 0xff00) >> 8);
*(VAR3+1) = (char) (VAR9 & 0xff);
}

fprintf(VAR10, "", *VAR3, *(VAR3+1));

return(2);
}