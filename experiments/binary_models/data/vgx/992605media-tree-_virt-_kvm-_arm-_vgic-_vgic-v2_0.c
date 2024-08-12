static bool FUN1(gpa_t VAR1, gpa_t VAR2)
{
if (VAR1 + VAR3 < VAR1)
return false;
if (VAR2 + VAR4 < VAR2)
return false;

if (VAR1 + VAR3 <= VAR2)
return true;
if (VAR2 + VAR4 <= VAR1)
return true;

return false;
}