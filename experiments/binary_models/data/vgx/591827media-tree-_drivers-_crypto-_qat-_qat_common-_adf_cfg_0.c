static struct VAR1 *FUN1(struct VAR2 *VAR3,
const char *VAR4)
{
struct VAR5 *VAR6 = VAR3->VAR6;
struct VAR7 *VAR8;

FUN2(VAR8, &VAR6->VAR9) {
struct VAR1 *VAR10 =
FUN3(VAR8, struct VAR1, VAR8);
if (!strcmp(VAR10->VAR11, VAR4))
return VAR10;
}
return NULL;
}