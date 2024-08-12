static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    int64_t VAR10, VAR11, VAR12;
    int VAR13, VAR14;
    uint8_t VAR15[12];
    VAR16 *VAR17;
    if (FUN2(VAR4, VAR18) < 0)
        return FUN3(VAR19);
    VAR4->VAR12 = FUN4(VAR2->VAR20);
    VAR8 = FUN5(VAR2, VAR4->VAR17, VAR6->VAR21, &VAR17);
    if (VAR8 < 0)
    {
        FUN6(VAR4);
        return VAR8;
    }
    if (VAR17 != VAR4->VAR17)
        memcpy(VAR4->VAR17, VAR17, VAR6->VAR21);
    FUN7(VAR2, VAR6->VAR21);
    if (VAR6->VAR22)
    {
        if (FUN8(&VAR10, &VAR13, VAR4->VAR17) == 0)
        {
            VAR12 = FUN4(VAR2->VAR20);
            for (VAR9 = 0; VAR9 < VAR23; VAR9++)
            {
                FUN9(VAR2->VAR20, VAR12 + VAR9 * VAR6->VAR21, VAR24);
                FUN10(VAR2->VAR20, VAR15, 12);
                if (FUN8(&VAR11, &VAR14, VAR15) == 0)
                {
                    VAR6->VAR25 = ((VAR11 - VAR10) * 300 + (VAR14 - VAR13)) / (VAR9 + 1);
                    break;
                }
            }
            FUN9(VAR2->VAR20, VAR12, VAR24);
            VAR6->VAR26 = VAR10 * 300 + VAR13;
        }
        VAR4->VAR27 = VAR6->VAR26;
        VAR4->VAR28 = VAR6->VAR25;
        VAR6->VAR26 += VAR6->VAR25;
    }
    VAR4->VAR29 = 0;
    return 0;
}