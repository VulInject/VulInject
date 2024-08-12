static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR3 *VAR5, unsigned int VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2->VAR9);
le128 VAR10[3];
struct xts_crypt_req VAR11 = {
.VAR12 = VAR10,
.VAR13 = sizeof(VAR10),

.VAR14 = &VAR8->VAR14,
.VAR15 = FUN3(VAR16),
.VAR17 = &VAR8->VAR17,
.VAR18 = VAR19,
};

return FUN4(VAR2, VAR4, VAR5, VAR6, &VAR11);
}