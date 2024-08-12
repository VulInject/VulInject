static struct VAR1 *FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR1 *VAR1, *VAR5 = NULL;
unsigned long VAR6;

FUN2(&VAR7, VAR6);

FUN3(VAR4, &VAR8, VAR9) {
if (VAR4->VAR10 == VAR11) {
VAR1 = VAR4->VAR12;
if (VAR1->VAR2 == VAR2) {
VAR5 = VAR1;
break;
}
}
}

FUN4(&VAR7, VAR6);
return VAR5;
}