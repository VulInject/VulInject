static void
FUN1(void *VAR1, void *VAR2, size_t VAR3)
{
char VAR4[128];

if (FUN2(VAR5, (VAR6)VAR1, VAR2, VAR3) != VAR3) {
memset(VAR4, 0, sizeof(VAR4));
snprintf(VAR4, (sizeof(VAR4) - 1),
"", (VAR6)VAR1);
FUN3(VAR4);
}
}