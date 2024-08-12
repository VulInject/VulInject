static struct VAR1 *FUN1(const char *VAR2)
{
struct VAR1 *VAR3, *VAR4 = NULL;

FUN2(&VAR5);

FUN3(VAR3, &VAR6, VAR7)
if (!strcmp(VAR3->VAR2, VAR2) && FUN4(VAR3->VAR8)) {
VAR4 = VAR3;
break;
}

FUN5(&VAR5);

return VAR4;
}