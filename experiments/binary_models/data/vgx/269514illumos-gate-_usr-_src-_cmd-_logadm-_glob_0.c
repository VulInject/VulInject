struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = FUN2(NULL);
struct VAR1 *VAR5;
struct VAR2 *VAR6;
char *VAR7 = FUN3(FUN4(VAR3));
char *VAR8 = VAR7;
char *VAR9;
int VAR10;
char *VAR11;
char VAR12[VAR13];



if (*VAR8 == '') {
FUN5(VAR4, "");
while (*VAR8 == '')
VAR8++;
} else
FUN5(VAR4, "");


do {
if ((VAR9 = strchr(VAR8, '')) != NULL) {
*VAR9++ = '';

while (*VAR9 == '')
VAR9++;
}


if (VAR8[0] == '' && VAR8[1] == '')
VAR10 = 0;
else
VAR10 = 1;


if ((VAR11 = FUN6("", VAR8, "", (char *)0)) == NULL)
FUN7(VAR14|VAR15, "", VAR8);


VAR5 = FUN2(NULL);
FUN8(VAR4);
while ((VAR6 = FUN9(VAR4)) != NULL) {
VAR16 *VAR17;
struct VAR18 *VAR19;


if ((VAR17 = FUN10(FUN4(VAR6))) == NULL)
continue;

while ((VAR19 = FUN11(VAR17)) != NULL) {
if (VAR10 && VAR19->VAR20[0] == '')
continue;
*VAR12 = '';
if (FUN12(VAR11, VAR19->VAR20, VAR12)) {
struct VAR2 *VAR21 = FUN13(VAR6);
struct stat VAR22;
int VAR23;

FUN14(VAR21, VAR19->VAR20);

if (FUN15(FUN4(VAR21), &VAR22) < 0) {
FUN16(VAR21);
continue;
}


if (VAR9 &&
(VAR22.VAR24 & VAR25) !=
VAR26) {
FUN16(VAR21);
continue;
}



if (*VAR12)
VAR23 = FUN17(VAR12);
else
VAR23 = -1;
FUN18(VAR21, VAR23);
FUN19(VAR21, &VAR22);

if (VAR9)
FUN20(VAR21, '');

FUN21(VAR5, VAR21);
}
}
(void) FUN22(VAR17);
}
FUN23(VAR4);
VAR4 = VAR5;
VAR8 = VAR9;
} while (VAR9);

FUN24(VAR7);

return (VAR4);
}