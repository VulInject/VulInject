static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR2->VAR5, struct VAR3, VAR6);

switch (VAR2->VAR7) {
case VAR8:
FUN3(VAR4, VAR2);
break;
}

return 0;
}

static const struct v4l2_ctrl_ops VAR9 = {
.VAR10 = VAR11,
};