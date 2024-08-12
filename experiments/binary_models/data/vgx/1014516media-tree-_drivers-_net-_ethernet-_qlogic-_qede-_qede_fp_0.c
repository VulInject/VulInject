static void FUN1(struct VAR1 *VAR2, u8 VAR3, __le32 VAR4)
{
enum pkt_hash_types VAR5 = VAR6;
enum rss_hash_type VAR7;
u32 VAR8 = 0;

VAR7 = FUN2(VAR3, VAR9);
if (VAR7) {
VAR5 = ((VAR7 == VAR10) ||
(VAR7 == VAR11)) ?
VAR12 : VAR13;
VAR8 = FUN3(VAR4);
}
FUN4(VAR2, VAR8, VAR5);
}