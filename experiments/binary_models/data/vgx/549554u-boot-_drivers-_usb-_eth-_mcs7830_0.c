static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);
struct VAR7 *VAR8 = FUN4(VAR2);
struct VAR9 *VAR10 = &VAR6->VAR10;

if (FUN5(VAR4, VAR6))
return 0;

if (FUN6(VAR4, VAR8->VAR11))
return 0;

return FUN7(VAR2, VAR10, VAR12);
}

static const struct eth_ops VAR13 = {
.VAR14	= VAR15,
.send	= VAR16,
.recv	= VAR17,
.VAR18 = VAR19,
.VAR20	= VAR21,
.VAR22 = VAR23,
};