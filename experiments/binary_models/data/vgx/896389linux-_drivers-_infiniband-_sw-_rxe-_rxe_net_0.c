int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
int VAR4;
struct VAR5 *VAR6 = NULL;

VAR6 = FUN2(VAR5, VAR7);
if (!VAR6)
return -VAR8;

VAR6->VAR3 = VAR3;

VAR4 = FUN3(VAR6, VAR3->VAR9, VAR1);
if (VAR4) {
FUN4(&VAR6->VAR7);
return VAR4;
}

return 0;
}