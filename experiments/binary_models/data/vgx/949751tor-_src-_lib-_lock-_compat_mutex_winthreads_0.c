static void
FUN1(VAR1 *VAR2)
{
if (--VAR2->VAR3) {
return;
}
FUN2(&VAR2->VAR4, 0);
FUN3(&VAR2->mutex);
}