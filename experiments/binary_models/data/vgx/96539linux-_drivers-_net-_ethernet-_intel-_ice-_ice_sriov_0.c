static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (!VAR2)
return -VAR4;

for (VAR3 = VAR2->VAR5 - 1; VAR3 >= 0; VAR3--)
if (VAR2->VAR6[VAR3] & VAR7)
return VAR3;

return 0;
}