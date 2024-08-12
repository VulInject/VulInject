static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);
struct VAR7 *VAR8 = &VAR6->VAR8;
struct VAR9 *VAR10 = FUN4(VAR2);
int VAR11;


if (FUN5(VAR4, VAR8, VAR6))
return 0;



FUN6(VAR10->VAR12, VAR4);


VAR11 = FUN7(VAR2, VAR8, VAR13);
if (VAR11)
return VAR11;


return FUN8(VAR2);
}

static const struct eth_ops VAR14 = {
.VAR15	= VAR16,
.send	= VAR17,
.recv	= VAR18,
.VAR19 = VAR20,
.VAR21	= VAR22,
.VAR23 = VAR24,
.VAR25 = VAR26,
};