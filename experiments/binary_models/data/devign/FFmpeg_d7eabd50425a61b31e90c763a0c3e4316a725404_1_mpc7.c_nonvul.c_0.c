static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    GetBitContext VAR13;
    int VAR14, VAR15;
    int VAR16 = -1;
    VAR17 *VAR18 = VAR11->VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24;
    memset(VAR18, 0, sizeof(*VAR18) * (VAR11->VAR25 + 1));
    VAR9 = VAR6->VAR26 & ~3;
    if (VAR9 <= 0)
    {
        FUN2(VAR2, VAR27, "", VAR6->VAR26);
        return VAR28;
    }
    if (VAR9 != VAR6->VAR26)
    {
        FUN2(VAR2, VAR29, ""
                                      "");
    }
    VAR22 = VAR8[0];
    VAR21 = VAR8[1];
    VAR8 += 4;
    VAR9 -= 4;
    VAR11->VAR30.VAR31 = VAR21 ? VAR11->VAR32 : VAR33;
    if ((VAR20 = VAR2->FUN3(VAR2, &VAR11->VAR30)) < 0)
    {
        FUN2(VAR2, VAR27, "");
        return VAR20;
    }
    FUN4(&VAR11->VAR34, &VAR11->VAR9, VAR9);
    if (!VAR11->VAR34)
        return FUN5(VAR35);
    VAR11->VAR36.FUN6((VAR37 *)VAR11->VAR34, (const VAR37 *)VAR8, VAR9 >> 2);
    FUN7(&VAR13, VAR11->VAR34, VAR9 * 8);
    FUN8(&VAR13, VAR22);
    for (VAR14 = 0; VAR14 <= VAR11->VAR25; VAR14++)
    {
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            int VAR38 = 4;
            if (VAR14)
                VAR38 = FUN9(&VAR13, VAR39.VAR40, VAR41, 1) - 5;
            if (VAR38 == 4)
                VAR18[VAR14].VAR42[VAR15] = FUN10(&VAR13, 4);
            else
                VAR18[VAR14].VAR42[VAR15] = FUN11(VAR18[VAR14 - 1].VAR42[VAR15] + VAR38, 0, 17);
        }
        if (VAR18[VAR14].VAR42[0] || VAR18[VAR14].VAR42[1])
        {
            VAR16 = VAR14;
            if (VAR11->VAR43)
                VAR18[VAR14].VAR44 = FUN12(&VAR13);
        }
    }
    for (VAR14 = 0; VAR14 <= VAR16; VAR14++)
        for (VAR15 = 0; VAR15 < 2; VAR15++)
            if (VAR18[VAR14].VAR42[VAR15])
                VAR18[VAR14].VAR45[VAR15] = FUN9(&VAR13, VAR46.VAR40, VAR47, 1);
    for (VAR14 = 0; VAR14 <= VAR16; VAR14++)
    {
        for (VAR15 = 0; VAR15 < 2; VAR15++)
        {
            if (VAR18[VAR14].VAR42[VAR15])
            {
                VAR18[VAR14].VAR48[VAR15][2] = VAR11->VAR49[VAR15][VAR14];
                VAR18[VAR14].VAR48[VAR15][0] = FUN13(&VAR13, VAR18[VAR14].VAR48[VAR15][2]);
                switch (VAR18[VAR14].VAR45[VAR15])
                {
                case 0:
                    VAR18[VAR14].VAR48[VAR15][1] = FUN13(&VAR13, VAR18[VAR14].VAR48[VAR15][0]);
                    VAR18[VAR14].VAR48[VAR15][2] = FUN13(&VAR13, VAR18[VAR14].VAR48[VAR15][1]);
                    break;
                case 1:
                    VAR18[VAR14].VAR48[VAR15][1] = FUN13(&VAR13, VAR18[VAR14].VAR48[VAR15][0]);
                    VAR18[VAR14].VAR48[VAR15][2] = VAR18[VAR14].VAR48[VAR15][1];
                    break;
                case 2:
                    VAR18[VAR14].VAR48[VAR15][1] = VAR18[VAR14].VAR48[VAR15][0];
                    VAR18[VAR14].VAR48[VAR15][2] = FUN13(&VAR13, VAR18[VAR14].VAR48[VAR15][1]);
                    break;
                case 3:
                    VAR18[VAR14].VAR48[VAR15][2] = VAR18[VAR14].VAR48[VAR15][1] = VAR18[VAR14].VAR48[VAR15][0];
                    break;
                }
                VAR11->VAR49[VAR15][VAR14] = VAR18[VAR14].VAR48[VAR15][2];
            }
        }
    }
    memset(VAR11->VAR50, 0, sizeof(VAR11->VAR50));
    VAR19 = 0;
    for (VAR14 = 0; VAR14 < VAR51; VAR14++, VAR19 += VAR52)
        for (VAR15 = 0; VAR15 < 2; VAR15++)
            FUN14(VAR11, &VAR13, VAR18[VAR14].VAR42[VAR15], VAR11->VAR50[VAR15] + VAR19);
    FUN15(VAR11, VAR16, VAR11->VAR30.VAR3[0], 2);
    VAR23 = FUN16(&VAR13);
    VAR24 = VAR9 * 8;
    if (!VAR21 && ((VAR24 < VAR23) || (VAR23 + 32 <= VAR24)))
    {
        FUN2(VAR2, VAR27, "", VAR23, VAR24);
        return -1;
    }
    if (VAR11->VAR53)
    {
        VAR11->VAR53--;
        *VAR4 = 0;
        return VAR6->VAR26;
    }
    *VAR4 = 1;
    *(VAR54 *)VAR3 = VAR11->VAR30;
    return VAR6->VAR26;
}