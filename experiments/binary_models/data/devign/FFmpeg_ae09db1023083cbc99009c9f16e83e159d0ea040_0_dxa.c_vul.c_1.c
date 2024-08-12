static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    uint32_t VAR9;
    uint8_t VAR10[VAR11], VAR12[768 + 4];
    int VAR13 = 0;
    if (!VAR6->VAR14 && VAR6->VAR15 && VAR6->VAR16)
    {
        VAR6->VAR14 = 1;
        FUN2(VAR2->VAR17, VAR6->VAR18, VAR19);
        VAR9 = FUN3(VAR6->VAR16, VAR6->VAR20);
        VAR8 = FUN4(VAR2->VAR17, VAR4, VAR9);
        VAR4->VAR21 = 1;
        if (VAR8 != VAR9)
            return FUN5(VAR22);
        VAR6->VAR16 -= VAR9;
        VAR6->VAR18 = FUN6(VAR2->VAR17);
        return 0;
    }
    FUN2(VAR2->VAR17, VAR6->VAR23, VAR19);
    while (!FUN7(VAR2->VAR17) && VAR6->VAR24)
    {
        FUN8(VAR2->VAR17, VAR10, 4);
        switch (FUN9(VAR10))
        {
        case FUN10('', '', '', ''):
            if (FUN11(VAR4, 4 + VAR13) < 0)
                return FUN5(VAR25);
            VAR4->VAR21 = 0;
            if (VAR13)
                memcpy(VAR4->VAR26, VAR12, VAR13);
            memcpy(VAR4->VAR26 + VAR13, VAR10, 4);
            VAR6->VAR24--;
            VAR6->VAR23 = FUN6(VAR2->VAR17);
            VAR6->VAR14 = 0;
            return 0;
        case FUN10('', '', '', ''):
            VAR13 = 768 + 4;
            memcpy(VAR12, VAR10, 4);
            FUN8(VAR2->VAR17, VAR12 + 4, 768);
            break;
        case FUN10('', '', '', ''):
            FUN8(VAR2->VAR17, VAR10 + 4, VAR11 - 4);
            VAR9 = FUN12(VAR10 + 5);
            if (VAR9 > 0xFFFFFF)
            {
                FUN13(VAR2, VAR27, "", VAR9);
                return VAR28;
            }
            if (FUN11(VAR4, VAR9 + VAR11 + VAR13) < 0)
                return FUN5(VAR25);
            memcpy(VAR4->VAR26 + VAR13, VAR10, VAR11);
            VAR8 = FUN8(VAR2->VAR17, VAR4->VAR26 + VAR11 + VAR13, VAR9);
            if (VAR8 != VAR9)
            {
                FUN14(VAR4);
                return FUN5(VAR22);
            }
            if (VAR13)
                memcpy(VAR4->VAR26, VAR12, VAR13);
            VAR4->VAR21 = 0;
            VAR6->VAR24--;
            VAR6->VAR23 = FUN6(VAR2->VAR17);
            VAR6->VAR14 = 0;
            return 0;
        default:
            FUN13(VAR2, VAR27, "", VAR10[0], VAR10[1], VAR10[2], VAR10[3]);
            return VAR28;
        }
    }
    return VAR29;
}