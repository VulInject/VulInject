static int FUN1(VAR1 *VAR2, char *VAR3, size_t VAR4)
{
    int VAR5;
    uint16_t VAR6;
    switch (VAR3[0])
    {
    case 0:
        if (VAR4 == 1)
            return 20;
        FUN2(VAR2, FUN3(VAR3, 4), FUN3(VAR3, 5), FUN3(VAR3, 6), FUN3(VAR3, 7), FUN4(VAR3, 8), FUN4(VAR3, 10), FUN4(VAR3, 12), FUN3(VAR3, 14), FUN3(VAR3, 15), FUN3(VAR3, 16));
        break;
    case 2:
        if (VAR4 == 1)
            return 4;
        if (VAR4 == 4)
            return 4 + (FUN4(VAR3, 2) * 4);
        VAR6 = FUN4(VAR3, 2);
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            int32_t VAR7 = FUN5(VAR3, 4 + (VAR5 * 4));
            memcpy(VAR3 + 4 + (VAR5 * 4), &VAR7, sizeof(VAR7));
        }
        FUN6(VAR2, (VAR8 *)(VAR3 + 4), VAR6);
        break;
    case 3:
        if (VAR4 == 1)
            return 10;
        FUN7(VAR2, FUN3(VAR3, 1), FUN4(VAR3, 2), FUN4(VAR3, 4), FUN4(VAR3, 6), FUN4(VAR3, 8));
        break;
    case 4:
        if (VAR4 == 1)
            return 8;
        FUN8(VAR2, FUN3(VAR3, 1), FUN9(VAR3, 4));
        break;
    case 5:
        if (VAR4 == 1)
            return 6;
        FUN10(VAR2, FUN3(VAR3, 1), FUN4(VAR3, 2), FUN4(VAR3, 4));
        break;
    case 6:
        if (VAR4 == 1)
            return 8;
        if (VAR4 == 8)
        {
            uint32_t VAR9 = FUN9(VAR3, 4);
            if (VAR9 > 0)
                return 8 + VAR9;
        }
        FUN11(VAR2, FUN9(VAR3, 4), VAR3 + 8);
        break;
    default:
        FUN12("", VAR3[0]);
        FUN13(VAR2);
        break;
    }
    FUN14(VAR2, VAR10, 1);
    return 0;
}