static int FUN1(struct VAR1 *VAR2)
{
static int VAR3;
int VAR4;

if (VAR3)
return 0;

VAR4 = FUN2(VAR2);
if (VAR4 < 0)
return VAR4;

FUN3(VAR2);

VAR3 = 1;

return 0;
}