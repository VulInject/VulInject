static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR6 = NULL;
struct VAR7 *VAR8 = NULL;
struct VAR9 *VAR10 = NULL;
struct VAR11 *VAR12;
struct VAR13 *VAR14;
struct VAR15 *VAR16;
int VAR17, VAR18;

VAR18 = VAR5->VAR18 + VAR19;
if (VAR5->VAR20) {
VAR18 += 4;
if (VAR5->VAR20 > 1)
VAR18 += 4;
}

if (VAR5->VAR21)
VAR18 += sizeof(struct VAR9);
else
VAR18 += sizeof(struct VAR7);

if (VAR5->VAR22 && (VAR5->VAR22 > VAR18))
VAR18 = VAR5->VAR22;

VAR6 = FUN2(VAR3->VAR23, VAR18);
if (!VAR6)
return NULL;

FUN3(VAR6->VAR24);

if (VAR5->VAR20 > 1)
VAR14 = FUN4(VAR6, VAR25 + 8);
else if (VAR5->VAR20)
VAR14 = FUN4(VAR6, VAR25 + 4);
else if (VAR5->VAR26)
VAR14 = FUN4(VAR6, VAR25 - 6);
else
VAR14 = FUN4(VAR6, VAR25);
FUN5(VAR6);

FUN6(VAR6, VAR6->VAR27);
VAR16 = FUN7(VAR6, sizeof(*VAR16));

FUN8(VAR6, VAR6->VAR27);
if (VAR5->VAR21)
VAR10 = FUN7(VAR6, sizeof(*VAR10));
else
VAR8 = FUN7(VAR6, sizeof(*VAR8));

if (!VAR5->VAR26)
FUN9(VAR14->VAR28);
FUN9(VAR14->VAR29);
if (VAR5->VAR30 && !VAR5->VAR26)
FUN10(VAR14->VAR28, VAR5->VAR30);
if (VAR5->VAR31)
FUN10(VAR14->VAR29, VAR5->VAR31);

if (!VAR5->VAR26) {
VAR14->VAR32 = FUN11(VAR33);
} else {
VAR34 *VAR35 = (VAR34 *)VAR14;


VAR35[3] = FUN11(VAR33);
}

if (VAR5->VAR20) {
VAR34 *VAR36, *VAR37;

if (!VAR5->VAR26) {
VAR36 = (void *)VAR14 + VAR25;
VAR37 = (void *)VAR14 + (2 * VAR38);
} else {
VAR36 = (void *)VAR14 + VAR25 - 6;
VAR37 = (void *)VAR14 + VAR38;
}

VAR37[0] = FUN11(VAR39);
VAR36[0] = FUN11(VAR5->VAR40);
VAR36[1] = FUN11(VAR33);
if (VAR5->VAR20 > 1) {
VAR37[0] = FUN11(VAR41);
VAR36[1] = FUN11(VAR39);
VAR36[2] = FUN11(VAR5->VAR42);
VAR36[3] = FUN11(VAR33);
}
}

if (VAR5->VAR21) {
VAR10->VAR43 = FUN11(VAR5->VAR44);
VAR10->VAR45 = FUN11(VAR5->VAR46);
VAR10->VAR47 = sizeof(struct VAR9) / 4;
VAR10->VAR48 = 0;
} else {
VAR8->VAR43 = FUN11(VAR5->VAR44);
VAR8->VAR45 = FUN11(VAR5->VAR46);
VAR8->VAR27 = FUN11(sizeof(*VAR12) + sizeof(*VAR8) + VAR5->VAR18);
if (VAR5->VAR22)
VAR8->VAR27 = FUN11(VAR5->VAR22 -
(sizeof(*VAR16) + sizeof(*VAR14)));
VAR8->VAR48 = 0;
}

VAR16->VAR49 = 5;
VAR16->VAR50 = 32;
VAR16->VAR51 = 4;
if (VAR5->VAR21)
VAR16->VAR52 = VAR53;
else
VAR16->VAR52 = VAR54;
VAR17 = sizeof(*VAR16) + sizeof(*VAR12) + VAR5->VAR18;
if (VAR5->VAR21)
VAR17 += sizeof(*VAR10);
else
VAR17 += sizeof(*VAR8);

if (VAR5->VAR22)
VAR17 = VAR5->VAR22 - sizeof(*VAR14);

VAR16->VAR55 = FUN11(VAR17);
VAR16->VAR56 = 0;
VAR16->VAR57 = FUN12(VAR5->VAR58);
VAR16->VAR59 = FUN12(VAR5->VAR60);
VAR16->VAR61 = 0;
VAR16->VAR62 = 0;
FUN13(VAR16);

VAR12 = FUN7(VAR6, sizeof(*VAR12));
VAR12->VAR51 = 0;
VAR12->VAR63 = FUN14(VAR64);
VAR5->VAR62 = VAR65;
VAR12->VAR62 = VAR65++;

if (VAR5->VAR18)
FUN7(VAR6, VAR5->VAR18);
if (VAR5->VAR22 && (VAR5->VAR22 > VAR6->VAR27))
FUN7(VAR6, VAR5->VAR22 - VAR6->VAR27);

VAR6->VAR66 = 0;
VAR6->VAR67 = VAR68;
if (VAR5->VAR21) {
VAR10->VAR48 = ~FUN15(VAR6->VAR27, VAR16->VAR57, VAR16->VAR59, 0);
VAR6->VAR69 = FUN16(VAR6) - VAR6->VAR70;
VAR6->VAR71 = FUN17(struct VAR9, VAR48);
} else {
FUN18(VAR6, VAR16->VAR57, VAR16->VAR59);
}

VAR6->VAR52 = FUN11(VAR33);
VAR6->VAR72 = VAR73;
VAR6->VAR23 = VAR3->VAR23;

if (VAR5->VAR74)
VAR6->VAR75 = FUN19(VAR5->VAR74);

return VAR6;
}