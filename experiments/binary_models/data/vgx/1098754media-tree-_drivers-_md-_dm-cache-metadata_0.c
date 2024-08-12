static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
size_t VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR4);
__le32 VAR8;

if (FUN3(VAR4) != FUN4(VAR7->VAR9)) {
FUN5("",
FUN4(VAR7->VAR9),
(unsigned long long)FUN3(VAR4));
return -VAR10;
}

if (FUN4(VAR7->VAR11) != VAR12) {
FUN5("",
FUN4(VAR7->VAR11),
(unsigned long long)VAR12);
return -VAR13;
}

VAR8 = FUN6(FUN7(&VAR7->VAR14,
VAR5 - sizeof(VAR15),
VAR16));
if (VAR8 != VAR7->VAR17) {
FUN5("",
FUN8(VAR8), FUN8(VAR7->VAR17));
return -VAR13;
}

return FUN9(VAR7);
}