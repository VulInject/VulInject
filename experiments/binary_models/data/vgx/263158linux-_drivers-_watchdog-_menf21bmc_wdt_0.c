static int
FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
int VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);


VAR4 = FUN3(VAR6->VAR7,
VAR8, VAR3 * 10);
if (VAR4 < 0)
return VAR4;

VAR2->VAR3 = VAR3;

return 0;
}