static void *FUN1(const VAR1 *VAR2, size_t VAR3,
VAR4 *VAR5, u16 VAR6, u16 VAR7)
{
struct nvram_parser VAR8;
u32 VAR9;
u32 VAR10;
__le32 VAR11;

if (FUN2(&VAR8, VAR2, VAR3) < 0)
return NULL;

while (VAR8.VAR12 < VAR3) {
VAR8.VAR13 = VAR14[VAR8.VAR13](&VAR8);
if (VAR8.VAR13 == VAR15)
break;
}
if (VAR8.VAR16) {
VAR8.VAR17 = false;
FUN3(&VAR8, VAR6, VAR7);
} else if (VAR8.VAR18) {
VAR8.VAR17 = false;
FUN4(&VAR8, VAR6, VAR7);
}

if (VAR8.VAR19 == 0) {
FUN5(VAR8.VAR20);
return NULL;
}

FUN6(&VAR8);

VAR9 = VAR8.VAR19;
*VAR5 = FUN7(VAR8.VAR19 + 1, 4);
while (VAR9 != *VAR5) {
VAR8.VAR20[VAR9] = 0;
VAR9++;
}

VAR10 = *VAR5 / 4;
VAR10 = (~VAR10 << 16) | (VAR10 & 0x0000FFFF);
VAR11 = FUN8(VAR10);

memcpy(&VAR8.VAR20[*VAR5], &VAR11, sizeof(VAR11));
*VAR5 += sizeof(VAR11);

return VAR8.VAR20;
}