static int FUN1(void)
{
struct VAR1 *VAR2 = &VAR3[0];
int VAR4, VAR5 = 0;

VAR6 = 0;


if (FUN2(VAR2))
return -1;

for (VAR4 = 1; !VAR5 && VAR4 < VAR7; VAR4++)
VAR5 = FUN3(VAR4);

return VAR5;
}