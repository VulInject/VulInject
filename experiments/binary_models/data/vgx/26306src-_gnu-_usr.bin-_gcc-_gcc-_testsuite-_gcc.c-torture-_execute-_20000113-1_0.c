FUN1 (int VAR1, int VAR2, int VAR3)
{
struct x VAR4 = {VAR1, VAR2, VAR3};
struct x VAR5 = {VAR1, VAR2, VAR3};
struct VAR1 *VAR6 = &VAR5;

VAR6->VAR7 += (VAR4.VAR8 - VAR4.VAR9) * VAR6->VAR8;
if (VAR4.VAR9 != 1 || VAR6->VAR7 != 5)
FUN2 ();
FUN3 (0);
}