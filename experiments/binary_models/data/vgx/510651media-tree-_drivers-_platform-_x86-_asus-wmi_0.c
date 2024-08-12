static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6;
int VAR7;


if (VAR5->VAR8)
return -VAR9;

VAR7 = FUN3(VAR5, VAR3+1, &VAR6);
if (VAR7) {
FUN4("", VAR7);
return -VAR9;
}

return VAR6;
}