static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    PutBitContext VAR10;
    char VAR11[256];
    int VAR12, VAR13, VAR14;
    void (*VAR15)(VAR1 * VAR2, VAR3 * VAR4, VAR5 * VAR6) = NULL;
    FUN2(VAR2, VAR16, 0);
    for (VAR12 = 0; VAR12 < 64; VAR12++)
    {
        switch (VAR12)
        {
        case VAR17:
            if (!VAR8->VAR18 || VAR6->VAR19 != VAR20)
                continue;
            VAR15 = &VAR21;
            break;
        case VAR22:
            if (!VAR8->VAR18)
                continue;
            VAR15 = &VAR23;
            break;
        case VAR24:
            if (VAR6->VAR25 != 0)
                continue;
            VAR15 = &VAR26;
            break;
        default:
            continue;
        }
        FUN3(&VAR10, VAR11, sizeof(VAR11));
        FUN4(&VAR10, VAR4, VAR6);
        if (FUN5(&VAR10) & 7)
        {
            FUN6(&VAR10, 1, 1, VAR27);
            while (FUN5(&VAR10) & 7)
                FUN6(&VAR10, 1, 0, VAR28);
        }
        VAR13 = FUN5(&VAR10) / 8;
        FUN7(&VAR10);
        FUN8(8, VAR12, VAR29);
        FUN8(8, VAR13, VAR30);
        for (VAR14 = 0; VAR14 < VAR13; VAR14++)
            FUN8(8, VAR11[VAR14] & 0xff, VAR31);
    }
    FUN9(VAR2);
}