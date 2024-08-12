static void FUN1 (VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5, VAR6, VAR7 = 0;
uint32_t VAR8;

if (VAR3 == 0xe0) {
VAR2->VAR9 = 1;
return;
}

if(!(VAR2->VAR10 & VAR11)) 
return;

VAR6 = (VAR3 & 0x80) ? 1 : 0; 
VAR3 &= ~0x80; 
if (VAR2->VAR9) {
VAR3 |= 0x80;
VAR2->VAR9 = 0;
}

VAR4 = VAR2->VAR12[VAR3].VAR4;
VAR5 = VAR2->VAR12[VAR3].VAR13;
if (VAR4 == -1 || VAR5 == -1) {
return;
}

VAR8 = FUN2(VAR4, VAR5);
if (VAR6) {
if (VAR2->VAR14[VAR5 / 2] & VAR8) {
VAR2->VAR14[VAR5 / 2] &= ~VAR8;
VAR2->VAR15--;
VAR7 = 1;
}
} else {
if (!(VAR2->VAR14[VAR5 / 2] & VAR8)) {
VAR2->VAR14[VAR5 / 2] |= VAR8;
VAR2->VAR15++;
VAR7 = 1;
}
}
VAR2->VAR16 = ((VAR2->VAR15 & 0x1f) << 26) | (0xf << 4) | 0xf;
if (VAR2->VAR15 == 1) {
VAR2->VAR16 &= ~((0xf << 4) | 0xf);
if (VAR6) {
FUN3(VAR2, &VAR4, &VAR5);
}
VAR2->VAR16 |= ((VAR4 & 0xf) << 4) | (VAR5 & 0xf);
}

if (!(VAR2->VAR10 & (VAR17 | VAR18)))
VAR7 = 0;

if (VAR7 && (VAR2->VAR10 & VAR19)) {
VAR2->VAR10 |= VAR20;
FUN4(VAR2->VAR21);
}
}