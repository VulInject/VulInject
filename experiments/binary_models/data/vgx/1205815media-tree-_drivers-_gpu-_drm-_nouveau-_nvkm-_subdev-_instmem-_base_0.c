static void *
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
FUN3(&VAR4->VAR5->VAR6);
FUN4(&VAR4->VAR7);
FUN5(&VAR4->VAR5->VAR6);
FUN6(&VAR4->VAR8);
return VAR4;
}