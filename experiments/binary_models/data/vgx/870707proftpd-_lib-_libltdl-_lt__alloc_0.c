FUN1 (void const *VAR1, size_t VAR2)
{
void *VAR3;

if ((VAR3 = FUN2 (VAR2)))
return memcpy (VAR3, VAR1, VAR2);

return 0;
}