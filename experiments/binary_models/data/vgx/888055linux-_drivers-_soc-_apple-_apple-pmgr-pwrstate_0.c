static int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6 = 0;

FUN3(VAR5->VAR7, VAR5->VAR8, &VAR6);

return !!(VAR6 & VAR9);
}

const struct reset_control_ops VAR10 = {
.assert		= VAR11,
.VAR12	= VAR13,
.VAR14		= VAR15,
.VAR16		= VAR17,
};