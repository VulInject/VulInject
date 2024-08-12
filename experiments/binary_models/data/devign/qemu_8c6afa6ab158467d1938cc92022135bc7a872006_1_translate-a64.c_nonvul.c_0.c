static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN2(VAR3, 16, 5);
    int VAR7 = FUN2(VAR3, 22, 2);
    bool VAR8 = FUN2(VAR3, 29, 1);
    bool VAR9 = FUN2(VAR3, 30, 1);
    TCGv_i64 VAR10, VAR11, VAR12[2];
    int VAR13;
    if (!FUN3(VAR2))
    {
        return;
    }
    VAR10 = FUN4();
    VAR11 = FUN4();
    VAR12[0] = FUN4();
    VAR12[1] = FUN4();
    for (VAR13 = 0; VAR13 < (VAR9 ? 2 : 1); VAR13++)
    {
        FUN5(VAR2, VAR10, VAR5, VAR13, VAR14);
        FUN5(VAR2, VAR11, VAR6, VAR13, VAR14);
        if (!VAR8)
        {
            switch (VAR7)
            {
            case 0:
                FUN6(VAR12[VAR13], VAR10, VAR11);
                break;
            case 1:
                FUN7(VAR12[VAR13], VAR10, VAR11);
                break;
            case 2:
                FUN8(VAR12[VAR13], VAR10, VAR11);
                break;
            case 3:
                FUN9(VAR12[VAR13], VAR10, VAR11);
                break;
            }
        }
        else
        {
            if (VAR7 != 0)
            {
                FUN5(VAR2, VAR12[VAR13], VAR4, VAR13, VAR14);
            }
            switch (VAR7)
            {
            case 0:
                FUN10(VAR12[VAR13], VAR10, VAR11);
                break;
            case 1:
                FUN10(VAR10, VAR10, VAR11);
                FUN6(VAR10, VAR10, VAR12[VAR13]);
                FUN10(VAR12[VAR13], VAR11, VAR10);
                break;
            case 2:
                FUN10(VAR10, VAR10, VAR12[VAR13]);
                FUN6(VAR10, VAR10, VAR11);
                FUN10(VAR12[VAR13], VAR12[VAR13], VAR10);
                break;
            case 3:
                FUN10(VAR10, VAR10, VAR12[VAR13]);
                FUN7(VAR10, VAR10, VAR11);
                FUN10(VAR12[VAR13], VAR12[VAR13], VAR10);
                break;
            }
        }
    }
    FUN11(VAR2, VAR12[0], VAR4, 0, VAR14);
    if (!VAR9)
    {
        FUN12(VAR12[1], 0);
    }
    FUN11(VAR2, VAR12[1], VAR4, 1, VAR14);
    FUN13(VAR10);
    FUN13(VAR11);
    FUN13(VAR12[0]);
    FUN13(VAR12[1]);
}