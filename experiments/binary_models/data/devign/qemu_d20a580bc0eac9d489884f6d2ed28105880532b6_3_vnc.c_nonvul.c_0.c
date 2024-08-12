static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    static uint32_t VAR6[VAR7] = {
        [VAR8] = 0x01,
        [VAR9] = 0x02,
        [VAR10] = 0x04,
        [VAR11] = 0x08,
        [VAR12] = 0x10,
    };
    VAR13 *VAR14 = VAR2->VAR15->VAR16.VAR14;
    int VAR17 = FUN2(VAR2->VAR15->VAR18);
    int VAR19 = FUN3(VAR2->VAR15->VAR18);
    if (VAR2->VAR20 != VAR3)
    {
        FUN4(VAR14, VAR6, VAR2->VAR20, VAR3);
        VAR2->VAR20 = VAR3;
    }
    if (VAR2->VAR21)
    {
        FUN5(VAR14, VAR22, VAR4, VAR17);
        FUN5(VAR14, VAR23, VAR5, VAR19);
    }
    else if (FUN6(VAR2, VAR24))
    {
        FUN7(VAR14, VAR22, VAR4 - 0x7FFF);
        FUN7(VAR14, VAR23, VAR5 - 0x7FFF);
    }
    else
    {
        if (VAR2->VAR25 != -1)
        {
            FUN7(VAR14, VAR22, VAR4 - VAR2->VAR25);
            FUN7(VAR14, VAR23, VAR5 - VAR2->VAR26);
        }
        VAR2->VAR25 = VAR4;
        VAR2->VAR26 = VAR5;
    }
    FUN8();
}