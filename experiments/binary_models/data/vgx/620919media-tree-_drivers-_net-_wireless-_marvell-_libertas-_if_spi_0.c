static inline int FUN1(struct VAR1 *VAR2, u16 VAR3, u16 VAR4)
{
__le16 VAR5;

VAR5 = FUN2(VAR4);
return FUN3(VAR2, VAR3, (VAR6 *)&VAR5, sizeof(VAR7));
}