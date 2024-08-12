char *
FUN1(VAR1 *VAR2, const char *VAR3)
{
size_t VAR4;

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
if (strcmp(VAR2->VAR6[VAR4], VAR3) == 0)
return VAR2->VAR6[VAR4];

return NULL;
}