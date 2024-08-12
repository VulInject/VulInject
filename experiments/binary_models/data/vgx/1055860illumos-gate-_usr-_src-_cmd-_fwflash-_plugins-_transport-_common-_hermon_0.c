static int
FUN1(VAR1 *VAR2, int VAR3)
{
hermon_flash_ioctl_t	VAR4;
int			VAR5;
int			VAR6;
int			VAR7;
uint32_t		VAR8;
uint32_t		VAR9;
VAR10			*VAR11;

FUN2(VAR12, "");

if (VAR3 == 0) {
FUN2(VAR13, FUN3(""
""));
return (VAR14);
}

VAR9 = FUN4(
FUN5(VAR15->VAR16[VAR17 / 4]));

VAR5 = VAR2->VAR18;
VAR8 = ((VAR3 - 1) << VAR2->VAR9);


VAR6 = FUN5(VAR15->VAR16[VAR19 / 4]);
FUN2(VAR12, "", VAR6);


VAR4.VAR20 = VAR21;
for (VAR7 = 0; VAR7 < VAR6; VAR7 += VAR5) {
VAR4.VAR22 =
FUN6(VAR9, VAR7, VAR3) / VAR5;
if (FUN7(VAR2, &VAR4) != 0) {
FUN2(VAR13, FUN3(""
""), VAR4.VAR22);
return (VAR14);
}
}

VAR11 = (VAR10 *)VAR15->VAR16;
VAR4.VAR20 = VAR23;


for (VAR7 = 16; VAR7 < VAR6; VAR7++) {
VAR4.VAR24 = VAR11[VAR7];
VAR4.VAR25 = FUN6(VAR9, VAR7, VAR3);
if (FUN8(VAR2, &VAR4) != 0) {
FUN2(VAR13, FUN3(""
""), VAR4.VAR24);
return (VAR14);
}

if (VAR7 && !(VAR7 % VAR2->VAR18)) {
(void) FUN9("");
(void) FUN10((void *)NULL);
}
}


for (VAR7 = 0; VAR7 < 16; VAR7++) {
VAR4.VAR24 = VAR11[VAR7];
VAR4.VAR25 = FUN6(VAR9, VAR7, VAR3);
if (FUN8(VAR2, &VAR4) != 0) {
FUN2(VAR13, FUN3(""
""),
VAR4.VAR24);
return (VAR14);
}
}


VAR26 = 0;
VAR4.VAR25 = VAR8;
if (FUN11(VAR2->VAR27, VAR28, &VAR4) != 0) {
FUN2(VAR29, FUN3(""
""), strerror(VAR26));
}

return (VAR30);
}