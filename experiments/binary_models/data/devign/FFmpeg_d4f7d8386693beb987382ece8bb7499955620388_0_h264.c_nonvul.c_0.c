static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    if (VAR2->VAR7 == VAR8)
    {
        VAR9 *VAR10[32];
        int VAR11, VAR12;
        int VAR13[2];
        if (VAR14)
            VAR11 = VAR4->VAR15->VAR16[VAR4->VAR17 == VAR18];
        else
            VAR11 = VAR4->VAR15->VAR19;
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR6 = FUN2(VAR10, VAR2->VAR20, VAR2->VAR21, VAR11, 1 ^ VAR12);
            VAR6 += FUN2(VAR10 + VAR6, VAR2->VAR20, VAR2->VAR21, VAR11, 0 ^ VAR12);
            assert(VAR6 <= 32);
            VAR6 = FUN3(VAR2->VAR22[VAR12], VAR10, VAR6, 0, VAR4->VAR17);
            VAR6 += FUN3(VAR2->VAR22[VAR12] + VAR6, VAR2->VAR23, 16, 1, VAR4->VAR17);
            assert(VAR6 <= 32);
            if (VAR6 < VAR2->VAR24[VAR12])
                memset(&VAR2->VAR22[VAR12][VAR6], 0, sizeof(VAR9) * (VAR2->VAR24[VAR12] - VAR6));
            VAR13[VAR12] = VAR6;
        }
        if (VAR13[0] == VAR13[1] && VAR13[1] > 1)
        {
            for (VAR5 = 0; VAR2->VAR22[0][VAR5].VAR25[0] == VAR2->VAR22[1][VAR5].VAR25[0] && VAR5 < VAR13[0]; VAR5++)
                ;
            if (VAR5 == VAR13[0])
                FUN4(VAR9, VAR2->VAR22[1][0], VAR2->VAR22[1][1]);
        }
    }
    else
    {
        VAR6 = FUN3(VAR2->VAR22[0], VAR2->VAR20, VAR2->VAR21, 0, VAR4->VAR17);
        VAR6 += FUN3(VAR2->VAR22[0] + VAR6, VAR2->VAR23, 16, 1, VAR4->VAR17);
        assert(VAR6 <= 32);
        if (VAR6 < VAR2->VAR24[0])
            memset(&VAR2->VAR22[0][VAR6], 0, sizeof(VAR9) * (VAR2->VAR24[0] - VAR6));
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR24[0]; VAR5++)
    {
        FUN5(VAR2->VAR4.VAR26, "", (VAR2->VAR22[0][VAR5].VAR23 ? "" : ""), VAR2->VAR22[0][VAR5].VAR27, VAR2->VAR22[0][VAR5].VAR25[0]);
    }
    if (VAR2->VAR7 == VAR8)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR24[1]; VAR5++)
        {
            FUN5(VAR2->VAR4.VAR26, "", (VAR2->VAR22[1][VAR5].VAR23 ? "" : ""), VAR2->VAR22[1][VAR5].VAR27, VAR2->VAR22[1][VAR5].VAR25[0]);
        }
    }
    return 0;
}