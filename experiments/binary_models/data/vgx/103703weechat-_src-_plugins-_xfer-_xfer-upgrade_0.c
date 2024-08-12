FUN1 ()
{
int VAR1;
struct VAR2 *VAR3;

VAR3 = FUN2 (VAR4,
NULL, NULL, NULL);
if (!VAR3)
return 0;

VAR1 = FUN3 (VAR3);

FUN4 (VAR3);

return VAR1;
}