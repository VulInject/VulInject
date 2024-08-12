int FUN1(VAR1 *VAR2)
{
    while (FUN2(&VAR2->VAR3) > 16)
    {
        int VAR4, VAR5;
        VAR5 = 0;
        do
        {
            if (FUN2(&VAR2->VAR3) < 8)
                return VAR6;
            VAR5 += FUN3(&VAR2->VAR3, 8);
        } while (FUN4(&VAR2->VAR3, 8) == 255);
        VAR4 = 0;
        do
        {
            if (FUN2(&VAR2->VAR3) < 8)
                return VAR6;
            VAR4 += FUN3(&VAR2->VAR3, 8);
        } while (FUN4(&VAR2->VAR3, 8) == 255);
        if (VAR2->VAR7->VAR8 & VAR9)
            FUN5(VAR2->VAR7, VAR10, "", VAR5, VAR4);
        switch (VAR5)
        {
        case VAR11:
            if (FUN6(VAR2) < 0)
                return -1;
            break;
        case VAR12:
            if (FUN7(VAR2, VAR4) < 0)
                return -1;
            break;
        case VAR13:
            if (FUN8(VAR2, VAR4) < 0)
                return -1;
            break;
        case VAR14:
            if (FUN9(VAR2) < 0)
                return -1;
            break;
        case VAR15:
            if (FUN10(VAR2) < 0)
                return -1;
            break;
        case VAR16:
            if (FUN11(VAR2, VAR4) < 0)
                return -1;
        default:
            FUN12(&VAR2->VAR3, 8 * VAR4);
        }
        FUN13(&VAR2->VAR3);
    }
    return 0;
}