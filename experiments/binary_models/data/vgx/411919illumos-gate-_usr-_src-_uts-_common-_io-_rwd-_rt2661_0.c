static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
struct VAR13 *VAR14;
struct VAR15 *VAR16;

int VAR17, VAR18, VAR19;
int VAR20, VAR21;
VAR3 *VAR22, *VAR23;
uint16_t VAR24;
uint32_t VAR25 = 0;

FUN2(&VAR6->VAR26);
VAR8 = &VAR6->VAR27[0];
VAR17 = VAR28;

if (VAR8->VAR29 > VAR30 - 8) {
VAR6->VAR31 = 1;
VAR6->VAR32++;
VAR17 = VAR33;
goto VAR34;
}

VAR22 = FUN3(FUN4(VAR4) + 32, VAR35);
if (VAR22 == NULL) {
FUN5(VAR36, ""
"");
VAR17 = VAR37;
goto VAR34;
}

for (VAR18 = 0, VAR23 = VAR4; VAR23 != NULL; VAR23 = VAR23->VAR38) {
VAR20 = FUN6(VAR23);
(void) bcopy(VAR23->VAR39, VAR22->VAR39 + VAR18, VAR20);
VAR18 += VAR20;
}
VAR22->VAR40 += VAR18;

VAR14 = (struct VAR13 *)VAR22->VAR39;
VAR16 = FUN7(VAR2, VAR14->VAR41);
if (VAR16 == NULL) {
VAR17 = VAR37;
VAR6->VAR42++;
goto VAR43;
}

(void) FUN8(VAR2, VAR22, VAR16);

if (VAR14->VAR44[1] & VAR45) {
struct VAR46 *VAR47;
VAR47 = FUN9(VAR2, VAR22);
if (VAR47 == NULL) {
VAR6->VAR42++;
VAR17 = VAR37;
goto VAR48;
}

VAR14 = (struct VAR13 *)VAR22->VAR39;
}

VAR21 = FUN4(VAR22);

VAR10 = &VAR8->VAR10[VAR8->VAR49];
VAR12 = &VAR8->VAR12[VAR8->VAR49];
VAR12->VAR16 = FUN10(VAR16);


if (FUN11(VAR14->VAR41)) {

VAR19 = VAR16->VAR50.VAR51[0];
} else if (VAR2->VAR52 != VAR53) {
VAR19 = VAR2->VAR54[VAR2->VAR55].
VAR51[VAR2->VAR52];
} else
VAR19 = VAR16->VAR50.VAR51[VAR16->VAR56];
if (VAR19 == 0)
VAR19 = 2;	
VAR19 &= VAR57;

if (!FUN11(VAR14->VAR41)) {
VAR25 |= VAR58;

VAR24 = FUN12(VAR59,
FUN13(VAR2, VAR19), VAR2->VAR60) + VAR6->VAR61;
*(VAR62 *)VAR14->VAR63 = FUN14(VAR24);
}

bcopy(VAR22->VAR39, VAR12->VAR64, VAR21);
FUN15(VAR6, VAR10, VAR25, 0, VAR21, VAR19, 0);

(void) FUN16(VAR12->VAR65.VAR66,
0, VAR21,
VAR67);

(void) FUN16(VAR8->VAR68.VAR66,
VAR8->VAR49 * VAR69,
VAR69,
VAR67);

FUN5(VAR36, ""
"",
VAR21, VAR8->VAR49, VAR19);


VAR8->VAR29++;
VAR8->VAR49 = (VAR8->VAR49 + 1) % VAR30;
FUN17(VAR6, VAR70, 1 << 0);

VAR2->VAR71.VAR72++;
VAR2->VAR71.VAR73 += VAR21;
VAR48:
FUN18(VAR16);
VAR43:
FUN19(VAR22);
VAR34:
if (VAR17 == VAR28)
FUN19(VAR4);
FUN20(&VAR6->VAR26);
return (VAR17);
}