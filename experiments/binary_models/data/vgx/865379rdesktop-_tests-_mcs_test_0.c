void *
xmalloc(int VAR1)
{
void *VAR2 = malloc(VAR1);
if (VAR2 == NULL)
{
FUN1(VAR3, VAR4, "", VAR1);
FUN2(VAR5);
}
return VAR2;
}


void *
xrealloc(void *VAR6, size_t VAR1)
{
void *VAR2;

if (VAR1 == 0)
VAR1 = 1;
VAR2 = realloc(VAR6, VAR1);
if (VAR2 == NULL)
{
FUN1(VAR3, VAR4, "", VAR1);
FUN2(VAR5);
}
return VAR2;
}