static struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4 = NULL;

FUN2(&VAR3->VAR5);
if (FUN3(&VAR3->VAR6)) {
FUN4(&VAR3->VAR5);
return NULL;
}

VAR4 = FUN5(&VAR3->VAR6,
struct VAR1, VAR7);
if (VAR4)
FUN6(&VAR4->VAR7);
FUN4(&VAR3->VAR5);

return VAR4;
}