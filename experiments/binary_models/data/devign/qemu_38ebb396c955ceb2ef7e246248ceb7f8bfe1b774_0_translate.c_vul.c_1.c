static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7 = (VAR3 == VAR8 ? 0x3f : 0x1f);
    int VAR9;
    if (VAR4 == VAR10)
    {
        FUN2(VAR3 + VAR2->VAR11);
    }
    else
    {
        FUN3(VAR3, 0, VAR4);
    }
    VAR5 &= VAR7;
    if (VAR5 != 0)
    {
        switch (VAR3)
        {
        case VAR12:
            FUN4(VAR13, VAR14[0]);
            if (VAR6)
            {
                FUN5(VAR13, VAR13, VAR5);
            }
            else
            {
                FUN6(VAR13, VAR13, VAR5);
            }
            FUN7(VAR14[0], VAR13);
            break;
        default:
            if (VAR6)
            {
                FUN8(VAR14[0], VAR14[0], VAR5);
            }
            else
            {
                FUN9(VAR14[0], VAR14[0], VAR5);
            }
            break;
        case VAR15:
            VAR7 = 7;
            goto VAR16;
        case VAR17:
            VAR7 = 15;
        VAR16:
            VAR9 = VAR5 & VAR7;
            if (VAR6)
            {
                VAR9 = VAR7 + 1 - VAR9;
            }
            FUN10(VAR3, VAR14[0]);
            FUN11(VAR18, VAR14[0], VAR9);
            FUN12(VAR14[0], VAR14[0], VAR7 + 1 - VAR9);
            FUN13(VAR14[0], VAR14[0], VAR18);
            break;
        }
    }
    if (VAR4 == VAR10)
    {
        FUN14(VAR3 + VAR2->VAR11);
    }
    else
    {
        FUN15(VAR3, VAR4);
    }
    if (VAR5 != 0)
    {
        FUN16(VAR2);
        if (VAR6)
        {
            FUN12(VAR19, VAR14[0], VAR7 - 1);
            FUN12(VAR20, VAR14[0], VAR7);
        }
        else
        {
            FUN12(VAR19, VAR14[0], VAR7);
            FUN17(VAR20, VAR14[0], 1);
        }
        FUN17(VAR19, VAR19, 1);
        FUN18(VAR19, VAR19, VAR20);
        FUN19(VAR2, VAR21);
    }