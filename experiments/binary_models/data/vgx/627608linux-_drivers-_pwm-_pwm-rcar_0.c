static int FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned long VAR4 = FUN2(VAR2->VAR5);
u64 VAR6, VAR7;

if (VAR4 == 0)
return -VAR8;

VAR6 = (VAR9)VAR10 * VAR11;
VAR7 = (VAR9)VAR3 * VAR4 + VAR6 - 1;
VAR7 = FUN3(VAR7, VAR6);
VAR6 = FUN4(VAR7 - 1) + 1;

return (VAR6 <= VAR12) ? VAR6 : -VAR13;
}