VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    int VAR8;
    unsigned char VAR9;
    uint32_t VAR10 = 0;
    FUN2("" VAR11 "" VAR11 "", VAR12, VAR5, VAR6, VAR7);
    if (VAR7 == VAR6)
    {
        FUN3(VAR4, VAR6, 0, VAR5 + 1);
        return 0;
    }
    for (VAR8 = 0; VAR8 <= VAR5; VAR8++)
    {
        VAR9 = FUN4(VAR4, VAR6 + VAR8) ^ FUN4(VAR4, VAR7 + VAR8);
        if (VAR9)
        {
            VAR10 = 1;
        }
        FUN5(VAR4, VAR6 + VAR8, VAR9);
    }
    return VAR10;
}