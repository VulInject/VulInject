static const char *FUN1(const char *VAR1)
{
size_t VAR2 = strlen(VAR1);
if (VAR2 && VAR1[VAR2 - 1] != '') {
char *VAR3 = xmalloc(FUN2(VAR2, 2));
memcpy(VAR3, VAR1, VAR2);
VAR3[VAR2++] = '';
VAR3[VAR2] = 0;
return VAR3;
}
return VAR1;
}