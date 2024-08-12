static struct VAR1 *VAR2    = (struct VAR1 *)VAR3;

static void FUN1(u32 VAR4, int VAR5)
{
if (VAR5)
FUN2(&VAR2->VAR6, VAR4);
else
FUN3(&VAR2->VAR6, VAR4);
}