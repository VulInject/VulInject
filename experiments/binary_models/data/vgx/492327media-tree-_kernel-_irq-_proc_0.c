static int FUN1(int VAR1, struct VAR2 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = FUN2((long)VAR3->private);
const struct VAR7 *VAR8 = VAR6->VAR9.VAR10;

if (FUN3(&VAR6->VAR11))
VAR8 = VAR6->VAR12;
if (VAR1)
FUN4(VAR3, "", FUN5(VAR8));
else
FUN4(VAR3, "", FUN5(VAR8));
return 0;
}