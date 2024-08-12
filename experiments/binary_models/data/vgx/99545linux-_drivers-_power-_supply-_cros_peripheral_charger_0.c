static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3,
void *VAR4)
{
struct VAR5 *VAR6 = VAR4;
struct VAR7 *VAR8 =
FUN2(VAR2, struct VAR7, VAR9);
u32 VAR10;

if (VAR6->VAR11.VAR12 != VAR13 ||
VAR6->VAR14 != sizeof(VAR10))
return VAR15;

VAR10 = FUN3(&VAR6->VAR11.VAR4.VAR10);

if (!(VAR10 & VAR16))
return VAR15;

return FUN4(VAR8, VAR10);
}