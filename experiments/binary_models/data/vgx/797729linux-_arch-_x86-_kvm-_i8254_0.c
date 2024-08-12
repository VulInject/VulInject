static int FUN1(struct VAR1 *VAR2,
struct VAR3 *this,
gpa_t VAR4, int VAR5, const void *VAR6)
{
struct VAR7 *VAR8 = FUN2(this);
struct VAR9 *VAR10 = &VAR8->VAR10;
u32 VAR11 = *(VAR12 *) VAR6;
if (VAR4 != VAR13)
return -VAR14;

FUN3(&VAR10->VAR15);
if (VAR11 & (1 << 1))
VAR10->VAR16 |= VAR17;
else
VAR10->VAR16 &= ~VAR17;
FUN4(VAR8, 2, VAR11 & 1);
FUN5(&VAR10->VAR15);
return 0;
}