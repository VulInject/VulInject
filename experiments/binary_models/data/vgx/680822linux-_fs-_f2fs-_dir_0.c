static inline int FUN1(const struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const VAR5 *VAR6, u32 VAR7)
{
struct fscrypt_name VAR8;

if (VAR4->VAR9.VAR10) {
struct qstr VAR11 = FUN2(&VAR4->VAR9);

return FUN3(VAR2, &VAR11, VAR6, VAR7);
}
VAR8.VAR12 = VAR4->VAR12;
VAR8.VAR13 = VAR4->VAR13;
VAR8.VAR14 = VAR4->VAR14;
return FUN4(&VAR8, VAR6, VAR7);
}