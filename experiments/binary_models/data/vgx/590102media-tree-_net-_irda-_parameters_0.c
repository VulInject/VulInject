int FUN1(VAR1 *VAR2, char *VAR3, ...)
{
irda_pv_t VAR4;
va_list VAR5;
char *VAR6;
int VAR7 = 0;

FUN2(VAR5, VAR3);

for (VAR6 = VAR3; *VAR6 != ''; VAR6++) {
switch (*VAR6) {
case '':  
VAR2[VAR7++] = (VAR1)FUN3(VAR5, int);
break;
case '':  
VAR4.VAR8 = (VAR9)FUN3(VAR5, int);
FUN4((VAR9)VAR4.VAR8, (VAR9 *)(VAR2+VAR7)); VAR7+=2;
break;
case '':  
VAR4.VAR8 = FUN3(VAR5, VAR10);
FUN4(VAR4.VAR8, (VAR10 *)(VAR2+VAR7)); VAR7+=4;
break;
case '': 
VAR4.VAR11 = FUN3(VAR5, char *);
strcpy(VAR2+VAR7, VAR4.VAR11);
VAR7 += strlen(VAR4.VAR11) + 1;
break;
default:
FUN5(VAR5);
return -1;
}
}
FUN5(VAR5);

return 0;
}