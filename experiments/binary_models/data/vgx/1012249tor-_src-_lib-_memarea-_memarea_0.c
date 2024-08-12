char *
FUN1(VAR1 *VAR2, const char *VAR3, size_t VAR4)
{
size_t VAR5 = FUN2(VAR3, VAR4);
char *VAR6 = FUN3(VAR2, VAR5+1);
memcpy(VAR6, VAR3, VAR5);
VAR6[VAR5] = 0;
return VAR6;
}