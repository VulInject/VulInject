char *FUN1(const char *VAR1, size_t VAR2)
{
char *VAR3;

VAR3 = FUN2(VAR2 + 1);
if(!VAR3)
return NULL;

memcpy(VAR3, VAR1, VAR2);
VAR3[VAR2] = '';
return VAR3;
}