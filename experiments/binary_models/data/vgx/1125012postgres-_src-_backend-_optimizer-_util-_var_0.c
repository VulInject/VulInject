VAR1
FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
pull_varnos_context VAR6;

VAR6.VAR7 = NULL;
VAR6.VAR3 = VAR3;
VAR6.VAR8 = 0;


FUN2(VAR5,
VAR9,
(void *) &VAR6,
0);

return VAR6.VAR7;
}