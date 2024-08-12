static inline void FUN1(const struct VAR1 *VAR2,
__le16 VAR3, VAR4 *VAR5)
{
while (VAR3 != VAR6) {
const struct VAR1 *VAR7 = VAR2 + FUN2(VAR3);
u64 VAR8 = FUN3(VAR7->VAR5);


if (VAR8 && VAR8 < *VAR5)
*VAR5 = VAR8;

VAR3 = VAR7->VAR3;
}
}