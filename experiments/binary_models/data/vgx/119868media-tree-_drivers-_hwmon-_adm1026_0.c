static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;
int VAR6;





for (VAR5 = 0; VAR5 <= 16; ++VAR5) {
if (VAR7[VAR5] >= 0 && VAR7[VAR5] <= 16)
VAR4->VAR8[VAR7[VAR5]] |= 0x01;

if (VAR7[VAR5] >= 0 && VAR7[VAR5] <= 7)
VAR4->VAR9 |= 1 << VAR7[VAR5];
}


for (VAR5 = 0; VAR5 <= 16; ++VAR5) {
if (VAR10[VAR5] >= 0 && VAR10[VAR5] <= 16)
VAR4->VAR8[VAR10[VAR5]] &= ~0x01;

if (VAR10[VAR5] >= 0 && VAR10[VAR5] <= 7)
VAR4->VAR9 |= 1 << VAR10[VAR5];
}


for (VAR5 = 0; VAR5 <= 16; ++VAR5) {
if (VAR11[VAR5] >= 0 && VAR11[VAR5] <= 16)
VAR4->VAR8[VAR11[VAR5]] &= ~0x02;
}


for (VAR5 = 0; VAR5 <= 16; ++VAR5) {
if (VAR12[VAR5] >= 0 && VAR12[VAR5] <= 16)
VAR4->VAR8[VAR12[VAR5]] |= 0x02;
}


for (VAR5 = 0; VAR5 <= 7; ++VAR5) {
if (VAR13[VAR5] >= 0 && VAR13[VAR5] <= 7)
VAR4->VAR9 &= ~(1 << VAR13[VAR5]);
}


FUN3(VAR2, VAR14, VAR4->VAR9);
VAR4->VAR15 = (VAR4->VAR15 & 0x3f)
| ((VAR4->VAR8[16] & 0x03) << 6);
FUN3(VAR2, VAR16, VAR4->VAR15);
for (VAR5 = 15, VAR6 = 0; VAR5 >= 0; --VAR5) {
VAR6 <<= 2;
VAR6 |= VAR4->VAR8[VAR5] & 0x03;
if ((VAR5 & 0x03) == 0) {
FUN3(VAR2,
VAR17 + VAR5/4,
VAR6);
VAR6 = 0;
}
}


FUN4(VAR2);
}