static void FUN1(VAR1 *VAR2)
{
    unsigned VAR3[2];
    hwaddr VAR4;
    uint8_t VAR5[2048];
    VAR6 *VAR7;
    unsigned VAR8;
    int VAR9 = 0;
    if (!(VAR2->VAR10[VAR11] & VAR12))
    {
        return;
    }
    FUN2("");
    VAR7 = VAR5;
    VAR8 = 0;
    for (VAR9 = VAR2->VAR13 - 1; VAR9 >= 0; VAR9--)
    {
        VAR4 = VAR2->VAR14[VAR9];
        FUN2("" VAR15 "", VAR4);
        FUN3(VAR4, (VAR6 *)VAR3, sizeof(VAR3));
        while (FUN4(VAR3) == 0)
        {
            if (!(VAR2->VAR10[VAR11] & VAR12))
            {
                return;
            }
            FUN5(VAR3, VAR9);
            if ((FUN6(VAR3) == 0) || (FUN7(VAR3) == 0))
            {
                FUN2("", (unsigned)VAR4);
                break;
            }
            if (FUN7(VAR3) > sizeof(VAR5) - (VAR7 - VAR5))
            {
                FUN2(""
                         "",
                         (unsigned)VAR4, (unsigned)FUN7(VAR3), sizeof(VAR5) - (VAR7 - VAR5));
                break;
            }
            FUN3(FUN6(VAR3), VAR7, FUN7(VAR3));
            VAR7 += FUN7(VAR3);
            VAR8 += FUN7(VAR3);
            if (FUN8(VAR3))
            {
                unsigned VAR16[2];
                FUN3(VAR2->VAR14[VAR9], (VAR6 *)VAR16, sizeof(VAR16));
                FUN9(VAR16);
                FUN10(VAR2->VAR14[VAR9], (VAR6 *)VAR16, sizeof(VAR16));
                if (FUN11(VAR3))
                {
                    VAR2->VAR14[VAR9] = VAR2->VAR10[VAR17];
                }
                else
                {
                    VAR2->VAR14[VAR9] = VAR4 + 8;
                }
                FUN2("", VAR2->VAR14[VAR9]);
                VAR2->VAR10[VAR18] |= VAR19;
                VAR2->VAR10[VAR20] |= VAR21 & ~(VAR2->VAR10[VAR22]);
                if (VAR2->VAR13 > 1)
                {
                    VAR2->VAR10[VAR23 + VAR9] |= VAR21 & ~(VAR2->VAR10[VAR24 + VAR9]);
                }
                FUN12(VAR2);
                if (VAR2->VAR10[VAR25] & VAR26)
                {
                    FUN13(VAR5, VAR8);
                }
                FUN14(VAR2, VAR5, VAR8);
                if (VAR2->VAR27 || (VAR2->VAR10[VAR11] & VAR28))
                {
                    FUN15(FUN16(VAR2->VAR29), VAR5, VAR8);
                }
                else
                {
                    FUN17(FUN16(VAR2->VAR29), VAR5, VAR8);
                }
                VAR7 = VAR5;
                VAR8 = 0;
            }
            if (FUN11(VAR3))
            {
                FUN18(VAR3);
                VAR4 = VAR2->VAR10[VAR17];
            }
            else
            {
                VAR4 += 8;
            }
            FUN2("" VAR15 "", VAR4);
            FUN3(VAR4, (VAR6 *)VAR3, sizeof(VAR3));
        }
        if (FUN4(VAR3))
        {
            VAR2->VAR10[VAR18] |= VAR30;
            VAR2->VAR10[VAR20] |= VAR31 & ~(VAR2->VAR10[VAR22]);
            FUN12(VAR2);
        }
    }
}