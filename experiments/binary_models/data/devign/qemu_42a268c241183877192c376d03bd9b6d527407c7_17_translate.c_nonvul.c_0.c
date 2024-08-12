static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8)
{
    TCGv VAR9, VAR10;
    VAR9 = FUN2();
    VAR10 = FUN2();
    switch (VAR4 & 0x0D)
    {
    case 0x05:
        FUN3(VAR9, VAR11[VAR5]);
        FUN4(VAR10, VAR11[VAR6], 16);
        FUN3(VAR10, VAR10);
        break;
    case 0x04:
        FUN5(VAR9, VAR11[VAR5]);
        FUN6(VAR10, VAR11[VAR6], 16);
        FUN5(VAR10, VAR10);
        break;
    case 0x01:
        FUN4(VAR9, VAR11[VAR5], 16);
        FUN3(VAR9, VAR9);
        FUN4(VAR10, VAR11[VAR6], 16);
        FUN3(VAR10, VAR10);
        break;
    case 0x00:
        FUN6(VAR9, VAR11[VAR5], 16);
        FUN5(VAR9, VAR9);
        FUN6(VAR10, VAR11[VAR6], 16);
        FUN5(VAR10, VAR10);
        break;
    case 0x0D:
        FUN3(VAR9, VAR11[VAR5]);
        FUN3(VAR10, VAR11[VAR6]);
        break;
    case 0x0C:
        FUN5(VAR9, VAR11[VAR5]);
        FUN5(VAR10, VAR11[VAR6]);
        break;
    }
    if (VAR3 & 0x04)
    {
        FUN7(VAR10, VAR9, VAR10);
        if (VAR3 & 0x02)
        {
            FUN8(VAR9, VAR11[VAR7], VAR10);
        }
        else
        {
            FUN9(VAR9, VAR11[VAR7], VAR10);
        }
        if (VAR4 & 0x12)
        {
            VAR12 *VAR13 = FUN10();
            if (VAR4 & 0x10)
            {
                FUN11(VAR14, 0);
            }
            if (VAR4 & 0x01)
            {
                FUN12(VAR10, VAR11[VAR7], VAR10);
                FUN13(VAR15, VAR10, 0, VAR13);
                FUN12(VAR10, VAR11[VAR7], VAR9);
                FUN13(VAR16, VAR10, 0, VAR13);
                if (VAR4 & 0x02)
                {
                    FUN4(VAR9, VAR11[VAR7], 31);
                    FUN14(VAR9, VAR9, 0x7fffffff);
                }
            }
            else
            {
                FUN15(VAR17, VAR9, VAR10, VAR13);
                if (VAR4 & 0x02)
                {
                    FUN11(VAR9, VAR18);
                }
            }
            if (VAR4 & 0x10)
            {
                FUN11(VAR14, 1);
                FUN11(VAR19, 1);
            }
            FUN16(VAR13);
            FUN17(VAR11[VAR7], VAR9);
        }
    }
    else
    {
        FUN7(VAR11[VAR7], VAR9, VAR10);
    }
    FUN18(VAR9);
    FUN18(VAR10);
    if (FUN19(VAR8) != 0)
    {
        FUN20(VAR2, VAR11[VAR7]);
    }
}