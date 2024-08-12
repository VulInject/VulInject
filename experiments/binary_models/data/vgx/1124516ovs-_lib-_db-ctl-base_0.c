static struct VAR1 *
FUN1(const char *VAR2, struct VAR1 *VAR3, size_t VAR4)
{
size_t VAR5;

for (VAR5 = 0; VAR5 < VAR4; VAR5++) {
if (!strcmp(VAR3[VAR5].VAR2, VAR2)) {
return &VAR3[VAR5];
}
}
return NULL;
}