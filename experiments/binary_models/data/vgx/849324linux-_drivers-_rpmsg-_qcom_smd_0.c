static struct VAR1 *
FUN1(struct VAR2 *VAR3, const char *VAR4)
{
struct VAR1 *VAR5;
struct VAR1 *VAR6 = NULL;
unsigned long VAR7;

FUN2(&VAR3->VAR8, VAR7);
FUN3(VAR5, &VAR3->VAR9, VAR10) {
if (!strcmp(VAR5->VAR4, VAR4)) {
VAR6 = VAR5;
break;
}
}
FUN4(&VAR3->VAR8, VAR7);

return VAR6;
}