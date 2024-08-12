static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    int64_t VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    uint8_t VAR15[12];
    if (FUN2(VAR4, VAR16) < 0)
        return FUN3(VAR17);
    VAR4->VAR12 = FUN4(VAR2->VAR18);
    VAR8 = FUN5(VAR2, VAR4->VAR19, VAR6->VAR20);
    if (VAR8 < 0)
    {
        FUN6(VAR4);
        return VAR8;
    }
    if (VAR6->VAR21)
    {
        if (FUN7(&VAR10, &VAR13, VAR4->VAR19) == 0)
        {
            VAR12 = FUN4(VAR2->VAR18);
            for (VAR9 = 0; VAR9 < VAR22; VAR9++)
            {
                FUN8(VAR2->VAR18, VAR12 + VAR9 * VAR6->VAR20, VAR23);
                FUN9(VAR2->VAR18, VAR15, 12);
                if (FUN7(&VAR11, &VAR14, VAR15) == 0)
                {
                    VAR6->VAR24 = ((VAR11 - VAR10) * 300 + (VAR14 - VAR13)) / (VAR9 + 1);
                    break;
                }
            }
            FUN8(VAR2->VAR18, VAR12, VAR23);
            VAR6->VAR25 = VAR10 * 300 + VAR13;
        }
        VAR4->VAR26 = VAR6->VAR25;
        VAR4->VAR27 = VAR6->VAR24;
        VAR6->VAR25 += VAR6->VAR24;
    }
    VAR4->VAR28 = 0;
    return 0;
}