static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    frametype_t VAR7;
    if (!VAR4 && !VAR6)
        return 1;
    while (!FUN2(VAR2))
    {
        int VAR8, VAR9;
        VAR7 = FUN3(VAR2);
        switch (VAR7)
        {
        case VAR10:
            VAR9 = FUN3(VAR2);
            FUN4(VAR2, 6);
            VAR8 = FUN5(FUN6(VAR2));
            if (VAR9 == '')
            {
                VAR4->VAR11->VAR12 = VAR8;
                VAR4->VAR11->VAR13 = FUN7(VAR8);
                FUN8(VAR2, VAR4->VAR11->VAR13, VAR8);
                VAR8 = 0;
                if (!VAR6)
                    return 1;
            }
            break;
        case VAR14:
            FUN4(VAR2, 7);
            VAR8 = FUN5(FUN6(VAR2));
            if (VAR8 != 128 * 4)
                break;
            FUN6(VAR2);
            if (VAR4)
            {
                VAR4->VAR11->VAR15 = FUN6(VAR2);
                VAR4->VAR11->VAR16 = FUN9(VAR17, VAR4->VAR11->VAR15);
            }
            else
                FUN4(VAR2, 4);
            if (VAR5)
            {
                VAR5->VAR11->VAR15 = FUN6(VAR2);
                VAR5->VAR11->VAR18 = FUN6(VAR2);
                VAR5->VAR11->VAR19 = FUN6(VAR2);
                VAR5->VAR11->VAR20 = FUN6(VAR2);
                VAR5->VAR11->VAR16 = FUN10(VAR5->VAR11->VAR15, VAR5->VAR11->VAR19);
            }
            else
                FUN4(VAR2, 4 * 4);
            VAR8 -= 6 * 4;
            FUN4(VAR2, VAR8);
            return 1;
        case VAR21:
            VAR8 = 11;
            break;
        default:
            FUN4(VAR2, 7);
            VAR8 = FUN5(FUN6(VAR2));
            break;
        }
        FUN4(VAR2, VAR8);
    }
    return 0;
}