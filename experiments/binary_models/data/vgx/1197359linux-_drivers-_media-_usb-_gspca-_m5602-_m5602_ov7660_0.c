static int FUN1(struct VAR1 *VAR1,
__s32 VAR2)
{
int VAR3;
u8 VAR4;
struct VAR5 *VAR5 = (struct VAR5 *) VAR1;

FUN2(VAR1, VAR6, "", VAR2);

VAR3 = FUN3(VAR5, VAR7, &VAR4, 1);
if (VAR3 < 0)
return VAR3;

VAR2 = (VAR2 == VAR8);
VAR4 = ((VAR4 & 0xfe) | ((VAR2 & 0x01) << 0));

return FUN4(VAR5, VAR7, &VAR4, 1);
}