static bool
FUN1(const unsigned char *VAR1, int VAR2)
{
for (VAR2--; VAR2 >= 0; VAR2--)
if (VAR1[VAR2] != 0xff)
return false;

return true;
}