void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR1 *VAR5, void *VAR6, uint8_t VAR7)
{
    BiosLinkerLoaderEntry VAR8;
    memset(&VAR8, 0, sizeof VAR8);
    strncpy(VAR8.VAR6.VAR3, VAR3, sizeof VAR8.VAR6.VAR3 - 1);
    strncpy(VAR8.VAR6.VAR4, VAR4, sizeof VAR8.VAR6.VAR4 - 1);
    VAR8.VAR9 = FUN2(VAR10);
    VAR8.VAR6.VAR11 = FUN2((VAR12 *)VAR6 - VAR5->VAR13);
    VAR8.VAR6.VAR14 = VAR7;
    assert(VAR7 == 1 || VAR7 == 2 || VAR7 == 4 || VAR7 == 8);
    FUN3(VAR2, &VAR8, sizeof VAR8);
}