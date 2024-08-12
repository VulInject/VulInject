void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
u32 VAR5 = FUN2(VAR2->VAR6->VAR7);
u32 VAR8, VAR9;

if (!VAR2->VAR6->VAR10)
return;

for (VAR9 = 0; VAR9 < VAR5; VAR9++) {
VAR8 = FUN3(VAR2, VAR4,
VAR2->VAR6->VAR11 +
(VAR9 << 2) + sizeof(VAR12));


((VAR12 *)VAR2->VAR6->VAR13)[VAR9] =
FUN4((__force VAR14)VAR8);
}
}

struct VAR15 {
struct list_head VAR16;
struct VAR17 *VAR18;
u16 VAR19;
bool VAR20;
};