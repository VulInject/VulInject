const char *FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (!VAR2 || !VAR2->VAR4) { 
VAR3 = FUN2(VAR2);
if (VAR3)
return NULL;
}

return VAR2->VAR4;
}