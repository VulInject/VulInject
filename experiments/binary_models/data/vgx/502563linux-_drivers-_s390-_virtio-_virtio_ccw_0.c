static struct VAR1 *FUN1(struct VAR2 *VAR3,
int VAR4)
{
struct VAR5 *VAR6;
unsigned long VAR7;
struct VAR1 *VAR8;

VAR8 = NULL;
FUN2(&VAR3->VAR9, VAR7);
FUN3(VAR6, &VAR3->VAR10, VAR11) {
if (VAR6->VAR8->VAR4 == VAR4) {
VAR8 = VAR6->VAR8;
break;
}
}
FUN4(&VAR3->VAR9, VAR7);
return VAR8;
}