static void FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
const char *VAR5[] = {"", "", "", "", ""};
pprect VAR6;
size_t VAR7;
for (VAR7 = 0; VAR7 < sizeof(VAR5) / sizeof(const char *); ++VAR7)
if (FUN2(VAR2, VAR5[VAR7], &VAR6))
fprintf(VAR4, "", VAR5[VAR7], VAR6.VAR8, VAR6.VAR9, VAR6.VAR10, VAR6.VAR11);
}