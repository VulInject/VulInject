VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    int VAR8 = 0, VAR9;
    FUN2("" VAR10 "" VAR10 "" VAR10 "", VAR11, VAR5, VAR6, VAR7);
    if (VAR5 > 256)
    {
        VAR5 = 256;
        VAR8 = 3;
    }
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        FUN3(VAR4, VAR6 + VAR9, FUN4(VAR4, VAR7 + VAR9));
    }
    return VAR8;
}