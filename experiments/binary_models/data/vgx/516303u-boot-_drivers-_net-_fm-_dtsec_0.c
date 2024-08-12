static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
u32 VAR8, VAR9;


VAR8 = (VAR4[5] << 24) | (VAR4[4] << 16) | \
(VAR4[3] << 8)  | (VAR4[2]);
FUN2(&VAR6->VAR10, VAR8);

VAR9 = ((VAR4[1] << 24) | (VAR4[0] << 16)) & 0xffff0000;
FUN2(&VAR6->VAR11, VAR9);
}