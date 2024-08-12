FUN1 (const char *VAR1, size_t VAR2)
{
const char *VAR3 = (const char *) memchr (VAR1, '', VAR2);
if (VAR3 != NULL)
return VAR3 - VAR1 + 1;
else
return VAR2;
}