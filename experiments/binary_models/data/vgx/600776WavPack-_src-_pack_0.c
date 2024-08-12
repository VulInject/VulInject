static void FUN1 (VAR1 *VAR2, VAR3 *VAR4, int32_t VAR5)
{
uint32_t VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = ~0;
int VAR10 = 0;
VAR3 *VAR11, VAR12;

VAR2->VAR13 = VAR2->VAR14 = VAR2->VAR15 = VAR2->VAR16 = 0;

for (VAR11 = VAR4, VAR12 = VAR5; VAR12--; VAR11++) {
VAR6 |= (*VAR11 < 0) ? ~*VAR11 : *VAR11;
VAR8 |= *VAR11 ^ -(*VAR11 & 1);
VAR9 &= *VAR11;
VAR7 |= *VAR11;

if ((VAR7 & 1) && !(VAR9 & 1) && (VAR8 & 2))
return;
}

VAR2->VAR17.VAR18 &= ~VAR19;

while (VAR6) {
VAR2->VAR17.VAR18 += 1 << VAR20;
VAR6 >>= 1;
}

if (!(VAR2->VAR17.VAR18 & VAR19))
return;

if (!(VAR7 & 1))
while (!(VAR7 & 1)) {
VAR2->VAR17.VAR18 -= 1 << VAR20;
VAR2->VAR14++;
VAR10++;
VAR7 >>= 1;
}
else if (VAR9 & 1)
while (VAR9 & 1) {
VAR2->VAR17.VAR18 -= 1 << VAR20;
VAR2->VAR15++;
VAR10++;
VAR9 >>= 1;
}
else if (!(VAR8 & 2))
while (!(VAR8 & 2)) {
VAR2->VAR17.VAR18 -= 1 << VAR20;
VAR2->VAR16++;
VAR10++;
VAR8 >>= 1;
}

if (VAR10) {
VAR2->VAR17.VAR18 |= VAR21;

for (VAR11 = VAR4, VAR12 = VAR5; VAR12--; VAR11++)
*VAR11 >>= VAR10;
}
}