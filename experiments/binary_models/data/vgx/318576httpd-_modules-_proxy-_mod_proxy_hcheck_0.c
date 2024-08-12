static int FUN1(VAR1 *VAR2)
{
char VAR3[VAR4];
int VAR5;
const char *VAR6;

VAR5 = FUN2(VAR3, sizeof(VAR3), VAR2, 1);
if (VAR5 <= 0) {
return !VAR7;
}
FUN3(VAR8, VAR9, 0, VAR2->VAR10, FUN4(03254)
"", VAR5, VAR3);

if (FUN5(VAR3, "")) {
int VAR11;
char VAR12;
int VAR13 = VAR7;
const char *VAR14 = NULL;

VAR11 = VAR3[5] - '';
if ((VAR11 != 1) || (VAR5 >= sizeof(VAR3)-1)) {
return !VAR7;
}

VAR12 = VAR3[12];
VAR3[12] = '';
VAR13 = FUN6(&VAR3[9]);
if (VAR12 != '') {
VAR3[12] = VAR12;
} else {
VAR3[12] = '';
VAR3[13] = '';
}
VAR14 = FUN7(VAR2->VAR15, &VAR3[9]);
VAR2->VAR16 = VAR13;
VAR2->VAR17 = VAR14;
} else {
return !VAR7;
}


while ((VAR5 = FUN2(VAR3, sizeof(VAR3), VAR2, 1)) > 0) {
char *VAR18, *VAR19;
FUN3(VAR8, VAR20, 0, VAR2->VAR10, "",
VAR5, VAR3);
if (!(VAR18 = strchr(VAR3, ''))) {
return !VAR7;
}
*VAR18 = '';
++VAR18;
while (FUN8(*VAR18))
++VAR18;            
for (VAR19 = &VAR18[strlen(VAR18)-1]; VAR19 > VAR18 && FUN8(*VAR19); --VAR19)
*VAR19 = '';
FUN9(VAR2->VAR21, VAR3, VAR18);
}


if ((VAR6 = FUN10(VAR2->VAR21, "")) != NULL)
FUN11(VAR2, VAR6);

return VAR7;
}