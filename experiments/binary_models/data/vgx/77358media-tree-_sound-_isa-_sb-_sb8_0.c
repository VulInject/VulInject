static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
int VAR12;

VAR12 = FUN2(VAR2, VAR13[VAR3], VAR14[VAR3], VAR15,
sizeof(struct VAR8), &VAR7);
if (VAR12 < 0)
return VAR12;
VAR9 = VAR7->VAR16;
VAR7->VAR17 = VAR18;


VAR9->VAR19 = FUN3(0x388, 4, "");

if (VAR20[VAR3] != VAR21) {
if ((VAR12 = FUN4(VAR7, VAR20[VAR3], VAR22[VAR3],
VAR23,
VAR24[VAR3],
-1,
VAR25,
&VAR5)) < 0)
goto VAR26;
} else {

static unsigned long VAR27[] = {
0x220, 0x240, 0x260,
};
int VAR28;
for (VAR28 = 0; VAR28 < FUN5(VAR27); VAR28++) {
VAR12 = FUN4(VAR7, VAR27[VAR28],
VAR22[VAR3],
VAR23,
VAR24[VAR3],
-1,
VAR25,
&VAR5);
if (VAR12 >= 0) {
VAR20[VAR3] = VAR27[VAR28];
break;
}
}
if (VAR28 >= FUN5(VAR27)) {
VAR12 = -VAR29;
goto VAR26;
}
}
VAR9->VAR5 = VAR5;

if (VAR5->VAR30 >= VAR31) {
if (VAR5->VAR30 == VAR32)
FUN6(VAR33 "",
VAR20[VAR3]);
else
FUN6(VAR33 "",
VAR20[VAR3]);
VAR12 = -VAR34;
goto VAR26;
}

if ((VAR12 = FUN7(VAR5, 0)) < 0)
goto VAR26;

if ((VAR12 = FUN8(VAR5)) < 0)
goto VAR26;

if (VAR5->VAR30 == VAR35 || VAR5->VAR30 == VAR36) {
if ((VAR12 = FUN9(VAR7, VAR5->VAR20 + 8, 0,
VAR37, 1,
&VAR11)) < 0) {
FUN6(VAR33 "", VAR5->VAR20 + 8);
}
} else {
if ((VAR12 = FUN9(VAR7, VAR5->VAR20, VAR5->VAR20 + 2,
VAR37, 1,
&VAR11)) < 0) {
FUN6(VAR33 "",
VAR5->VAR20, VAR5->VAR20 + 2);
}
}
if (VAR12 >= 0) {
if ((VAR12 = FUN10(VAR11, 0, 1, NULL)) < 0)
goto VAR26;
}

if ((VAR12 = FUN11(VAR5, 0)) < 0)
goto VAR26;

strcpy(VAR7->VAR38, VAR5->VAR30 == VAR39 ? "" : "");
strcpy(VAR7->VAR40, VAR5->VAR41);
sprintf(VAR7->VAR42, "",
VAR5->VAR41,
VAR5->VAR20,
VAR22[VAR3], VAR24[VAR3]);

if ((VAR12 = FUN12(VAR7)) < 0)
goto VAR26;

FUN13(VAR2, VAR7);
return 0;

VAR26:
FUN14(VAR7);
return VAR12;
}