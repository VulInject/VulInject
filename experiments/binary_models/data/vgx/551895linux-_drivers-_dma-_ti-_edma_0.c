static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
size_t VAR5)
{
const char VAR6[] = "";
struct resource VAR7;
void VAR8 *VAR9;
FUN2 (*VAR10)[2];
size_t VAR11 = VAR5 / sizeof(VAR12);
u32 VAR13, VAR14, VAR15;
int VAR16, VAR17;

VAR10 = FUN3(VAR2, VAR11 + 2, sizeof(VAR12), VAR18);
if (!VAR10)
return -VAR19;

VAR16 = FUN4(VAR2->VAR20, 1, &VAR7);
if (VAR16)
return -VAR19;

VAR9 = FUN5(VAR2, VAR7.VAR21, FUN6(&VAR7));
if (!VAR9)
return -VAR19;

VAR16 = FUN7(VAR2->VAR20, VAR6, (VAR22 *)VAR10,
VAR11);
if (VAR16)
return -VAR23;


VAR11 >>= 1;
VAR10[VAR11][0] = -1;
VAR10[VAR11][1] = -1;

for (VAR17 = 0; VAR17 < VAR11; VAR17++) {
VAR13 = (VAR10[VAR17][1] & 0x03) << 3;
VAR14 = VAR10[VAR17][1] & 0xfffffffc;
VAR15 = FUN8(VAR9 + VAR14);
VAR15 &= ~(0xff << VAR13);
VAR15 |= VAR10[VAR17][0] << VAR13;
FUN9(VAR15, (VAR9 + VAR14));
}

VAR4->VAR10 = (const FUN2 (*)[2]) VAR10;
return 0;
}