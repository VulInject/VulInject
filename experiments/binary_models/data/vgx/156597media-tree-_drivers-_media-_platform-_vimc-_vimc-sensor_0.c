static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 =
FUN2(VAR2, struct VAR7, VAR2);

VAR6->VAR6 = VAR8->VAR9;

return 0;
}

static const struct v4l2_subdev_pad_ops VAR10 = {
.VAR11		= VAR12,
.VAR13	= VAR14,
.VAR15		= VAR16,

.VAR17		= VAR16,
};