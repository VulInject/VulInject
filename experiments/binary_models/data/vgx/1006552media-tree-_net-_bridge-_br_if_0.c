int FUN1(struct VAR1 *VAR1, const char *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

VAR4 = FUN2(sizeof(struct VAR6), VAR2, VAR7,
VAR8);

if (!VAR4)
return -VAR9;

FUN3(VAR4, VAR1);
VAR4->VAR10 = &VAR11;

VAR5 = FUN4(VAR4);
if (VAR5)
FUN5(VAR4);
return VAR5;
}