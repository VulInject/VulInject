VAR1 *
FUN1(const char *VAR2, const VAR3 *VAR4)
{
VAR1 *VAR5 = NULL;

FUN2((VAR2 != NULL) && (VAR4 != NULL), return NULL);
for (VAR1 *VAR6 = VAR4->VAR7; VAR6 != NULL; VAR6 = VAR6->VAR8) {
VAR5 = FUN3(VAR5, (VAR9 *) VAR6->VAR10, VAR2);
}
return VAR5;
}