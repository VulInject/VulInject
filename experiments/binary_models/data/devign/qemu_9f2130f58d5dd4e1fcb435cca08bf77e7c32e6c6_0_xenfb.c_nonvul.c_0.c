static void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2->VAR9);
    int VAR10, VAR11 = 0;
    int VAR12 = FUN3(VAR8);
    int VAR13 = FUN4(VAR8);
    VAR14 *VAR15 = FUN5(VAR8);
    if (!FUN6(VAR8))
    {
        switch (VAR2->VAR16)
        {
        case 8:
            if (VAR12 == 16)
            {
                FUN7(VAR14, VAR17, 3, 3, 2, 5, 6, 5);
            }
            else if (VAR12 == 32)
            {
                FUN7(VAR14, VAR18, 3, 3, 2, 8, 8, 8);
            }
            else
            {
                VAR11 = 1;
            }
            break;
        case 24:
            if (VAR12 == 16)
            {
                FUN7(VAR18, VAR17, 8, 8, 8, 5, 6, 5);
            }
            else if (VAR12 == 32)
            {
                FUN7(VAR18, VAR18, 8, 8, 8, 8, 8, 8);
            }
            else
            {
                VAR11 = 1;
            }
            break;
        default:
            VAR11 = 1;
        }
    }
    if (VAR11)
        FUN8(&VAR2->VAR19.VAR20, 0, "", VAR21, VAR2->VAR16, VAR12);
    FUN9(VAR2->VAR9, VAR3, VAR4, VAR5, VAR6);
}