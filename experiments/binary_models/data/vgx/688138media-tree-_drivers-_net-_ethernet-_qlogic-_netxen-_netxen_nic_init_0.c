static int
FUN1(struct VAR1 *VAR2)
{
const VAR3 *VAR4 = VAR2->VAR5->VAR6;
struct VAR7 *VAR8 = (struct VAR7 *) &VAR4[0];
u32 VAR9 = VAR2->VAR5->VAR10;
u32 VAR11;
__le32 VAR12;
__le32 VAR13;

if (VAR9 < VAR14)
return -VAR15;

VAR12 = FUN2(VAR8->VAR16);
VAR13 = FUN2(VAR8->VAR13);
VAR11 = FUN2(VAR8->VAR17) + (VAR12 * VAR13);

if (VAR9 < VAR11)
return -VAR15;

return 0;
}