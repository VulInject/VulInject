static int FUN1(struct VAR1 *VAR2, unsigned int argc, char **argv)
{
struct VAR3 *VAR4;
struct dm_verity_sig_opts VAR5 = {0};
struct dm_arg_set VAR6;
unsigned int VAR7;
unsigned long long VAR8;
int VAR9;
int VAR10;
sector_t VAR11;
char VAR12;
char *VAR13;

VAR4 = FUN2(sizeof(struct VAR3), VAR14);
if (!VAR4) {
VAR2->VAR15 = "";
return -VAR16;
}
VAR2->private = VAR4;
VAR4->VAR2 = VAR2;

VAR9 = FUN3(VAR4);
if (VAR9)
goto VAR17;

if ((FUN4(VAR2->VAR18) & ~VAR19)) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}

if (argc < 10) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}


if (argc > 10) {
VAR6.argc = argc - 10;
VAR6.argv = argv + 10;
VAR9 = FUN5(&VAR6, VAR4, &VAR5, true);
if (VAR9 < 0)
goto VAR17;
}

if (sscanf(argv[0], "", &VAR7, &VAR12) != 1 ||
VAR7 > 1) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR21 = VAR7;

VAR9 = FUN6(VAR2, argv[1], VAR19, &VAR4->VAR22);
if (VAR9) {
VAR2->VAR15 = "";
goto VAR17;
}

VAR9 = FUN6(VAR2, argv[2], VAR19, &VAR4->VAR23);
if (VAR9) {
VAR2->VAR15 = "";
goto VAR17;
}

if (sscanf(argv[3], "", &VAR7, &VAR12) != 1 ||
!VAR7 || (VAR7 & (VAR7 - 1)) ||
VAR7 < FUN7(VAR4->VAR22->VAR24) ||
VAR7 > VAR25) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR26 = FUN8(VAR7);

if (sscanf(argv[4], "", &VAR7, &VAR12) != 1 ||
!VAR7 || (VAR7 & (VAR7 - 1)) ||
VAR7 < FUN7(VAR4->VAR23->VAR24) ||
VAR7 > VAR27) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR28 = FUN8(VAR7);

if (sscanf(argv[5], "", &VAR8, &VAR12) != 1 ||
(VAR29)(VAR8 << (VAR4->VAR26 - VAR30))
>> (VAR4->VAR26 - VAR30) != VAR8) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR31 = VAR8;

if (VAR2->VAR32 > (VAR4->VAR31 << (VAR4->VAR26 - VAR30))) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}

if (sscanf(argv[6], "", &VAR8, &VAR12) != 1 ||
(VAR29)(VAR8 << (VAR4->VAR28 - VAR30))
>> (VAR4->VAR28 - VAR30) != VAR8) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR33 = VAR8;

VAR4->VAR34 = FUN9(argv[7], VAR14);
if (!VAR4->VAR34) {
VAR2->VAR15 = "";
VAR9 = -VAR16;
goto VAR17;
}

VAR4->VAR35 = FUN10(VAR4->VAR34, 0,
VAR4->VAR36 ? VAR37 : 0);
if (FUN11(VAR4->VAR35)) {
VAR2->VAR15 = "";
VAR9 = FUN12(VAR4->VAR35);
VAR4->VAR35 = NULL;
goto VAR17;
}


FUN13(""%VAR38\"", VAR4->VAR34,
FUN14(VAR4->VAR35)->VAR39.VAR40);

VAR4->VAR41 = FUN15(VAR4->VAR35);
if ((1 << VAR4->VAR28) < VAR4->VAR41 * 2) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR4->VAR42 = sizeof(struct VAR43) +
FUN16(VAR4->VAR35);

VAR4->VAR44 = FUN17(VAR4->VAR41, VAR14);
if (!VAR4->VAR44) {
VAR2->VAR15 = "";
VAR9 = -VAR16;
goto VAR17;
}
if (strlen(argv[8]) != VAR4->VAR41 * 2 ||
FUN18(VAR4->VAR44, argv[8], VAR4->VAR41)) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
VAR13 = argv[8];

if (strcmp(argv[9], "")) {
VAR4->VAR45 = strlen(argv[9]) / 2;
VAR4->VAR46 = FUN17(VAR4->VAR45, VAR14);
if (!VAR4->VAR46) {
VAR2->VAR15 = "";
VAR9 = -VAR16;
goto VAR17;
}
if (strlen(argv[9]) != VAR4->VAR45 * 2 ||
FUN18(VAR4->VAR46, argv[9], VAR4->VAR45)) {
VAR2->VAR15 = "";
VAR9 = -VAR20;
goto VAR17;
}
}

argv += 10;
argc -= 10;


if (argc) {
VAR6.argc = argc;
VAR6.argv = argv;
VAR9 = FUN5(&VAR6, VAR4, &VAR5, false);
if (VAR9 < 0)
goto VAR17;
}


VAR9 = FUN19(VAR13,
strlen(VAR13),
VAR5.VAR47,
VAR5.VAR48);
if (VAR9 < 0) {
VAR2->VAR15 = "";
goto VAR17;
}
VAR4->VAR49 =
FUN20((1 << VAR4->VAR28) / VAR4->VAR41);

VAR4->VAR50 = 0;
if (VAR4->VAR31)
while (VAR4->VAR49 * VAR4->VAR50 < 64 &&
(unsigned long long)(VAR4->VAR31 - 1) >>
(VAR4->VAR49 * VAR4->VAR50))
VAR4->VAR50++;

if (VAR4->VAR50 > VAR51) {
VAR2->VAR15 = "";
VAR9 = -VAR52;
goto VAR17;
}

VAR11 = VAR4->VAR33;
for (VAR10 = VAR4->VAR50 - 1; VAR10 >= 0; VAR10--) {
sector_t VAR38;

VAR4->VAR53[VAR10] = VAR11;
VAR38 = (VAR4->VAR31 + ((VAR29)1 << ((VAR10 + 1) * VAR4->VAR49)) - 1)
>> ((VAR10 + 1) * VAR4->VAR49);
if (VAR11 + VAR38 < VAR11) {
VAR2->VAR15 = "";
VAR9 = -VAR52;
goto VAR17;
}
VAR11 += VAR38;
}
VAR4->VAR54 = VAR11;

VAR4->VAR55 = FUN21(VAR4->VAR23->VAR24,
1 << VAR4->VAR28, 1, sizeof(struct VAR56),
VAR57, NULL,
VAR4->VAR36 ? VAR58 : 0);
if (FUN11(VAR4->VAR55)) {
VAR2->VAR15 = "";
VAR9 = FUN12(VAR4->VAR55);
VAR4->VAR55 = NULL;
goto VAR17;
}

if (FUN22(VAR4->VAR55) < VAR4->VAR54) {
VAR2->VAR15 = "";
VAR9 = -VAR52;
goto VAR17;
}


VAR4->VAR59 = FUN23("", VAR60 | VAR61, 0);
if (!VAR4->VAR59) {
VAR2->VAR15 = "";
VAR9 = -VAR16;
goto VAR17;
}

VAR2->VAR62 = sizeof(struct VAR63) +
VAR4->VAR42 + VAR4->VAR41 * 2;

VAR9 = FUN24(VAR4);
if (VAR9)
goto VAR17;

VAR2->VAR62 = FUN25(VAR2->VAR62,
FUN26(struct VAR63));

FUN27(&VAR5);

return 0;

VAR17:

FUN27(&VAR5);
FUN28(VAR2);

return VAR9;
}