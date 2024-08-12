static bool FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < VAR3; VAR4++)
if (FUN2(VAR2->VAR5->VAR6[VAR4]))
return true;

for (VAR4 = 0; VAR4 < VAR2->VAR7; VAR4++)
if (FUN2(VAR2->VAR8->VAR6[VAR4]))
return true;

return false;
}