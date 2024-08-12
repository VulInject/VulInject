static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct ip6_mh VAR5;
const struct VAR6 *VAR7;

VAR7 = FUN2(VAR4, FUN3(VAR4),
sizeof(VAR5), &VAR5);
if (!VAR7)
return -1;

if (((VAR7->VAR8 + 1) << 3) > VAR4->VAR9)
return -1;

if (VAR7->VAR8 < FUN4(VAR7->VAR10)) {
FUN5("",
VAR7->VAR8,
FUN4(VAR7->VAR10));
FUN6(VAR4, 0, FUN7(struct VAR6, VAR8) +
FUN8(VAR4));
return -1;
}

if (VAR7->VAR11 != VAR12) {
FUN5("",
VAR7->VAR11);
FUN6(VAR4, 0, FUN7(struct VAR6, VAR11) +
FUN8(VAR4));
return -1;
}

return 0;
}