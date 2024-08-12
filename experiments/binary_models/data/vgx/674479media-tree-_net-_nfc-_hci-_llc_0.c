int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(sizeof(struct VAR4), VAR6);
if (VAR5 == NULL)
return -VAR7;

VAR5->VAR1 = FUN3(VAR1, VAR6);
if (VAR5->VAR1 == NULL) {
FUN4(VAR5);
return -VAR7;
}
VAR5->VAR3 = VAR3;

FUN5(&VAR5->VAR8);
FUN6(&VAR5->VAR8, &VAR9);

return 0;
}