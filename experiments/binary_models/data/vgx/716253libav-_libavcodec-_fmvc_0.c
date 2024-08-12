static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
unsigned VAR5, VAR6;
int VAR7 = 0;
int VAR8, VAR9;

while (FUN2(VAR2) > 0) {
GetByteContext VAR10;

while (FUN2(VAR2) > 0) {
while (FUN2(VAR2) > 0) {
VAR5 = FUN3(VAR2);
VAR7 = VAR5 >= 0x20;
if (VAR7)
break;
if (VAR5)
break;
VAR5 = FUN3(VAR2);
if (VAR5 < 0xF8) {
VAR5 += 32;
break;
}
VAR8 = VAR5 - 0xF8;
if (VAR8) {
VAR6 = 256;
do {
VAR6 *= 2;
--VAR8;
} while (VAR8);
} else {
VAR6 = 280;
}
do {
FUN4(VAR4, FUN5(VAR2));
FUN4(VAR4, FUN5(VAR2));
VAR6 -= 8;
} while (VAR6 && FUN2(VAR2) > 0);
}

if (!VAR7) {
do {
FUN6(VAR4, FUN3(VAR2));
--VAR5;
} while (VAR5 && FUN2(VAR2) > 0);

while (FUN2(VAR2) > 0) {
GetByteContext VAR10;

VAR5 = FUN3(VAR2);
if (VAR5 >= 0x20)
break;
FUN7(&VAR10, VAR4->VAR11, VAR4->VAR12 - VAR4->VAR11);

VAR9 = -(VAR5 | 32 * FUN3(VAR2)) - 1;
FUN8(&VAR10, FUN9(VAR4) + VAR9, VAR13);
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(VAR2));
}
}
VAR7 = 0;
if (VAR5 < 0x40)
break;
FUN7(&VAR10, VAR4->VAR11, VAR4->VAR12 - VAR4->VAR11);
VAR9 = (-((VAR5 & 0x1F) | 32 * FUN3(VAR2)) - 1);
FUN8(&VAR10, FUN9(VAR4) + VAR9, VAR13);
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(&VAR10));
VAR6 = (VAR5 >> 5) - 1;
do {
FUN6(VAR4, FUN3(&VAR10));
--VAR6;
} while (VAR6 && FUN2(&VAR10) > 0);
}
VAR6 = VAR5 & 0x1F;
if (!VAR6) {
if (!FUN10(VAR2)) {
do {
FUN11(VAR2, 1);
VAR6 += 255;
} while (!FUN10(VAR2) && FUN2(VAR2) > 0);
}
VAR6 += FUN3(VAR2) + 31;
}
VAR9 = -FUN3(VAR2);
FUN7(&VAR10, VAR4->VAR11, VAR4->VAR12 - VAR4->VAR11);
FUN8(&VAR10, FUN9(VAR4) + VAR9 - (FUN3(VAR2) << 8), VAR13);
if (FUN9(VAR4) == FUN12(&VAR10))
break;
if (VAR6 < 5 || FUN9(VAR4) - FUN12(&VAR10) < 4) {
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(&VAR10));
FUN6(VAR4, FUN3(&VAR10));
} else {
FUN4(VAR4, FUN5(&VAR10));
VAR6--;
}
do {
FUN6(VAR4, FUN3(&VAR10));
VAR6--;
} while (VAR6 && FUN2(&VAR10) > 0);
}

return 0;
}