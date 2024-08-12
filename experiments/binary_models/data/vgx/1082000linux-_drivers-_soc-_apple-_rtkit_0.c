int FUN1(struct VAR1 *VAR2, u8 VAR3)
{
u64 VAR4;

if (!FUN2(VAR3, VAR2->VAR5))
return -VAR6;
if (VAR3 >= VAR7 &&
!FUN3(VAR2))
return -VAR6;

VAR4 = FUN4(VAR8, VAR3);
VAR4 |= VAR9;
FUN5(VAR2, VAR10, VAR4);

return 0;
}