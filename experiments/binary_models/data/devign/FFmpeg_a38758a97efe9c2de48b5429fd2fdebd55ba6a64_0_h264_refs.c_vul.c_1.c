int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    if (VAR4->VAR7 == VAR8)
    {
        VAR9 *VAR10[32];
        int VAR11, VAR12;
        int VAR13[2];
        if (FUN2(VAR2))
            VAR11 = VAR2->VAR14->VAR15[VAR2->VAR16 == VAR17];
        else
            VAR11 = VAR2->VAR14->VAR18;
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR6 = FUN3(VAR10, VAR2->VAR19, VAR2->VAR20, VAR11, 1 ^ VAR12);
            VAR6 += FUN3(VAR10 + VAR6, VAR2->VAR19, VAR2->VAR20, VAR11, 0 ^ VAR12);
            FUN4(VAR6 <= 32);
            VAR6 = FUN5(VAR2->VAR21[VAR12], FUN6(VAR2->VAR21[0]), VAR10, VAR6, 0, VAR2->VAR16);
            VAR6 += FUN5(VAR2->VAR21[VAR12] + VAR6, FUN6(VAR2->VAR21[0]) - VAR6, VAR2->VAR22, 16, 1, VAR2->VAR16);
            FUN4(VAR6 <= 32);
            if (VAR6 < VAR4->VAR23[VAR12])
                memset(&VAR2->VAR21[VAR12][VAR6], 0, sizeof(VAR24) * (VAR4->VAR23[VAR12] - VAR6));
            VAR13[VAR12] = VAR6;
        }
        if (VAR13[0] == VAR13[1] && VAR13[1] > 1)
        {
            for (VAR5 = 0; VAR5 < VAR13[0] && VAR2->VAR21[0][VAR5].VAR25->VAR26.VAR27[0]->VAR28 == VAR2->VAR21[1][VAR5].VAR25->VAR26.VAR27[0]->VAR28; VAR5++)
                ;
            if (VAR5 == VAR13[0])
            {
                FUN7(VAR24, VAR2->VAR21[1][0], VAR2->VAR21[1][1]);
            }
        }
    }
    else
    {
        VAR6 = FUN5(VAR2->VAR21[0], FUN6(VAR2->VAR21[0]), VAR2->VAR19, VAR2->VAR20, 0, VAR2->VAR16);
        VAR6 += FUN5(VAR2->VAR21[0] + VAR6, FUN6(VAR2->VAR21[0]) - VAR6, VAR2->VAR22, 16, 1, VAR2->VAR16);
        FUN4(VAR6 <= 32);
        if (VAR6 < VAR4->VAR23[0])
            memset(&VAR2->VAR21[0][VAR6], 0, sizeof(VAR24) * (VAR4->VAR23[0] - VAR6));
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR23[0]; VAR5++)
    {
        FUN8(VAR2->VAR29, "", (VAR2->VAR21[0][VAR5].VAR25->VAR22 ? "" : ""), VAR2->VAR21[0][VAR5].VAR30, VAR2->VAR21[0][VAR5].VAR25->VAR26.VAR31[0]);
    }
    if (VAR4->VAR7 == VAR8)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR23[1]; VAR5++)
        {
            FUN8(VAR2->VAR29, "", (VAR2->VAR21[1][VAR5].VAR25->VAR22 ? "" : ""), VAR2->VAR21[1][VAR5].VAR30, VAR2->VAR21[1][VAR5].VAR25->VAR26.VAR31[0]);
        }
    }
    return 0;
}