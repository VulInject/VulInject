static void
FUN1(cpg_handle_t VAR1,
const struct VAR2 *VAR3,
uint32_t VAR4, uint32_t VAR5, void *VAR6, size_t VAR7)
{
uint32_t VAR8 = 0;
VAR9 *VAR10 = NULL;
const char *VAR11 = NULL;
char *VAR12 = FUN2(VAR1, VAR4, VAR5, VAR6, &VAR8, &VAR11);

if(VAR12 == NULL) {
return;
}

if (VAR8 == VAR13) {
VAR10 = FUN3(VAR12);
}

if (VAR10 == NULL) {
FUN4("", VAR8, VAR11, VAR4, VAR12);
} else {
VAR14 *VAR15 = FUN5(VAR4, VAR11);

FUN6(VAR15, VAR10);
}

FUN7(VAR10);
free(VAR12);
}