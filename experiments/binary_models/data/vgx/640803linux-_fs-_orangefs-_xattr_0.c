static struct VAR1 *FUN1(struct VAR2 *VAR2,
const char *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR1 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
VAR8 = &VAR5->VAR11[FUN3(VAR3)];
if (FUN4(VAR8))
return NULL;
FUN5(VAR6, VAR10, VAR8, VAR12) {

if (!strcmp(VAR6->VAR3, VAR3))
return VAR6;
}
return NULL;
}