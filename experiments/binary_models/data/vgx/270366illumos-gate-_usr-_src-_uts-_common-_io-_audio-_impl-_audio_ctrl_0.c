VAR1 *
FUN1(VAR2 *VAR3, VAR4 *VAR5,
audio_ctrl_rd_t VAR6, audio_ctrl_wr_t VAR7, void *VAR8)
{
VAR1 *VAR9;
VAR4 *VAR10;
char	VAR11[16];
const char	*VAR12;


FUN2(VAR3);
FUN2(VAR5);


if ((VAR12 = VAR5->VAR13) == NULL) {
return (NULL);
}


VAR9 = FUN3(VAR3, VAR12);

if (VAR9 == NULL) {

VAR9 = FUN4(sizeof (*VAR9), VAR14);
} else {

switch (VAR5->VAR15) {
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
break;
default:
FUN5(VAR3, ""
"", VAR5->VAR15, VAR5->VAR13);
return (NULL);
}


FUN6(&VAR3->VAR21);
FUN7(&VAR3->VAR22, VAR9);
FUN8(&VAR3->VAR21);

FUN9(VAR9);
VAR9->VAR23 = NULL;
VAR9->VAR24 = NULL;
VAR9->VAR25 = NULL;
VAR9->VAR26 = NULL;
}
VAR10 = &VAR9->VAR27;


VAR10->VAR15 = VAR5->VAR15;
VAR10->VAR28 = VAR5->VAR28;
VAR10->VAR29 = VAR5->VAR29;
VAR10->VAR30 = VAR5->VAR30;
VAR10->VAR13 = strdup(VAR12);


switch (VAR5->VAR15) {
case VAR16:
case VAR17:
case VAR18:
case VAR19:
break;

case VAR20:
for (int VAR31 = 0; VAR31 < 64; VAR31++) {
if (((1U << VAR31) & VAR5->VAR29) == 0)
continue;
VAR12 = VAR5->VAR32[VAR31];
if (VAR12 == NULL) {
(void) snprintf(VAR11, sizeof (VAR11),
"", VAR31);
VAR12 = VAR11;
}
VAR10->VAR32[VAR31] = strdup(VAR12);
}
break;
default:
FUN5(VAR3, "",
VAR5->VAR15, VAR5->VAR13);
goto VAR33;
}

VAR9->VAR26 = VAR3;
if (VAR10->VAR28 & VAR34) {
FUN2(VAR6);
VAR9->VAR23 = VAR6;
VAR9->VAR25 = VAR8;
}
if (VAR10->VAR28 & VAR35) {
FUN2(VAR7);
VAR9->VAR24 = VAR7;
VAR9->VAR25 = VAR8;
}

FUN6(&VAR3->VAR21);
FUN10(&VAR3->VAR22, VAR9);
FUN8(&VAR3->VAR21);

return (VAR9);


VAR33:
if (VAR9) {
FUN9(VAR9);
FUN11(VAR9, sizeof (*VAR9));
}
return (NULL);
}