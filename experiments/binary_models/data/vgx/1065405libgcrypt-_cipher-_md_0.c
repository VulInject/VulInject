FUN1 (const char *VAR1)
{
VAR2 *VAR3;

if (!VAR1)
return 0;


VAR3 = FUN2 (VAR1, NULL);
if (VAR3)
return VAR3->VAR4;


VAR3 = FUN3 (VAR1);
if (VAR3)
return VAR3->VAR4;

return 0;
}