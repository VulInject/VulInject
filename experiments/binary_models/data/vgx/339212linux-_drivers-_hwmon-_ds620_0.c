static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR3 *VAR5;
struct VAR6 *VAR7;

VAR7 = FUN2(VAR4, sizeof(struct VAR6), VAR8);
if (!VAR7)
return -VAR9;

VAR7->VAR2 = VAR2;
FUN3(&VAR7->VAR10);


FUN4(VAR2);

VAR5 = FUN5(VAR4, VAR2->VAR11,
VAR7, VAR12);
return FUN6(VAR5);
}