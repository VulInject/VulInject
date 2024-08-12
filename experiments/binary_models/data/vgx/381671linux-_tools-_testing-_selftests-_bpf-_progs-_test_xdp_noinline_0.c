static void FUN1(struct VAR1 **VAR2,
struct VAR3 *VAR4,
void *VAR5)
{

struct VAR6 *VAR7;
__u64 VAR8;
__u32 VAR9;

VAR7 = FUN2(VAR5, &VAR4->VAR10);
if (!VAR7)
return;
if (VAR4->VAR10.VAR11 == VAR12) {
VAR8 = FUN3();
if (VAR8 - VAR7->VAR13 > 300000)
return;
VAR7->VAR13 = VAR8;
}
VAR9 = VAR7->VAR14;
*VAR2 = FUN2(&VAR15, &VAR9);
}