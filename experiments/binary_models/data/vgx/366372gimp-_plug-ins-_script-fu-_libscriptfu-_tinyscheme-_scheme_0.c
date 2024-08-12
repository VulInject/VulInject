static void FUN1(VAR1 *VAR2, pointer VAR3, int VAR4, char **VAR5, int *VAR6) {
char *VAR7;

if (VAR3 == VAR2->VAR8) {
VAR7 = "";
} else if (VAR3 == VAR2->VAR9) {
VAR7 = "";
} else if (VAR3 == VAR2->VAR10) {
VAR7 = "";
} else if (VAR3 == VAR2->VAR11) {
VAR7 = "";
} else if (FUN2(VAR3)) {
VAR7 = "";
} else if (FUN3(VAR3)) {
VAR7 = VAR2->VAR12;
if (VAR4 <= 1 || VAR4 == 10)  {
if(FUN4(VAR3)) {
snprintf(VAR7, VAR13, "", FUN5(VAR3));
} else {
snprintf(VAR7, VAR13, "", FUN6(VAR3));

VAR4 = strcspn(VAR7, "");
if (VAR7[VAR4] == 0) {
VAR7[VAR4] = ''; 
VAR7[VAR4+1] = '';
VAR7[VAR4+2] = 0;
}
}
} else {
long VAR14 = FUN7(VAR3);
if (VAR4 == 16) {
if (VAR14 >= 0)
snprintf(VAR7, VAR13, "", VAR14);
else
snprintf(VAR7, VAR13, "", -VAR14);
} else if (VAR4 == 8) {
if (VAR14 >= 0)
snprintf(VAR7, VAR13, "", VAR14);
else
snprintf(VAR7, VAR13, "", -VAR14);
} else if (VAR4 == 2) {
unsigned long VAR15 = (VAR14 < 0) ? -VAR14 : VAR14;
VAR7 = &VAR7[VAR13-1];
*VAR7 = 0;
do { *--VAR7 = (VAR15&1) ? '' : ''; VAR15 >>= 1; } while (VAR15 != 0);
if (VAR14 < 0) *--VAR7 = '';
}
}
} else if (FUN8(VAR3)) {
if (!VAR4) {
VAR7 = FUN9(VAR3);
} else { 
*VAR5=VAR2->VAR12;
*VAR6=0;
FUN10(VAR2, FUN9(VAR3),
FUN11(FUN9(VAR3), -1));
return;
}
}
else if (FUN12 (VAR3))
{
guint8 VAR15 = FUN13 (VAR3);
VAR7        = VAR2->VAR12;
if (! VAR4)
{
VAR7[0]  = VAR15;
VAR7[1]  = 0;
*VAR5   = VAR7;
*VAR6 = 1;
return;
}
else
{
snprintf (VAR7, VAR13, "", FUN5 (VAR3));
}
} else if (FUN14(VAR3)) {
gunichar VAR16=FUN15(VAR3);
VAR7 = VAR2->VAR12;
if (!VAR4) {
int VAR17 = FUN16(VAR16, VAR7);
VAR7[VAR17]=0;
} else {
switch(VAR16) {
case '':
VAR7 = "";
break;
case '':
VAR7 = "";
break;
case '':
VAR7 = "";
break;
case '':
VAR7 = "";
break;
default:
if(VAR16==127) {
VAR7 = "";
break;
} else if(VAR16<32) {
snprintf(VAR7,VAR13, "", VAR18[VAR16]);
break;
}
if(VAR16<32) {
snprintf(VAR7,VAR13,"",VAR16);
break;
}
snprintf(VAR7,VAR13,"",VAR16);
break;
}
}
} else if (FUN17(VAR3)) {
VAR7 = FUN18(VAR3);
} else if (FUN19(VAR3)) {
VAR7 = VAR2->VAR12;
snprintf(VAR7,VAR13,"",
FUN20(VAR3),FUN21(VAR3));
} else if (FUN22(VAR3)) {
VAR7 = "";
} else if (FUN23(VAR3)) {
VAR7 = "";
} else if (FUN24(VAR3)) {
VAR7 = "";
} else if (FUN25(VAR3)) {
VAR7 = VAR2->VAR12;
snprintf(VAR7,VAR13,"", FUN21(VAR3));
} else if (FUN26(VAR3)) {
VAR7 = "";
} else {
VAR7 = "";
}
*VAR5=VAR7;
*VAR6 = strlen (VAR7);
}