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
    if (!VAR10.VAR23 || !VAR10.VAR24 || !VAR10.VAR25 || !VAR11.VAR23 || !VAR11.VAR24 || !VAR11.VAR25)
    {
        VAR15 = FUN4(VAR26);
        goto VAR27;
    }
    if (FUN5(VAR4))
    {
        FUN6(VAR4, &VAR10, 0, 0);
        FUN7(VAR4, 1);
        VAR8 = FUN8(&VAR12[0], VAR28, VAR10.VAR20, VAR10.VAR24, sizeof(int), sizeof(int), VAR10.VAR23, sizeof(VAR29), sizeof(VAR29), VAR30);
        if (VAR8 < 0)
        {
            FUN2(VAR2->VAR17, VAR18, "");
            VAR15 = VAR8;
            goto VAR27;
        }
    }
    else
    {
        FUN2(VAR2->VAR17, VAR18, "");
    }
    if (FUN5(VAR4))
    {
        FUN6(VAR4, &VAR11, 0, 0);
        FUN7(VAR4, 1);
        VAR8 = FUN8(&VAR12[1], VAR28, VAR11.VAR20, VAR11.VAR24, sizeof(int), sizeof(int), VAR11.VAR23, sizeof(VAR29), sizeof(VAR29), VAR30);
        if (VAR8 < 0)
        {
            FUN2(VAR2->VAR17, VAR18, "");
            VAR15 = VAR8;
            goto VAR27;
        }
    }
    else
    {
        FUN2(VAR2->VAR17, VAR18, "");
    }
    VAR13[0] = FUN9(VAR4, 8);
    VAR13[0] |= FUN9(VAR4, 8) << 8;
    VAR13[1] = FUN9(VAR4, 8);
    VAR13[1] |= FUN9(VAR4, 8) << 8;
    VAR13[2] = FUN9(VAR4, 8);
    VAR13[2] |= FUN9(VAR4, 8) << 8;
    VAR6[0] = VAR6[1] = VAR6[2] = -1;
    VAR14.VAR13[0] = VAR13[0];
    VAR14.VAR13[1] = VAR13[1];
    VAR14.VAR13[2] = VAR13[2];
    VAR14.VAR31 = &VAR12[0];
    VAR14.VAR32 = &VAR12[1];
    VAR14.VAR33 = VAR10.VAR25;
    VAR14.VAR34 = VAR11.VAR25;
    VAR14.VAR6 = VAR6;
    VAR9.VAR20 = ((VAR7 + 3) >> 2) + 4;
    VAR9.VAR21 = 0;
    VAR9.VAR22 = 0;
    VAR9.VAR25 = FUN3(VAR9.VAR20 * sizeof(int));
    if (!VAR9.VAR25)
    {
        VAR15 = FUN4(VAR26);
        goto VAR27;
    }
    if ((VAR8 = FUN10(VAR4, &VAR9, &VAR14)) < 0)
        VAR15 = VAR8;
    FUN7(VAR4, 1);
    if (VAR14.VAR6[0] == -1)
        VAR14.VAR6[0] = VAR9.VAR22++;
    if (VAR14.VAR6[1] == -1)
        VAR14.VAR6[1] = VAR9.VAR22++;
    if (VAR14.VAR6[2] == -1)
        VAR14.VAR6[2] = VAR9.VAR22++;
    if (VAR14.VAR6[0] >= VAR9.VAR20 || VAR14.VAR6[1] >= VAR9.VAR20 || VAR14.VAR6[2] >= VAR9.VAR20)
    {
        FUN2(VAR2->VAR17, VAR18, "");
        VAR15 = VAR19;
    }
    *VAR5 = VAR9.VAR25;
VAR27:
    if (VAR12[0].VAR35)
        FUN11(&VAR12[0]);
    if (VAR12[1].VAR35)
        FUN11(&VAR12[1]);
    FUN12(VAR10.VAR23);
    FUN12(VAR10.VAR24);
    FUN12(VAR10.VAR25);
    FUN12(VAR11.VAR23);
    FUN12(VAR11.VAR24);
    FUN12(VAR11.VAR25);
    return VAR15;
}