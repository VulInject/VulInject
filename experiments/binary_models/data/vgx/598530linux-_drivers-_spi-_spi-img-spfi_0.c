static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;


FUN3(&VAR6->VAR8, VAR7);
if (VAR6->VAR9 || VAR6->VAR10) {
VAR6->VAR9 = false;
VAR6->VAR10 = false;

FUN4(VAR6->VAR11);
FUN4(VAR6->VAR12);
}
FUN5(&VAR6->VAR8, VAR7);
}