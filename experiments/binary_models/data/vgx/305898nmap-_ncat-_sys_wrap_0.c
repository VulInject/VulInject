void *FUN1(size_t VAR1, size_t VAR2)
{
void *VAR3;


FUN2(VAR1, VAR2);

VAR3 = calloc(VAR1, VAR2);
if (VAR3 == NULL)
FUN3("");

return VAR3;
}