int FUN1(struct VAR1 *VAR2)
{
char *VAR3;
struct VAR4 *VAR5;
int VAR6 = 0;

VAR3 = FUN2(VAR2, &VAR5);
if (!VAR3 || !VAR5)
goto free;

if (VAR5->VAR7.VAR8 & VAR9)
VAR6 = 1;
free:
FUN3(VAR3);
return VAR6;
}