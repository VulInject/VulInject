static int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
FUN2(VAR2, VAR3);

FUN3(VAR4, VAR5);

FUN4(VAR2, VAR3);

return 0;
}

static const struct reset_control_ops VAR6 = {
.VAR7 = VAR8,
.assert = VAR9,
.VAR10 = VAR11,
.VAR12 = VAR13,
};