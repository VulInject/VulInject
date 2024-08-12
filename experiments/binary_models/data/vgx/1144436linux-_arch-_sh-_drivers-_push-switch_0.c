static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR2->VAR7.VAR8;
int VAR9 = FUN3(VAR2, 0);

if (VAR6->VAR10)
FUN4(&VAR2->VAR7, &VAR11);

FUN5(VAR2, NULL);
FUN6(&VAR4->VAR12);
FUN7(&VAR4->VAR13);
FUN8(VAR9, VAR2);

FUN9(VAR4);

return 0;
}

static struct platform_driver VAR14 = {
.VAR15		= VAR16,
.remove		= VAR17,
.VAR18		= {
.VAR10	= VAR19,
},
};