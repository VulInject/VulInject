FUN1 (VAR1 * VAR2)
{
if (*VAR2 != VAR3 || *(VAR2 + 1) != VAR3 || *(VAR2 + 2) != 3)
return 0;

return 1;
}