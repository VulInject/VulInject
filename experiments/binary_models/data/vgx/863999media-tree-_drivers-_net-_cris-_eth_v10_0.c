static struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
unsigned long VAR6;

FUN3(&VAR5->VAR7, VAR6);

FUN4(&VAR3->VAR8);
FUN5(&VAR3->VAR8);

FUN6(&VAR5->VAR7, VAR6);
return &VAR3->VAR8;
}