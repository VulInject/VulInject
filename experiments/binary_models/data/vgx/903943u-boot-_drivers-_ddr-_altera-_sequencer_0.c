static void FUN1(struct VAR1 *VAR2,
const u32 VAR3, const u32 VAR4, const u32 VAR5,
const int update)
{
u32 VAR6;

for (VAR6 = 0; VAR6 < VAR2->VAR7->VAR8;
VAR6 += VAR9) {
FUN2(VAR3, VAR4, VAR5);

if (update || (VAR6 == 0)) {
FUN3(VAR4, &VAR10->VAR11);
FUN3(0, &VAR10->update);
}
}
}