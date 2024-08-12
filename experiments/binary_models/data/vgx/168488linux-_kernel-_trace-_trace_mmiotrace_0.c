static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->private;
FUN2(VAR4);
VAR2->private = NULL;
}