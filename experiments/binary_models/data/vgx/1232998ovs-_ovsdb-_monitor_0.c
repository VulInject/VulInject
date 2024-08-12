static inline void
FUN1(
struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

FUN2 (VAR4, &VAR2->VAR5) {
struct VAR6 *VAR7 = VAR4->VAR8;

if (!FUN3(&VAR7->VAR9)) {
VAR2->VAR10 = true;
return;
}
}
VAR2->VAR10 = false;
}