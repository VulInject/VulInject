int FUN1(VAR1 *VAR2)
{
    while (FUN2(&VAR2->VAR3) > 16)
    {
        int VAR4 = 0;
        int VAR5 = 0;
        int VAR6 = 0;
        int VAR7 = 0;
        while (FUN2(&VAR2->VAR3) >= 8 && (VAR7 = FUN3(&VAR2->VAR3, 8)) == 255)
        {
            VAR5 += 255;
        }
        VAR5 += VAR7;
        VAR7 = 0;
        while (FUN2(&VAR2->VAR3) >= 8 && (VAR7 = FUN3(&VAR2->VAR3, 8)) == 255)
        {
            VAR4 += 255;
        }
        VAR4 += VAR7;
        if (VAR4 > FUN2(&VAR2->VAR3) / 8)
        {
            FUN4(VAR2->VAR8, VAR9, "", VAR5, FUN2(&VAR2->VAR3));
            return VAR10;
        }
        switch (VAR5)
        {
        case VAR11:
            VAR6 = FUN5(VAR2);
            break;
        case VAR12:
            VAR6 = FUN6(VAR2, VAR4);
            break;
        case VAR13:
            VAR6 = FUN7(VAR2);
            break;
        case VAR14:
            VAR6 = FUN8(VAR2);
            break;
        case VAR15:
            VAR6 = FUN9(VAR2);
            break;
        case VAR16:
            VAR6 = FUN10(VAR2);
            break;
        default:
            FUN4(VAR2->VAR8, VAR17, "", VAR5);
            FUN11(&VAR2->VAR3, 8 * VAR4);
        }
        if (VAR6 < 0)
            return VAR6;
        FUN12(&VAR2->VAR3);
    }
    return 0;
}