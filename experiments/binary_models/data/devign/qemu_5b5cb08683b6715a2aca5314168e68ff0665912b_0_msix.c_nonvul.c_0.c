void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    unsigned VAR6 = VAR2->VAR7 + VAR8;
    int VAR9;
    if (VAR3 + VAR5 <= VAR6 || VAR3 > VAR6)
    {
        return;
    }
    if (!FUN2(VAR2))
    {
        return;
    }
    FUN3(VAR2->VAR10[0], 0);
    if (FUN4(VAR2))
    {
        return;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR11; ++VAR9)
    {
        FUN5(VAR2, VAR9);
    }
}