VAR1 *FUN1(void)
{
VAR1 *VAR2 = NULL;
VAR2 = (VAR1*)FUN2(sizeof(VAR1));
if(!VAR2)
return NULL;
memset(VAR2, 0, sizeof(VAR1));

return VAR2;
}