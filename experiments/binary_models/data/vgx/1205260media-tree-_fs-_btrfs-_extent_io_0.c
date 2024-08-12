static inline void FUN1(const char *VAR1,
struct VAR2 *VAR3, u64 VAR4, u64 VAR5)
{
struct VAR6 *VAR6;
u64 VAR7;

if (!VAR3->VAR8)
return;

VAR6 = VAR3->VAR8->VAR9;
VAR7 = FUN2(VAR6);
if (VAR5 >= VAR10 && (VAR5 % 2) == 0 && VAR5 != VAR7 - 1) {
FUN3(FUN4(VAR6)->VAR11->VAR12,
"",
VAR1, FUN5(FUN4(VAR6)), VAR7, VAR4, VAR5);
}
}