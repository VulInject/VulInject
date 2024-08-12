static int FUN1(VAR1 *VAR2, void *VAR3, VAR4 *VAR5, const VAR6 *VAR7, int VAR8)
{
    int VAR9 = 0;
    int VAR10 = 0;
    int VAR11 = 0xFF;
    FUN2(VAR3, VAR12, "");
    while (VAR11 == 0xFF)
    {
        VAR11 = FUN3(VAR2, 8);
        VAR9 += VAR11;
    }
    VAR11 = 0xFF;
    while (VAR11 == 0xFF)
    {
        VAR11 = FUN3(VAR2, 8);
        VAR10 += VAR11;
    }
    if (VAR8 == VAR13)
    {
        return FUN4(VAR2, VAR3, VAR5, VAR7, VAR9, VAR10);
    }
    else
    {
        return FUN5(VAR2, VAR3, VAR5, VAR9, VAR10);
    }