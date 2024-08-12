int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR3 *VAR5 = NULL;
int VAR6 = -VAR7;

VAR5 = FUN2(sizeof(*VAR5), VAR8);
if (!VAR5)
return -VAR7;

FUN3(VAR5);
VAR5->VAR9 = VAR10;

VAR6 = FUN4(FUN5(VAR2), 1, 1, 1, NULL, NULL, VAR5,
VAR4);

FUN6(VAR5);
return VAR6;
}