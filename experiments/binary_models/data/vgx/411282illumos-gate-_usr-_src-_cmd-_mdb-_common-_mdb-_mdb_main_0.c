static void
FUN1(int VAR1, VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
static const struct rlimit VAR7 = {
(VAR8)VAR9, (VAR8)VAR9
};

const VAR10 *VAR11 = NULL;

if (VAR12.VAR13 != NULL && VAR12.VAR13->VAR14 != NULL)
VAR11 = VAR12.VAR13->VAR14->VAR15;

if (VAR3 != NULL)
bcopy(VAR3, &VAR16, sizeof (VAR16));
if (VAR5 != NULL)
bcopy(VAR5, &VAR17, sizeof (VAR17));

VAR16.VAR18 = VAR1;
(void) FUN2(VAR1, VAR19, NULL);


if (VAR11 == NULL || VAR11->VAR20 == NULL ||
VAR11->VAR20 == &VAR12.VAR21 || VAR11->VAR20->VAR22 == NULL)
goto VAR23;

if (VAR12.VAR24 != NULL) {
struct VAR25 *VAR26 = (struct VAR25 *)
(VAR5->VAR27.VAR28[VAR29] + VAR30);

char VAR31[VAR32];
int VAR33 = 1;
char VAR34;

if (FUN3(VAR1, VAR31) == -1) {
FUN4(VAR12.VAR35,
"",
VAR12.VAR36, VAR1);
} else {
FUN4(VAR12.VAR35,
"",
VAR12.VAR36, VAR31);
}

if (VAR5->VAR27.VAR28[VAR37] != 0)
FUN5(VAR5->VAR27.VAR28[VAR37], VAR33++);

while (VAR26 != NULL && FUN6(VAR26) && VAR26->VAR38 != 0) {
FUN5(VAR26->VAR38, VAR33++);
VAR26 = (struct VAR25 *)
((VAR39)VAR26->VAR40 + VAR30);
}

VAR41:
FUN4(VAR12.VAR35, ""
"", VAR12.VAR36);

FUN7(VAR12.VAR35);

for (;;) {
if (FUN8(VAR12.VAR24, &VAR34, sizeof (VAR34)) != sizeof (VAR34))
goto VAR23;

switch (VAR34) {
case '':
case '':
(void) FUN9(VAR42, &VAR7);
FUN4(VAR12.VAR35, ""
"", VAR12.VAR36);
goto VAR23;

case '':
case '':
FUN10(VAR12.VAR43);
FUN11(VAR12.VAR35);
(void) FUN12();
FUN13(1);


case '':
case '':
FUN4(VAR12.VAR35, ""
"", VAR12.VAR36,
VAR11->VAR20->VAR44);

(void) FUN14(
VAR11->VAR20->VAR44, 0);

(void) FUN2(VAR1,
VAR45, NULL);

VAR46++;
VAR12.VAR47 = 0;
VAR12.VAR48 = 0;

(void) FUN12();
FUN15(VAR12.VAR13->VAR49, VAR50);


case '':
case '':
FUN4(VAR12.VAR35, ""
"",
VAR12.VAR36, (int)FUN16());


(void) FUN17(VAR51);
(void) FUN12();
goto VAR41;
}
}
}

VAR23:
if (FUN18(VAR3)) {
(void) FUN19(VAR1);
(void) FUN17(VAR1);
}

(void) FUN20(&VAR5->VAR52);
(void) FUN21(&VAR5->VAR52, VAR1);

if (VAR53 == NULL)
VAR53 = "";

VAR5->VAR54 |= VAR55;
(void) FUN22(VAR5);
}