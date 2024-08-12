static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
const struct VAR7 *VAR8 = FUN2(VAR6);
struct nft_cmp_expr VAR9 = {
.VAR10	= {
.VAR10	= {
[0] = VAR8->VAR10,
},
},
.VAR11	= VAR8->VAR11,
.VAR12	= VAR8->VAR12 / VAR13,
.VAR14	= VAR8->VAR15 ? VAR16 : VAR17,
};

return FUN3(VAR2, VAR4, &VAR9);
}