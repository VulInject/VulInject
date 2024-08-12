int FUN1(VAR1 *VAR2, unsigned short VAR3, uint8_t VAR4)
{
    int VAR5;
    char *VAR6;
    uint32_t VAR7 = 4096;
    uint32_t VAR8 = VAR7 / 2;
    uint32_t VAR9 = (VAR3 / 8 + 1) * 8;
    if (VAR3 * VAR10 > VAR8)
    {
        VAR8 = VAR3 * VAR10;
    }
    if (VAR8 + VAR9 > 4096)
    {
        VAR7 = VAR8 + VAR9;
    }
    if (VAR7 & (VAR7 - 1))
    {
        VAR7 = 1 << FUN2(VAR7);
    }
    VAR6 = FUN3("", VAR2->VAR6);
    FUN4(&VAR2->VAR11, FUN5(VAR2), VAR6, VAR7);
    FUN6(VAR6);
    VAR5 = FUN7(VAR2, VAR3, &VAR2->VAR11, VAR4, 0, &VAR2->VAR11, VAR4, VAR8, 0);
    if (VAR5)
    {
        return VAR5;
    }
    FUN8(VAR2, VAR4, VAR12, &VAR2->VAR11);
    return 0;
}