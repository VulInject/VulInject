void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    unsigned VAR6 = VAR2->VAR7 + VAR8;
    int VAR9;
    bool VAR10;
    if (!FUN2(VAR3, VAR5, VAR6))
    {
        return;
    }
    VAR10 = VAR2->VAR11;
    FUN3(VAR2);
    if (!FUN4(VAR2))
    {
        return;
    }
    FUN5(VAR2);
    if (VAR2->VAR11 == VAR10)
    {
        return;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR12; ++VAR9)
    {
        FUN6(VAR2, VAR9);
    }
}