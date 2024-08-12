static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
int VAR4;

VAR4 = FUN2(VAR2, VAR3);
if (VAR4)
return VAR4;

return FUN3(VAR2, VAR3);
}

static const struct reset_control_ops VAR5 = {
.assert = VAR6,
.VAR7 = VAR8,
.VAR9 = VAR10,
};