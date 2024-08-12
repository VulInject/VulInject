static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

VAR4->VAR5 = (struct VAR6 *)FUN3(VAR2);

return 0;
}

static const struct dm_spi_ops VAR7 = {
.VAR8		= VAR9,
.VAR10	= VAR11,
.VAR12	= VAR13,
};