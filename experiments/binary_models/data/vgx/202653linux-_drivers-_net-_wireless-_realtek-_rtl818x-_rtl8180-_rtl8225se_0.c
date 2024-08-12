static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
u8 VAR5, bool write)
{
struct VAR6 *VAR7 = VAR2->VAR7;
int VAR8;
u8 VAR9;

do {
for (VAR8 = 0; VAR8 < 5; VAR8++) {
VAR9 = FUN2(VAR7, VAR10);
if (!(VAR9 & 0x3))
break;
FUN3(10);
}
if (VAR8 == 5)
FUN4(VAR2->VAR11, VAR12
"", VAR9);

VAR9 = FUN2(VAR7, &VAR7->VAR13->VAR14) | 0x02;
FUN5(VAR7, &VAR7->VAR13->VAR14, VAR9);

VAR9 = FUN2(VAR7, FUN6(0x84)) & 0xF7;
FUN5(VAR7, FUN6(0x84), VAR9);
if (write) {
if (VAR5 == 16) {
FUN7(VAR7, VAR15,
*(VAR16 *)VAR4);
} else if (VAR5 == 64) {
FUN8(VAR7, VAR17,
*((VAR18 *)VAR4));
FUN8(VAR7, VAR19,
*((VAR18 *)(VAR4 + 4)));
} else
FUN4(VAR2->VAR11, VAR12
"");
} else {
FUN7(VAR7, VAR15, *(VAR16 *)VAR4);
}
if (write)
VAR9 = 2;
else
VAR9 = 1;
FUN5(VAR7, VAR10, VAR9);
for (VAR8 = 0; VAR8 < 5; VAR8++) {
VAR9 = FUN2(VAR7, VAR10);
if (!(VAR9 & 0x3))
break;
FUN3(10);
}
FUN5(VAR7, VAR10, 0);
if (!write) {
*((VAR16 *)VAR4) = FUN9(VAR7, VAR20);
*((VAR16 *)VAR4) &= 0x0FFF;
}
} while (0);
}