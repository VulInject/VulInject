static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;

VAR4 = FUN2(&VAR2->VAR7);
if (!VAR4)
return -VAR8;

VAR6 = FUN3(VAR2, VAR9, 0);
return FUN4(&VAR2->VAR7, VAR6, VAR4);
}

static struct platform_driver VAR10 = {
.VAR11 = VAR12,
.VAR13 = {
.VAR14 = "",
},
};