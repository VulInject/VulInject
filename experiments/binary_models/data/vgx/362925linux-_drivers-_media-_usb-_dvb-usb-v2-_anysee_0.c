static int FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
int VAR8;
u8 VAR9[] = {VAR10, 0x02, 0x40 | VAR4 >> 8, VAR4 & 0xff, 0x00, 1};
u8 VAR11;

VAR8 = FUN2(VAR6, VAR9, sizeof(VAR9), &VAR11, 1);
if (VAR8)
return VAR8;

return VAR11;
}