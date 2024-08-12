void FUN1(VAR1 *VAR2, const char *VAR3, uint32_t VAR4, bool VAR5)
{
    BiosLinkerLoaderEntry VAR6;
    memset(&VAR6, 0, sizeof VAR6);
    strncpy(VAR6.VAR7.VAR3, VAR3, sizeof VAR6.VAR7.VAR3 - 1);
    VAR6.VAR8 = FUN2(VAR9);
    VAR6.VAR7.VAR10 = FUN2(VAR4);
    VAR6.VAR7.VAR11 = FUN2(VAR5 ? VAR12 : VAR13);
    FUN3(VAR2, &VAR6, sizeof VAR6);
}