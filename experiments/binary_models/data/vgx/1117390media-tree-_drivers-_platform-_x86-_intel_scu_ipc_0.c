int FUN1(int VAR1, int VAR2, VAR3 *VAR4, int VAR5,
VAR6 *VAR7, int VAR8, u32 VAR9, u32 VAR10)
{
struct VAR11 *VAR12 = &VAR13;
int VAR14 = FUN2(VAR5, 4);
u32 VAR15[4];
int VAR16, VAR17;


if (VAR14 > 4)
return -VAR18;

FUN3(&VAR19);
if (VAR12->VAR20 == NULL) {
FUN4(&VAR19);
return -VAR21;
}

FUN5(VAR9, VAR12->VAR22 + VAR23);
FUN5(VAR10, VAR12->VAR22 + VAR24);


memcpy(VAR15, VAR4, VAR5);

for (VAR16 = 0; VAR16 < VAR14; VAR16++)
FUN6(VAR12, VAR15[VAR16], 4 * VAR16);

FUN7(VAR12, (VAR5 << 16) | (VAR2 << 12) | VAR1);
VAR17 = FUN8(VAR12);
if (!VAR17) {
for (VAR16 = 0; VAR16 < VAR8; VAR16++)
*VAR7++ = FUN9(VAR12, 4 * VAR16);
}

FUN4(&VAR19);
return VAR17;
}