static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int **VAR5, int *VAR6, int VAR7)
{
    int VAR8;
    HuffContext VAR9;
    HuffContext VAR10, VAR11;
    VLC VAR12[2];
    int VAR13[3];
    DBCtx VAR14;
    VAR10.VAR15 = 256;
    VAR10.VAR16 = 0;
    VAR10.VAR17 = 0;
    VAR10.VAR18 = FUN2(256 * 4);
    VAR10.VAR19 = FUN2(256 * sizeof(int));
    VAR10.VAR20 = FUN2(256 * sizeof(int));
    VAR11.VAR15 = 256;
    VAR11.VAR16 = 0;
    VAR11.VAR17 = 0;
    VAR11.VAR18 = FUN2(256 * 4);
    VAR11.VAR19 = FUN2(256 * sizeof(int));
    VAR11.VAR20 = FUN2(256 * sizeof(int));
    memset(&VAR12[0], 0, sizeof(VAR21));
    memset(&VAR12[1], 0, sizeof(VAR21));
    if (FUN3(VAR4))
    {
        FUN4(VAR4, &VAR10, 0, 0);
        FUN3(VAR4);
        VAR8 = FUN5(&VAR12[0], VAR22, VAR10.VAR15, VAR10.VAR19, sizeof(int), sizeof(int), VAR10.VAR18, sizeof(VAR23), sizeof(VAR23), VAR24);
        if (VAR8 < 0)
        {
            FUN6(VAR2->VAR25, VAR26, "");
        }
        else
        {
            FUN6(VAR2->VAR25, VAR26, "");
            if (FUN3(VAR4))
            {
                FUN4(VAR4, &VAR11, 0, 0);
                FUN3(VAR4);
                VAR8 = FUN5(&VAR12[1], VAR22, VAR11.VAR15, VAR11.VAR19, sizeof(int), sizeof(int), VAR11.VAR18, sizeof(VAR23), sizeof(VAR23), VAR24);
                if (VAR8 < 0)
                {
                    FUN6(VAR2->VAR25, VAR26, "");
                }
                else
                {
                    FUN6(VAR2->VAR25, VAR26, "");
                    VAR13[0] = FUN7(VAR4, 8);
                    VAR13[0] |= FUN7(VAR4, 8) << 8;
                    VAR13[1] = FUN7(VAR4, 8);
                    VAR13[1] |= FUN7(VAR4, 8) << 8;
                    VAR13[2] = FUN7(VAR4, 8);
                    VAR13[2] |= FUN7(VAR4, 8) << 8;
                    VAR6[0] = VAR6[1] = VAR6[2] = -1;
                    VAR14.VAR13[0] = VAR13[0];
                    VAR14.VAR13[1] = VAR13[1];
                    VAR14.VAR13[2] = VAR13[2];
                    VAR14.VAR27 = &VAR12[0];
                    VAR14.VAR28 = &VAR12[1];
                    VAR14.VAR29 = VAR10.VAR20;
                    VAR14.VAR30 = VAR11.VAR20;
                    VAR14.VAR6 = VAR6;
                    VAR9.VAR15 = ((VAR7 + 3) >> 2) + 3;
                    VAR9.VAR16 = 0;
                    VAR9.VAR17 = 0;
                    VAR9.VAR20 = FUN2(VAR9.VAR15 * sizeof(int));
                    FUN8(VAR4, &VAR9, &VAR14);
                    FUN3(VAR4);
                    if (VAR14.VAR6[0] == -1)
                        VAR14.VAR6[0] = VAR9.VAR17++;
                    if (VAR14.VAR6[1] == -1)
                        VAR14.VAR6[1] = VAR9.VAR17++;
                    if (VAR14.VAR6[2] == -1)
                        VAR14.VAR6[2] = VAR9.VAR17++;
                    *VAR5 = VAR9.VAR20;
                    if (VAR12[0].VAR31)
                        FUN9(&VAR12[0]);
                    if (VAR12[1].VAR31)
                        FUN9(&VAR12[1]);
                    FUN10(VAR10.VAR18);
                    FUN10(VAR10.VAR19);
                    FUN10(VAR10.VAR20);
                    FUN10(VAR11.VAR18);
                    FUN10(VAR11.VAR19);
                    FUN10(VAR11.VAR20);
                    return 0