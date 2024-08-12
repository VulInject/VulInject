static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int **VAR5, int *VAR6, int VAR7)
{
    int VAR8;
    HuffContext VAR9;
    HuffContext VAR10, VAR11;
    VLC VAR12[2] = {{0}};
    int VAR13[3];
    DBCtx VAR14;
    int VAR15 = 0;
    if (VAR7 >= VAR16 >> 4)
    {
        FUN2(VAR2->VAR17, VAR18, "");
        return VAR19;
    }
    VAR10.VAR20 = 256;
    VAR10.VAR21 = 0;
    VAR10.VAR22 = 0;
    VAR10.VAR23 = FUN3(256 * 4);
    VAR10.VAR24 = FUN3(256 * sizeof(int));
    VAR10.VAR25 = FUN3(256 * sizeof(int));
    VAR11.VAR20 = 256;
    VAR11.VAR21 = 0;
    VAR11.VAR22 = 0;
    VAR11.VAR23 = FUN3(256 * 4);
    VAR11.VAR24 = FUN3(256 * sizeof(int));
    VAR11.VAR25 = FUN3(256 * sizeof(int));
    if (FUN4(VAR4))
    {
        VAR8 = FUN5(VAR4, &VAR10, 0, 0);
        if (VAR8 < 0)
            return VAR8;
        FUN6(VAR4);
        if (VAR10.VAR22 > 1)
        {
            VAR8 = FUN7(&VAR12[0], VAR26, VAR10.VAR20, VAR10.VAR24, sizeof(int), sizeof(int), VAR10.VAR23, sizeof(VAR27), sizeof(VAR27), VAR28);
            if (VAR8 < 0)
            {
                FUN2(VAR2->VAR17, VAR18, "");
                return VAR19;
            }
        }
    }
    if (!VAR12[0].VAR29)
    {
        FUN2(VAR2->VAR17, VAR18, "");
    }
    if (FUN4(VAR4))
    {
        VAR8 = FUN5(VAR4, &VAR11, 0, 0);
        if (VAR8 < 0)
            return VAR8;
        FUN6(VAR4);
        if (VAR11.VAR22 > 1)
        {
            VAR8 = FUN7(&VAR12[1], VAR26, VAR11.VAR20, VAR11.VAR24, sizeof(int), sizeof(int), VAR11.VAR23, sizeof(VAR27), sizeof(VAR27), VAR28);
            if (VAR8 < 0)
            {
                FUN2(VAR2->VAR17, VAR18, "");
                return VAR19;
            }
        }
    }
    if (!VAR12[1].VAR29)
    {
        FUN2(VAR2->VAR17, VAR18, "");
    }
    VAR13[0] = FUN8(VAR4, 16);
    VAR13[1] = FUN8(VAR4, 16);
    VAR13[2] = FUN8(VAR4, 16);
    VAR6[0] = VAR6[1] = VAR6[2] = -1;
    VAR14.VAR13[0] = VAR13[0];
    VAR14.VAR13[1] = VAR13[1];
    VAR14.VAR13[2] = VAR13[2];
    VAR14.VAR30 = &VAR12[0];
    VAR14.VAR31 = &VAR12[1];
    VAR14.VAR32 = VAR10.VAR25;
    VAR14.VAR33 = VAR11.VAR25;
    VAR14.VAR6 = VAR6;
    VAR9.VAR20 = ((VAR7 + 3) >> 2) + 3;
    VAR9.VAR21 = 0;
    VAR9.VAR22 = 0;
    VAR9.VAR25 = FUN3(VAR9.VAR20 * sizeof(int));
    if (FUN9(VAR4, &VAR9, &VAR14) < 0)
        VAR15 = -1;
    FUN6(VAR4);
    if (VAR14.VAR6[0] == -1)
        VAR14.VAR6[0] = VAR9.VAR22++;
    if (VAR14.VAR6[1] == -1)
        VAR14.VAR6[1] = VAR9.VAR22++;
    if (VAR14.VAR6[2] == -1)
        VAR14.VAR6[2] = VAR9.VAR22++;
    if (VAR9.VAR22 > VAR9.VAR20)
    {
        VAR14.VAR6[0] = VAR14.VAR6[1] = VAR14.VAR6[2] = 1;
        FUN2(VAR2->VAR17, VAR18, "");
        return VAR19;
    }
    *VAR5 = VAR9.VAR25;
    if (VAR12[0].VAR29)
        FUN10(&VAR12[0]);
    if (VAR12[1].VAR29)
        FUN10(&VAR12[1]);
    FUN11(VAR10.VAR23);
    FUN11(VAR10.VAR24);
    FUN11(VAR10.VAR25);
    FUN11(VAR11.VAR23);
    FUN11(VAR11.VAR24);
    FUN11(VAR11.VAR25);
    return VAR15;
}