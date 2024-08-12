FUN1 (int VAR1, void *VAR2, size_t VAR3)
{
void *VAR4;

if (VAR2 == NULL)              
return FUN2(VAR1, VAR3);

VAR4 = realloc (VAR2, VAR3);
if (VAR4 == NULL)
FUN3 ("", VAR1, VAR3);
if (VAR2 == NULL)
FUN4 (VAR1);

return VAR4;
}