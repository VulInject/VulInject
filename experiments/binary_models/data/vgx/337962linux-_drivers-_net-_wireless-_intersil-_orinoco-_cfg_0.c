static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);
int VAR6;

if (!VAR3)
return -VAR7;

if (VAR5->VAR8 && VAR5->VAR8 != VAR3)
return -VAR9;

VAR5->VAR8 = VAR3;

VAR6 = FUN3(VAR5, VAR3->VAR10);

if (VAR6)
VAR5->VAR8 = NULL;

return VAR6;
}