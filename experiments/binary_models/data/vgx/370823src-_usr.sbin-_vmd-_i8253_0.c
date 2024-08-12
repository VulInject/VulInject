void
FUN1(int VAR1, short VAR2, void *VAR3)
{
struct timeval VAR4;
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;

FUN2(VAR6->VAR7, 0, 0);
FUN3(VAR6->VAR7, 0, 0);

if (VAR6->VAR8 != VAR9) {
FUN4(&VAR4);
VAR4.VAR10 = (VAR6->VAR11 * VAR12) / 1000;
FUN5(&VAR6->VAR13, &VAR4);
} else
VAR6->VAR14 = 1;
}