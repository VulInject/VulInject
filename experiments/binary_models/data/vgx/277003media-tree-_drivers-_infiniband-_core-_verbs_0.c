int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5 = VAR2->VAR5;
struct VAR6 *VAR7 = VAR2->VAR7;

if (FUN2(&VAR2->VAR8))
return -VAR9;

VAR3 = VAR2->VAR10->FUN3(VAR2);
if (!VAR3) {
FUN4(&VAR7->VAR8);
FUN4(&VAR5->VAR8);
}
return VAR3;
}