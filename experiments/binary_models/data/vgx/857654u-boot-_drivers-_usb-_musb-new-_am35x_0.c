void FUN1(struct VAR1 *VAR2, u16 VAR3, VAR4 *VAR5)
{
void VAR6 *VAR7 = VAR2->VAR7;
u32		VAR8;
int		VAR9;


if (FUN2((0x03 & (unsigned long) VAR5) == 0) && VAR3 >= 4) {
FUN3(VAR7, VAR5, VAR3 >> 2);
VAR5 += VAR3 & ~0x03;
VAR3 &= 0x03;
}

if (VAR3 > 4) {
for (VAR9 = 0; VAR9 < (VAR3 >> 2); VAR9++) {
*(VAR10 *) VAR5 = FUN4(VAR7, 0);
VAR5 += 4;
}
VAR3 &= 0x03;
}
if (VAR3 > 0) {
VAR8 = FUN4(VAR7, 0);
memcpy(VAR5, &VAR8, VAR3);
}
}

static const struct musb_platform_ops VAR11 = {
const struct musb_platform_ops VAR11 = {
.VAR12		= VAR13,
.VAR14		= VAR15,

.VAR16		= VAR17,
.VAR18	= VAR19,

.VAR20	= VAR21,
.VAR22	= VAR23,

.VAR24	= VAR25,
};