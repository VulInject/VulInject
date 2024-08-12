static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

VAR4 = FUN2(sizeof(*VAR4), VAR5);
if (!VAR4)
return -VAR6;

VAR4->VAR2 = VAR2;
VAR4->VAR7 = -VAR8;

FUN3(VAR2, VAR4);

return 0;
}