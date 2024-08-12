static int FUN1(uint64_t VAR1, char **VAR2)
{
    struct tm VAR3 = {0};
    VAR3.VAR4 = (VAR1 >> 48) - 1900;
    VAR3.VAR5 = (VAR1 >> 40 & 0xFF) - 1;
    VAR3.VAR6 = (VAR1 >> 32 & 0xFF);
    VAR3.VAR7 = (VAR1 >> 24 & 0xFF);
    VAR3.VAR8 = (VAR1 >> 16 & 0xFF);
    VAR3.VAR9 = (VAR1 >> 8 & 0xFF);
    *VAR2 = FUN2(32);
    if (!*VAR2)
        return FUN3(VAR10);
    FUN4(*VAR2, 32, "", &VAR3);
    return 0;