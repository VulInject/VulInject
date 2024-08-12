static bool FUN1(const char *VAR1, int VAR2)
{
if (VAR2 < 3)
return false;

if (VAR1[0] != '' || VAR1[1] != '')
return false;

while (VAR2-- > 2) {
if (VAR1[VAR2] == '')
return false;
}

return true;
}