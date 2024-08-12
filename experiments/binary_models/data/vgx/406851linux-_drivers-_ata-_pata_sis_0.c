static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR4;
struct VAR6 *VAR7 = FUN2(VAR4->VAR8->VAR9);
int VAR10 = 0x40;
u32 VAR11;


FUN3(VAR7, 0x54, &VAR11);
if (VAR11 & 0x40000000)
VAR10 = 0x70;

return VAR10 + (8 * VAR4->VAR12) + (4 * VAR2->VAR13);
}