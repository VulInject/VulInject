static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (!VAR2->VAR6 || !VAR2->VAR7)
    {
        VAR2->VAR8 |= VAR9;
        return;
    }
    VAR4 = VAR2->VAR6 >> (VAR10 + VAR11 + VAR12);
    VAR5 = VAR2->VAR7 >> (VAR10 + VAR11 + VAR12);
    VAR2->VAR6 = 0;
    VAR2->VAR7 = 0;
    VAR2->VAR13[14] |= 0x40;
    for (VAR3 = VAR4; VAR3 <= VAR5; VAR3++)
    {
        if (FUN2(VAR3, VAR2->VAR14))
        {
            VAR2->VAR8 |= VAR15;
        }
    }
}