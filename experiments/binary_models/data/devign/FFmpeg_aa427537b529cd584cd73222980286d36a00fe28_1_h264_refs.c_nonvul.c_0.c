int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int VAR7;
    if (VAR4->VAR8 == VAR9)
    {
        VAR10 *VAR11[32];
        int VAR12, VAR13;
        int VAR14[2];
        if (FUN2(VAR2))
            VAR12 = VAR2->VAR15->VAR16[VAR2->VAR17 == VAR18];
        else
            VAR12 = VAR2->VAR15->VAR19;
        for (VAR13 = 0; VAR13 < 2; VAR13++)
        {
            VAR6 = FUN3(VAR11, VAR2->VAR20, VAR2->VAR21, VAR12, 1 ^ VAR13);
            VAR6 += FUN3(VAR11 + VAR6, VAR2->VAR20, VAR2->VAR21, VAR12, 0 ^ VAR13);
            FUN4(VAR6 <= 32);
            VAR6 = FUN5(VAR2->VAR22[VAR13], FUN6(VAR2->VAR22[0]), VAR11, VAR6, 0, VAR2->VAR17);
            VAR6 += FUN5(VAR2->VAR22[VAR13] + VAR6, FUN6(VAR2->VAR22[0]) - VAR6, VAR2->VAR23, 16, 1, VAR2->VAR17);
            FUN4(VAR6 <= 32);
            if (VAR6 < VAR4->VAR24[VAR13])
                memset(&VAR2->VAR22[VAR13][VAR6], 0, sizeof(VAR25) * (VAR4->VAR24[VAR13] - VAR6));
            VAR14[VAR13] = VAR6;
        }
        if (VAR14[0] == VAR14[1] && VAR14[1] > 1)
        {
            for (VAR5 = 0; VAR5 < VAR14[0] && VAR2->VAR22[0][VAR5].VAR26->VAR27->VAR28[0]->VAR29 == VAR2->VAR22[1][VAR5].VAR26->VAR27->VAR28[0]->VAR29; VAR5++)
                ;
            if (VAR5 == VAR14[0])
            {
                FUN7(VAR25, VAR2->VAR22[1][0], VAR2->VAR22[1][1]);
            }
        }
    }
    else
    {
        VAR6 = FUN5(VAR2->VAR22[0], FUN6(VAR2->VAR22[0]), VAR2->VAR20, VAR2->VAR21, 0, VAR2->VAR17);
        VAR6 += FUN5(VAR2->VAR22[0] + VAR6, FUN6(VAR2->VAR22[0]) - VAR6, VAR2->VAR23, 16, 1, VAR2->VAR17);
        FUN4(VAR6 <= 32);
        if (VAR6 < VAR4->VAR24[0])
            memset(&VAR2->VAR22[0][VAR6], 0, sizeof(VAR25) * (VAR4->VAR24[0] - VAR6));
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR24[0]; VAR5++)
    {
        FUN8(VAR2->VAR30, "", VAR2->VAR22[0][VAR5].VAR26 ? (VAR2->VAR22[0][VAR5].VAR26->VAR23 ? "" : "") : "", VAR2->VAR22[0][VAR5].VAR31, VAR2->VAR22[0][VAR5].VAR26 ? VAR2->VAR22[0][VAR5].VAR26->VAR27->VAR32[0] : 0);
    }
    if (VAR4->VAR8 == VAR9)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR24[1]; VAR5++)
        {
            FUN8(VAR2->VAR30, "", VAR2->VAR22[1][VAR5].VAR26 ? (VAR2->VAR22[1][VAR5].VAR26->VAR23 ? "" : "") : "", VAR2->VAR22[1][VAR5].VAR31, VAR2->VAR22[1][VAR5].VAR26 ? VAR2->VAR22[1][VAR5].VAR26->VAR27->VAR32[0] : 0);
        }
    }
    for (VAR7 = 0; VAR7 < 1 + (VAR4->VAR8 == VAR9); VAR7++)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR24[VAR7]; VAR5++)
        {
            if (VAR2->VAR22[VAR7][VAR5].VAR26)
            {
                if (FUN9(VAR2, VAR2->VAR22[VAR7][VAR5].VAR26))
                {
                    FUN10(VAR2->VAR30, VAR33, "");
                    memset(&VAR2->VAR22[VAR7][VAR5], 0, sizeof(VAR2->VAR22[VAR7][VAR5]));
                }
            }
        }
    }
    return 0;
}