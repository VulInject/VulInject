int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11;
    if (!VAR4)
    {
        VAR4 = FUN2(VAR2, VAR5);
        assert(VAR4);
    }
    else
    {
        for (VAR10 = VAR4; VAR10 < VAR4 + VAR5; VAR10++)
        {
            VAR11 = FUN3(VAR2, VAR10);
            if (VAR11)
            {
                FUN4(VAR7, ""
                                 ""
                                 "",
                           FUN5(VAR2), FUN6(VAR2), FUN7(VAR2->VAR12), FUN8(VAR2->VAR12), VAR3, VAR4, VAR11, VAR10);
                return -VAR13;
            }
        }
    }
    VAR9 = VAR2->VAR9 + VAR4;
    VAR9[VAR14] = VAR3;
    VAR9[VAR15] = VAR2->VAR9[VAR16];
    VAR2->VAR9[VAR16] = VAR4;
    VAR2->VAR9[VAR17] |= VAR18;
    memset(VAR2->VAR19 + VAR4, 0xFF, FUN9(VAR5, 4));
    memset(VAR2->VAR20 + VAR4, 0, VAR5);
    memset(VAR2->VAR21 + VAR4, 0xFF, VAR5);
    return VAR4;
}