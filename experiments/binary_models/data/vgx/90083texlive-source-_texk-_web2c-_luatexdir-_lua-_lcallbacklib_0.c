int FUN1(int VAR1, const char *VAR2, va_list VAR3)
{
int VAR4;
size_t VAR5;
int VAR6, VAR7;
const char *VAR8;
VAR9 *VAR10;
char VAR11;
int *VAR12;
char *VAR13 = NULL;
int VAR14 = 0;
if (VAR1 == 2) {         
FUN2(VAR15, 1, "");
FUN3(VAR15, -2);
}
VAR13 = strchr(VAR2, '');
FUN2(VAR15, (int) (VAR13 - VAR2 + 1), "");
VAR13 = NULL;
for (VAR6 = 0; *VAR2; VAR6++) {
switch (*VAR2++) {
case VAR16: 
VAR11 = (char) FUN4(VAR3, int);
FUN5(VAR15, &VAR11, 1);
break;
case VAR17:  
VAR8 = FUN4(VAR3, char *);
FUN6(VAR15, VAR8);
break;
case VAR18:  
VAR10 = FUN4(VAR3, VAR9 *);
FUN5(VAR15, (const char *)VAR10->VAR8, VAR10->VAR19);
break;
case VAR20: 
FUN7(VAR15, FUN4(VAR3, int));
break;
case VAR21: 
FUN8(VAR15, FUN4(VAR3, double));
break;
case VAR22:       
VAR8 = FUN9(FUN4(VAR3, int), &VAR5);
FUN5(VAR15, VAR8, VAR5);
break;
case VAR23: 
FUN10(VAR15, FUN4(VAR3, int));
break;
case VAR24:    
FUN5(VAR15, (char *) (VAR25 + VAR26), (VAR27) FUN4(VAR3, int));
break;
case VAR28:
FUN11(VAR15, FUN4(VAR3, int));
break;
case VAR29:
FUN12(VAR15, FUN4(VAR3, int));
break;
case '':
VAR6--;
break;
case '':
goto VAR30;
default:
;
}
}
VAR30:
VAR7 = (int) strlen(VAR2);
if (VAR1 == 1) {
VAR7++;
}
if (VAR1 == 2) {
VAR6++;
}
{
int VAR31;
VAR32++;
VAR31 = FUN13(VAR15, VAR6, VAR7, 0);
VAR32--;

if (VAR31 != 0) {

if (!VAR33) {
fprintf(VAR34, "", FUN14(VAR15, -1));
FUN15();
} else {
FUN16(VAR15, VAR35, 0);
FUN17(VAR15, (VAR31 == VAR36 ? 0 : 1));
}
return 0;
}
}
if (VAR7 == 0) {
return 1;
}
VAR7 = -VAR7;
while (*VAR2) {
int VAR37, VAR38;
double VAR39;
halfword VAR40;
VAR38 = FUN18(VAR15, VAR7);
switch (*VAR2++) {
case VAR23:
if (VAR38 == VAR41) {
VAR37 = 0;
} else if (VAR38 != VAR42) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
} else {
VAR37 = FUN20(VAR15, VAR7);
}
*FUN4(VAR3, VAR44 *) = (VAR44) VAR37;
break;
case VAR20:
if (VAR38 != VAR45) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
VAR37 = FUN21(VAR15, VAR7);
*FUN4(VAR3, int *) = VAR37;
break;
case VAR21:
if (VAR38 != VAR45) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
VAR39 = FUN22(VAR15, VAR7);
*FUN4(VAR3, double *) = VAR39;
break;
case VAR24:    
if (VAR38 == VAR41) {
VAR12 = 0;
goto VAR43;
} else if (VAR38 == VAR46) {
VAR8 = FUN23(VAR15, VAR7, &VAR5);
if (VAR8 == NULL) {    
VAR12 = 0;
} else if (VAR5 == 0) {
VAR12 = 0;
} else {
VAR12 = FUN4(VAR3, int *);
VAR4 = *VAR12;
FUN24(VAR4 + (int) VAR5);
strncpy((char *) (VAR25 + VAR4), VAR8, VAR5);
*VAR12 += (int) VAR5;

while ((*VAR12) - 1 > VAR4 && VAR25[(*VAR12) - 1] == '')
(*VAR12)--;
}
} else {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
break;
case VAR22:       
if (VAR38 != VAR46) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
VAR8 = FUN23(VAR15, VAR7, &VAR5);
if (VAR8 == NULL)      
*FUN4(VAR3, int *) = 0;
else {
*FUN4(VAR3, int *) = FUN25(VAR8, VAR5);
}
break;
case VAR17:  
if (VAR38 != VAR46) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
VAR8 = FUN23(VAR15, VAR7, &VAR5);
if (VAR8 == NULL)      
*FUN4(VAR3, int *) = 0;
else {
VAR13 = xmalloc((unsigned) (VAR5 + 1));
(void) memcpy(VAR13, VAR8, (VAR5 + 1));
*FUN4(VAR3, char **) = VAR13;
}
break;
case VAR47:  
if (VAR38 == VAR41) {
*FUN4(VAR3, int *) = 0;
} else if (VAR38 == VAR42) {
VAR37 = FUN20(VAR15, VAR7);
if (VAR37 == 0) {
*FUN4(VAR3, int *) = 0;
} else {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
} else if (VAR38 != VAR46) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
} else {
VAR8 = FUN23(VAR15, VAR7, &VAR5);
if (VAR8 == NULL)      
*FUN4(VAR3, int *) = 0;
else {
VAR13 = xmalloc((unsigned) (VAR5 + 1));
(void) memcpy(VAR13, VAR8, (VAR5 + 1));
*FUN4(VAR3, char **) = VAR13;
}
}
break;
case VAR18:  
if (VAR38 != VAR46) {
fprintf(VAR34, "", FUN19(VAR15, VAR38));
goto VAR43;
}
VAR8 = FUN23(VAR15, VAR7, &VAR5);
if (VAR8 == NULL)      
*FUN4(VAR3, int *) = 0;
else {
VAR9 *VAR4 = xmalloc(sizeof(VAR9));
VAR4->VAR8 = xmalloc((unsigned) (VAR5 + 1));
(void) memcpy(VAR4->VAR8, VAR8, (VAR5 + 1));
VAR4->VAR19 = VAR5;
*FUN4(VAR3, VAR9 **) = VAR4;
}
break;
case VAR28:
if (VAR38 == VAR41) {
VAR40 = VAR48;
} else {
VAR40 = *FUN26(VAR15,VAR7);
}
*FUN4(VAR3, int *) = VAR40;
break;
default:
fprintf(VAR49, "");
goto VAR43;
}
VAR7++;
}
VAR14 = 1;
VAR43:
return VAR14;
}