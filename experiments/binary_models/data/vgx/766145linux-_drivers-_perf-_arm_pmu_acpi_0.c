static FUN1(int, VAR1);

static int FUN2(int VAR2)
{
struct VAR3 *VAR4;
int VAR5, VAR6;

VAR4 = FUN3(VAR2);

VAR5 = VAR4->VAR7;


if (!VAR5)
return 0;

if (VAR4->VAR8 & VAR9)
VAR6 = VAR10;
else
VAR6 = VAR11;


return FUN4(NULL, VAR5, VAR6, VAR12);
}