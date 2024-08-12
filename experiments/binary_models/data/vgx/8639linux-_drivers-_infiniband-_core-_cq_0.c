struct VAR1 *FUN1(struct VAR2 *VAR3, void *private,
int VAR4, enum ib_poll_context VAR5,
const char *VAR6)
{
static atomic_t VAR7;
int VAR8 = 0;

if (VAR3->VAR9 > 1)
VAR8 =
FUN2(&VAR7) %
FUN3(int, VAR3->VAR9, FUN4());

return FUN5(VAR3, private, VAR4, VAR8, VAR5,
VAR6);
}