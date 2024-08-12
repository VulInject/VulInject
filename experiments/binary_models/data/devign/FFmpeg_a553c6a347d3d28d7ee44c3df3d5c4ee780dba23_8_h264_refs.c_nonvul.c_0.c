int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (VAR2->VAR5 == VAR6)
    {
        VAR7 *VAR8[32];
        int VAR9, VAR10;
        int VAR11[2];
        if (FUN2(VAR2))
            VAR9 = VAR2->VAR12->VAR13[VAR2->VAR14 == VAR15];
        else
            VAR9 = VAR2->VAR12->VAR16;
        for (VAR10 = 0; VAR10 < 2; VAR10++)
        {
            VAR4 = FUN3(VAR8, VAR2->VAR17, VAR2->VAR18, VAR9, 1 ^ VAR10);
            VAR4 += FUN3(VAR8 + VAR4, VAR2->VAR17, VAR2->VAR18, VAR9, 0 ^ VAR10);
            assert(VAR4 <= 32);
            VAR4 = FUN4(VAR2->VAR19[VAR10], VAR8, VAR4, 0, VAR2->VAR14);
            VAR4 += FUN4(VAR2->VAR19[VAR10] + VAR4, VAR2->VAR20, 16, 1, VAR2->VAR14);
            assert(VAR4 <= 32);
            if (VAR4 < VAR2->VAR21[VAR10])
                memset(&VAR2->VAR19[VAR10][VAR4], 0, sizeof(VAR7) * (VAR2->VAR21[VAR10] - VAR4));
            VAR11[VAR10] = VAR4;
        }
        if (VAR11[0] == VAR11[1] && VAR11[1] > 1)
        {
            for (VAR3 = 0; VAR3 < VAR11[0] && VAR2->VAR19[0][VAR3].VAR22.VAR23[0]->VAR24 == VAR2->VAR19[1][VAR3].VAR22.VAR23[0]->VAR24; VAR3++)
                ;
            if (VAR3 == VAR11[0])
            {
                Picture VAR25;
                FUN5(&VAR25, &VAR2->VAR19[1][0]);
                FUN5(&VAR2->VAR19[1][0], &VAR2->VAR19[1][1]);
                FUN5(&VAR2->VAR19[1][1], &VAR25);
            }
        }
    }
    else
    {
        VAR4 = FUN4(VAR2->VAR19[0], VAR2->VAR17, VAR2->VAR18, 0, VAR2->VAR14);
        VAR4 += FUN4(VAR2->VAR19[0] + VAR4, VAR2->VAR20, 16, 1, VAR2->VAR14);
        assert(VAR4 <= 32);
        if (VAR4 < VAR2->VAR21[0])
            memset(&VAR2->VAR19[0][VAR4], 0, sizeof(VAR7) * (VAR2->VAR21[0] - VAR4));
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR21[0]; VAR3++)
    {
        FUN6(VAR2->VAR26, "", (VAR2->VAR19[0][VAR3].VAR20 ? "" : ""), VAR2->VAR19[0][VAR3].VAR27, VAR2->VAR19[0][VAR3].VAR22.VAR28[0]);
    }
    if (VAR2->VAR5 == VAR6)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR21[1]; VAR3++)
        {
            FUN6(VAR2->VAR26, "", (VAR2->VAR19[1][VAR3].VAR20 ? "" : ""), VAR2->VAR19[1][VAR3].VAR27, VAR2->VAR19[1][VAR3].VAR22.VAR28[0]);
        }
    }
    return 0;
}