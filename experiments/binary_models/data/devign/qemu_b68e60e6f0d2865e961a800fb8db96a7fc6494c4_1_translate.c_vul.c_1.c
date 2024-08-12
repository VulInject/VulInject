static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR3 = FUN2(VAR2->VAR6);
    VAR4 = FUN3(VAR2->VAR6);
    VAR5 = FUN4(VAR2->VAR6);
    if (VAR3 != VAR4 || VAR3 != VAR5)
    {
        if (VAR3 != VAR5)
            FUN5(VAR7[VAR4], VAR7[VAR3], VAR7[VAR5]);
        else
            FUN6(VAR7[VAR4], VAR7[VAR3]);
        if (FUN7(FUN8(VAR2->VAR6) != 0))
            FUN9(VAR2, VAR7[VAR4]);
    }
    else if (FUN7(FUN8(VAR2->VAR6) != 0))
    {
        FUN9(VAR2, VAR7[VAR3]);
    }
    else
    {
        int VAR8 = 0;
        switch (VAR3)
        {
        case 1:
            VAR8 = 2;
            break;
        case 6:
            VAR8 = 3;
            break;
        case 2:
            VAR8 = 4;
            break;
        case 31:
            if (!VAR2->VAR9)
            {
                VAR8 = 1;
            }
            break;
        case 5:
            if (!VAR2->VAR9)
            {
                VAR8 = 5;
            }
            break;
        case 3:
            if (!VAR2->VAR9)
            {
                VAR8 = 6;
            }
            break;
        case 7:
            if (VAR2->VAR10)
            {
                VAR8 = 7;
            }
            break;
        default:
            break;
        }
        if (VAR8)
        {
            TCGv VAR11 = FUN10();
            FUN11(VAR11, VAR12);
            FUN12(VAR11, VAR11, ~0x001C000000000000ULL);
            FUN13(VAR11, VAR11, ((VAR13)VAR8) << 50);
            FUN14(VAR12, VAR11);
            FUN15(VAR11);
        }
    }
}