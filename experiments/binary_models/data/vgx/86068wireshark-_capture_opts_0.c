static VAR1
FUN1(VAR2 *VAR3, const char *VAR4)
{
VAR5 *VAR6, *VAR7;

VAR7 = strchr(VAR4, '');
if (VAR7 == NULL)
return VAR8;

VAR6 = VAR7;
*VAR6++ = '';


while (FUN2(*VAR6))
VAR6++;
if (*VAR6 == '') {

*VAR7 = '';
return VAR8;
}
if (strcmp(VAR4,"") == 0) {
VAR3->VAR9 = VAR10;
VAR3->VAR11 = FUN3(VAR6,"");
} else if (strcmp(VAR4,"") == 0) {
VAR3->VAR12 = VAR10;
VAR3->VAR13 = FUN4(VAR6,"");
} else if (strcmp(VAR4,"") == 0) {
VAR3->VAR14 = VAR10;
VAR3->VAR15 = VAR10;
VAR3->VAR16 = FUN5(VAR6,"");
} else if (strcmp(VAR4,"") == 0) {
VAR3->VAR17 = VAR10;
VAR3->VAR18 = FUN5(VAR6,"");
} else {
return VAR8;
}
*VAR7 = ''; 
return VAR10;
}