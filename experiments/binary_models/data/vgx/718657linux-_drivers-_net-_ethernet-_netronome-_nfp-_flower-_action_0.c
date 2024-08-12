static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR5 *VAR6,
struct VAR7 *VAR8,
bool VAR9, struct VAR10 *VAR11,
enum nfp_flower_tun_type VAR12, int *VAR13,
bool VAR14, struct VAR15 *VAR16)
{
size_t VAR17 = sizeof(struct VAR3);
struct VAR18 *VAR19 = VAR2->VAR19;
struct VAR10 *VAR20;
u16 VAR21;

VAR4->VAR22.VAR23 = VAR24;
VAR4->VAR22.VAR25 = VAR17 >> VAR26;

VAR20 = VAR6->VAR27;
if (!VAR20) {
FUN2(VAR16, "");
return -VAR28;
}

VAR21 = VAR9 ? VAR29 : 0;

if (VAR12) {

if (!FUN3(VAR20, VAR12)) {
FUN2(VAR16, "");
return -VAR28;
}

if (*VAR13) {
FUN2(VAR16, "");
return -VAR28;
}
(*VAR13)++;

VAR4->VAR30 = FUN4(VAR21 |
VAR31);
VAR4->VAR32 = FUN5(VAR33 | VAR12);
} else if (FUN6(VAR20) &&
VAR19->VAR34 & VAR35) {
int VAR36;

VAR4->VAR30 = FUN4(VAR21);
VAR36 = FUN7(VAR2, VAR20);
if (VAR36 < 0) {
FUN2(VAR16, "");
return VAR36;
}
VAR4->VAR32 = FUN5(VAR37 | VAR36);
} else if (FUN8(VAR2, VAR20)) {
if (!(VAR19->VAR38 & VAR39) &&
!(VAR19->VAR38 & VAR40)) {
FUN2(VAR16, "");
return -VAR28;
}

if (VAR8->VAR41.VAR27 || !VAR14) {
FUN2(VAR16, "");
return -VAR28;
}

VAR8->VAR41.VAR27 = VAR20;

return 0;
} else {

VAR4->VAR30 = FUN4(VAR21);

if (FUN9(VAR11)) {

if (!FUN10(VAR11, VAR20)) {
FUN2(VAR16, "");
return -VAR28;
}
}

if (!FUN9(VAR20)) {
FUN2(VAR16, "");
return -VAR28;
}

VAR4->VAR32 = FUN5(FUN11(VAR20));
if (!VAR4->VAR32) {
FUN2(VAR16, "");
return -VAR28;
}
}
VAR8->VAR42.VAR43 = VAR4->VAR32;

return 0;
}