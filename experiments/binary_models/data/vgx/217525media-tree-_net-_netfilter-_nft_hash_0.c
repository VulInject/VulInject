static void FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
const void *VAR9 = &VAR4->VAR9[VAR8->VAR10];
u32 VAR11;

VAR11 = FUN3(FUN4(VAR9, VAR8->VAR12, VAR8->VAR13), VAR8->VAR14);
VAR4->VAR9[VAR8->VAR15] = VAR11 + VAR8->VAR16;
}

struct VAR17 {
enum nft_registers      VAR15:8;
u32			VAR14;
u32			VAR16;
};