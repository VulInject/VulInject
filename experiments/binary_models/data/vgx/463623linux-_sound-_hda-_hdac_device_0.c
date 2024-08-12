int FUN1(struct VAR1 *VAR2, hda_nid_t VAR3,
VAR4 *VAR5, VAR6 *VAR7, unsigned int *VAR8)
{
unsigned int VAR9, VAR10, VAR11;

VAR11 = FUN2(VAR2, VAR3);
VAR10 = FUN3(VAR2, VAR3);

if (VAR5) {
u32 VAR12 = 0;
for (VAR9 = 0; VAR9 < VAR13; VAR9++) {
if (VAR10 & (1 << VAR9))
VAR12 |= VAR14[VAR9].VAR15;
}
if (VAR12 == 0) {
FUN4(&VAR2->VAR16,
"",
VAR3, VAR10,
(VAR11 & VAR17) ? 1 : 0);
return -VAR18;
}
*VAR5 = VAR12;
}

if (VAR7 || VAR8) {
u64 VAR19 = 0;
unsigned int VAR20, VAR21;

VAR20 = FUN5(VAR2, VAR3);
if (!VAR20)
return -VAR18;

VAR21 = 0;
if (VAR20 & VAR22) {
if (VAR10 & VAR23) {
VAR19 |= VAR24;
VAR21 = 8;
}
if (VAR10 & VAR25) {
VAR19 |= VAR26;
VAR21 = 16;
}
if (VAR11 & VAR27) {
if (VAR10 & VAR28)
VAR19 |= VAR29;
if (VAR10 & (VAR30|VAR31))
VAR19 |= VAR32;
if (VAR10 & VAR31)
VAR21 = 24;
else if (VAR10 & VAR30)
VAR21 = 20;
} else if (VAR10 & (VAR30|VAR31|
VAR28)) {
VAR19 |= VAR32;
if (VAR10 & VAR28)
VAR21 = 32;
else if (VAR10 & VAR31)
VAR21 = 24;
else if (VAR10 & VAR30)
VAR21 = 20;
}
}
if (VAR20 & VAR33) {
VAR19 |= VAR34;
if (!VAR21)
VAR21 = 32;
}
if (VAR20 == VAR35) {


VAR19 |= VAR24;
VAR21 = 8;
}
if (VAR19 == 0) {
FUN4(&VAR2->VAR16,
"",
VAR3, VAR10,
(VAR11 & VAR17) ? 1 : 0,
VAR20);
return -VAR18;
}
if (VAR7)
*VAR7 = VAR19;
if (VAR8)
*VAR8 = VAR21;
}

return 0;
}