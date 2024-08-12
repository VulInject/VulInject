static int
FUN1(void)
{
int VAR1, VAR2, VAR3 = 0;
VAR4 *VAR5;
sysevent_id_t VAR6;
struct VAR7 *VAR8, *VAR9;
struct VAR10 *VAR11, *VAR12;
struct VAR13 *VAR14;


if (FUN2(&VAR15) != 0) {
FUN3(2, "");
(void) FUN4(&VAR16);
(void) FUN4(&VAR17);
return (0);
}

FUN3(3, "", VAR18);
VAR6.VAR19 = FUN5(VAR20[VAR18]);
FUN6(VAR20[VAR18], &VAR6.VAR21);
FUN3(3, "", VAR6.VAR19);


VAR8 = (struct VAR7 *)
malloc(sizeof (struct VAR7));
if (VAR8 == NULL) {
(void) FUN7(&VAR15);
FUN3(1, ""
"", VAR6.VAR19);
return (VAR22);
}
VAR8->VAR23 = NULL;
VAR8->VAR24 = NULL;
(void) FUN8(&VAR8->VAR25, 0, VAR26, NULL);

VAR1 = FUN9(VAR20[VAR18]);
VAR5 = calloc(1, VAR1);
if (VAR5 == NULL) {
free(VAR8);
(void) FUN7(&VAR15);
FUN3(1, ""
"", VAR6.VAR19);
return (VAR22);
}



if (VAR1 > VAR27) {
int VAR28 = 0;


(void) FUN4(&VAR16);

for (VAR2 = 0; VAR2 < VAR29; ++VAR2) {
if ((VAR28 = FUN10(VAR30,
(VAR31)VAR32,
(VAR31)&VAR6,
(VAR31)VAR1,
(VAR31)VAR5, 0))
== 0)
break;
else
(void) sleep(1);
}
if (VAR28) {
FUN3(1, "",
VAR6.VAR21, VAR6.VAR19);
free(VAR5);
free(VAR8);
(void) FUN7(&VAR15);
return (VAR22);
}
} else {
(void) bcopy(VAR20[VAR18], VAR5, VAR1);

(void) FUN4(&VAR16);
}



for (VAR2 = 0; VAR2 < VAR33; ++VAR2) {


if (!FUN11(VAR34[VAR2]) ||
FUN12(VAR34[VAR2]))
continue;


VAR11 = (struct VAR10 *)malloc(
sizeof (struct VAR10));
if (VAR11 == NULL) {
FUN3(1, ""
"", VAR6.VAR19, VAR2);
continue;
}
VAR11->VAR24 = NULL;


VAR14 = FUN13(VAR34[VAR2],
VAR5, &VAR8->VAR25);
if (VAR14 == NULL) {
FUN3(1, ""
"",
VAR6.VAR19, VAR2);
free(VAR11);
continue;
}
VAR11->VAR14 = VAR14;
++VAR3;

if (VAR8->VAR23 == NULL) {
VAR8->VAR23 = VAR11;
VAR12 = VAR11;
} else {
VAR12->VAR24 = VAR11;
VAR12 = VAR12->VAR24;
}
}

VAR8->VAR3 = VAR3;
VAR8->VAR35 = VAR5;

(void) FUN14(&VAR36);

if (VAR37 == NULL) {
FUN3(3, ""
"", VAR6.VAR19);
VAR37 = VAR8;
(void) FUN15(&VAR38);
} else {


VAR9 = VAR37;
while (VAR9->VAR24 != NULL)
VAR9 = VAR9->VAR24;
VAR9->VAR24 = VAR8;
FUN3(3, ""
"", VAR6.VAR19);
}
(void) FUN16(&VAR36);
(void) FUN7(&VAR15);

return (0);
}