static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10;
    int VAR11;
    int VAR12 = VAR6->VAR12;
    int VAR13 = VAR6->VAR13;
    FUN2(VAR9, 8);
    VAR6->VAR14 = 0;
    switch (FUN3(VAR9, 2))
    {
    case 0:
        VAR4->VAR15 = VAR16;
        break;
    case 2:
        VAR6->VAR14 = 1;
    case 1:
        VAR4->VAR15 = VAR17;
        break;
    default:
        FUN4(VAR2, VAR18, "");
        return VAR19;
    }
    if (VAR4->VAR15 == VAR16)
    {
        if (VAR6->VAR20 == 0x50 || VAR6->VAR20 == 0x60)
        {
            int VAR21 = FUN3(VAR9, 16);
            VAR21 = FUN5(VAR9->VAR22, VAR9->VAR23 >> 3, VAR21);
            FUN6(VAR2, "", (VAR21 == 0) ? "" : "", VAR21);
        }
        if ((VAR6->VAR20 ^ 0x10) >= 0x50)
        {
            uint8_t VAR24[257];
            FUN7(VAR9, VAR24);
            FUN4(VAR2, VAR25, "", ((char *)VAR24) + 1);
        }
        FUN2(VAR9, 2);
        FUN2(VAR9, 2);
        FUN8(VAR9);
        VAR11 = FUN3(VAR9, 3);
        if (VAR11 == 7)
        {
            VAR12 = FUN3(VAR9, 12);
            VAR13 = FUN3(VAR9, 12);
            if (!VAR12 || !VAR13)
                return VAR19;
        }
        else
        {
            VAR12 = VAR26[VAR11][0];
            VAR13 = VAR26[VAR11][1];
        }
    }
    if (FUN9(VAR9))
    {
        FUN8(VAR9);
        FUN8(VAR9);
        if (FUN3(VAR9, 2) != 0)
            return VAR19;
    }
    if (FUN9(VAR9))
    {
        FUN8(VAR9);
        FUN2(VAR9, 4);
        FUN8(VAR9);
        FUN2(VAR9, 2);
        if (FUN10(VAR9) < 0)
            return VAR19;
    }
    VAR6->VAR12 = VAR12;
    VAR6->VAR13 = VAR13;
    return 0;
}