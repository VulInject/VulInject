static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, VAR6 **VAR7, int *VAR8, const VAR6 *VAR9, int VAR10, int VAR11)
{
    GetBitContext VAR12;
    PutBitContext VAR13;
    AACADTSHeaderInfo VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    FUN2(&VAR12, VAR9, VAR18 * 8);
    *VAR7 = (VAR6 *)VAR9;
    *VAR8 = VAR10;
    if (VAR4->VAR19)
        if (FUN3(&VAR12, 12) != 0xfff)
            return 0;
    if (FUN4(&VAR12, &VAR14) < 0)
    {
        FUN5(VAR4, VAR20, "");
        return -1;
    }
    if (!VAR14.VAR21 && VAR14.VAR22 > 1)
    {
        FUN6(VAR4, "");
        return VAR23;
    }
    VAR9 += VAR18 + 2 * !VAR14.VAR21;
    VAR10 -= VAR18 + 2 * !VAR14.VAR21;
    if (!VAR16->VAR24)
    {
        int VAR25 = 0;
        uint8_t VAR26[VAR27];
        if (!VAR14.VAR28)
        {
            FUN2(&VAR12, VAR9, VAR10 * 8);
            if (FUN7(&VAR12, 3) != 5)
            {
                FUN6(VAR4, ""
                                                     ""
                                                     "");
                return VAR23;
            }
            FUN8(&VAR13, VAR26, VAR27);
            VAR25 = FUN9(&VAR13, &VAR12) / 8;
            FUN10(&VAR13);
            VAR10 -= FUN11(&VAR12) / 8;
            VAR9 += FUN11(&VAR12) / 8;
        }
        VAR4->VAR29 = 2 + VAR25;
        VAR4->VAR19 = FUN12(VAR4->VAR29 + VAR30);
        FUN8(&VAR13, VAR4->VAR19, VAR4->VAR29);
        FUN13(&VAR13, 5, VAR14.VAR31);
        FUN13(&VAR13, 4, VAR14.VAR32);
        FUN13(&VAR13, 4, VAR14.VAR28);
        FUN13(&VAR13, 1, 0);
        FUN13(&VAR13, 1, 0);
        FUN13(&VAR13, 1, 0);
        FUN10(&VAR13);
        if (VAR25)
        {
            memcpy(VAR4->VAR19 + 2, VAR26, VAR25);
        }
        VAR16->VAR24 = 1;
    }
    *VAR7 = (VAR6 *)VAR9;
    *VAR8 = VAR10;
    return 0;