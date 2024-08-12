static int
FUN1(const char *VAR1, const struct VAR2 *VAR3)
{
int VAR4 = FUN2(VAR1, VAR3);
struct VAR5 *VAR6;

if (VAR4)
return VAR4;

FUN3("", VAR7);
FUN4(&VAR8);
FUN5(VAR6, &VAR9, VAR10)
VAR6->VAR7 = VAR7;
FUN6(&VAR8);
return 0;
}