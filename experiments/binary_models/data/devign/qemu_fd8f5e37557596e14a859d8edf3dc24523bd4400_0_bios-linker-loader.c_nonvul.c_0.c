void FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4, void *VAR5, unsigned VAR6, VAR7 *VAR8)
{
    BiosLinkerLoaderEntry VAR9;
    memset(&VAR9, 0, sizeof VAR9);
    strncpy(VAR9.VAR10.VAR3, VAR3, sizeof VAR9.VAR10.VAR3 - 1);
    VAR9.VAR11 = FUN2(VAR12);
    VAR9.VAR10.VAR13 = FUN2(VAR8 - (VAR7 *)VAR4);
    VAR9.VAR10.VAR5 = FUN2((VAR7 *)VAR5 - (VAR7 *)VAR4);
    VAR9.VAR10.VAR14 = FUN2(VAR6);
    FUN3(VAR2, &VAR9, sizeof VAR9);
}