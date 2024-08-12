static int FUN1(struct VAR1 *VAR2,
int VAR3, struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = VAR7->VAR8;

if (VAR3 >= VAR9->VAR10)
return -VAR11;
VAR5->VAR3 = VAR3;
FUN3(VAR5->VAR12, VAR9->VAR13[VAR3].VAR14);
return 0;
}