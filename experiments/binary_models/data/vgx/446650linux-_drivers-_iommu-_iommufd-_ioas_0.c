void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
int VAR5;

VAR5 = FUN3(&VAR4->VAR6, NULL);
FUN4(VAR5 && VAR5 != -VAR7);
FUN5(&VAR4->VAR6);
FUN6(&VAR4->mutex);
}