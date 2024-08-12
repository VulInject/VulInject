static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
VAR5 *VAR6,
VAR5 *VAR7)
{
memcpy(VAR4, &VAR2->VAR8, sizeof(*VAR4));
VAR4->VAR9 &= ~0xf0;
VAR4->VAR9 |= 0x20;
*VAR6 = VAR10;
*VAR7 = VAR11;
}

const struct clk_hw_omap_ops VAR12 = {
.VAR13	= VAR14,
.VAR15	= VAR16,
.VAR17	= VAR18,
.VAR19	= VAR20,
};