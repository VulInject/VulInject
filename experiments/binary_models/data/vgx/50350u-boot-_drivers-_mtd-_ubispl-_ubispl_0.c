static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
int VAR5)
{
struct VAR6 *VAR7, *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13, VAR14, VAR15, VAR16 = 0;
size_t VAR17;
__be32 VAR18, VAR19;
unsigned long long VAR20 = 0;

VAR7 = &VAR2->VAR21;
VAR12 = &VAR2->VAR22;

VAR16 = FUN2(VAR2, VAR7, VAR5, VAR2->VAR23, sizeof(*VAR7));
if (VAR16 && VAR16 != VAR24)
goto VAR25;
else if (VAR16 == VAR24)
VAR12->VAR26[0] = 1;

if (FUN3(VAR7->VAR27) != VAR28) {
FUN4("",
FUN3(VAR7->VAR27), VAR28);
VAR16 = VAR29;
goto VAR25;
}

if (VAR7->VAR30 != VAR31) {
FUN4("",
VAR7->VAR30, VAR31);
VAR16 = VAR29;
goto VAR25;
}

VAR14 = FUN3(VAR7->VAR14);
if (VAR14 > VAR32 || VAR14 < 1) {
FUN4("", VAR14);
VAR16 = VAR29;
goto VAR25;
}

VAR17 = VAR2->VAR33 * VAR14;
if (VAR17 != VAR2->VAR17) {
FUN4("", VAR17,
VAR2->VAR17);
VAR16 = VAR29;
goto VAR25;
}

VAR10 = &VAR2->VAR34;

for (VAR13 = 0; VAR13 < VAR14; VAR13++) {
VAR15 = FUN3(VAR7->VAR35[VAR13]);

if (FUN5(VAR2, VAR15)) {
VAR16 = VAR29;
goto VAR36;
}

int VAR37;
VAR16 = FUN6(VAR2, VAR15, VAR38, 0);
if (VAR16 && VAR16 != VAR24) {
FUN4("",
VAR13, VAR15);
if (VAR16 > 0)
VAR16 = VAR29;
goto VAR36;
} else if (VAR16 == VAR24)
VAR12->VAR26[VAR13] = 1;

VAR37 = FUN3(VAR38->VAR37);
if (!VAR2->VAR37)
VAR2->VAR37 = VAR37;

if (VAR37 && (VAR37 != VAR2->VAR37)) {
FUN4("",
FUN3(VAR38->VAR37), VAR2->VAR37);
VAR16 = VAR29;
goto VAR36;
}
VAR16 = FUN7(VAR2, VAR15, VAR10, 0);
if (VAR16 && VAR16 != VAR24) {
FUN4("",
VAR13, VAR15);
goto VAR36;
}


if (VAR15 == VAR5)
memcpy(VAR10, VAR2->VAR39 + VAR15, sizeof(*VAR12));

if (VAR13 == 0) {
if (FUN3(VAR10->VAR40) != VAR41) {
FUN4("" \
"",
FUN3(VAR10->VAR40),
VAR41);
VAR16 = VAR29;
goto VAR36;
}
} else {
if (FUN3(VAR10->VAR40) != VAR42) {
FUN4("" \
"",
FUN3(VAR10->VAR40),
VAR42);
VAR16 = VAR29;
goto VAR36;
}
}

if (VAR20 < FUN8(VAR10->VAR20))
VAR20 = FUN8(VAR10->VAR20);

VAR16 = FUN2(VAR2, VAR2->VAR43 + (VAR2->VAR33 * VAR13), VAR15,
VAR2->VAR23, VAR2->VAR33);
if (VAR16 && VAR16 != VAR24) {
FUN4("" \
"", VAR13, VAR15, VAR16);
goto VAR36;
}
}

VAR8 = (struct VAR6 *)(VAR2->VAR43);
VAR19 = FUN3(VAR8->VAR44);
VAR8->VAR44 = 0;
VAR18 = FUN9(VAR45, VAR2->VAR43, VAR17);
if (VAR18 != VAR19) {
FUN4("");
FUN4("", VAR19, VAR18);
VAR16 = VAR29;
goto VAR36;
}

VAR8->VAR20 = VAR20;

VAR12->VAR14 = VAR14;

VAR16 = FUN10(VAR2, VAR4, VAR12);
if (VAR16) {
if (VAR16 > 0)
VAR16 = VAR29;
goto VAR36;
}

VAR2->VAR12 = VAR12;
VAR2->VAR46.VAR47 = VAR2->VAR12->VAR48;
VAR2->VAR49.VAR47 = VAR2->VAR12->VAR50;
FUN11("",
VAR2->VAR51, VAR2->VAR52);
FUN12("", VAR2->VAR46.VAR47);
FUN12("", VAR2->VAR49.VAR47);

VAR53:
if (VAR16)
FUN4("");
return VAR16;

VAR36:
VAR25:
goto VAR53;
}