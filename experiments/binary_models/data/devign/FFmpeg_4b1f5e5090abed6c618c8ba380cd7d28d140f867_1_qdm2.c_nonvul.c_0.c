static void FUN1(VAR1 *VAR2)
{
    GetBitContext VAR3;
    QDM2SubPacket VAR4, *VAR5;
    int VAR6, VAR7, VAR8, VAR9;
    unsigned int VAR10 = 0;
    memset(VAR2->VAR11, 0, sizeof(VAR2->VAR11));
    memset(VAR2->VAR12, 0, sizeof(VAR2->VAR12));
    memset(VAR2->VAR13, 0, sizeof(VAR2->VAR13));
    VAR2->VAR14 = 0;
    VAR9 = 0;
    FUN2(VAR2);
    FUN3(&VAR3, VAR2->VAR15, VAR2->VAR16 * 8);
    FUN4(&VAR3, &VAR4);
    if (VAR4.VAR17 < 2 || VAR4.VAR17 >= 8)
    {
        VAR2->VAR18 = 1;
        FUN5(NULL, VAR19, "");
        return;
    }
    VAR2->VAR20 = (VAR4.VAR17 == 2 || VAR4.VAR17 == 3);
    VAR7 = (VAR2->VAR16 - FUN6(&VAR3) / 8);
    FUN3(&VAR3, VAR4.VAR21, VAR4.VAR22 * 8);
    if (VAR4.VAR17 == 2 || VAR4.VAR17 == 4 || VAR4.VAR17 == 5)
    {
        int VAR23 = 257 * FUN7(&VAR3, 8);
        VAR23 += 2 * FUN7(&VAR3, 8);
        VAR23 = FUN8(VAR2->VAR15, VAR2->VAR24, VAR23);
        if (VAR23 != 0)
        {
            VAR2->VAR18 = 1;
            FUN5(NULL, VAR19, "");
            return;
        }
    }
    VAR2->VAR25[0].VAR5 = NULL;
    VAR2->VAR26[0].VAR5 = NULL;
    for (VAR6 = 0; VAR6 < 6; VAR6++)
        if (--VAR2->VAR27[VAR6] < 0)
            VAR2->VAR27[VAR6] = 0;
    for (VAR6 = 0; VAR7 > 0; VAR6++)
    {
        int VAR28;
        if (VAR6 >= FUN9(VAR2->VAR29))
        {
            FUN10("");
            return;
        }
        VAR2->VAR29[VAR6].VAR30 = NULL;
        if (VAR6 > 0)
        {
            VAR2->VAR29[VAR6 - 1].VAR30 = &VAR2->VAR29[VAR6];
            FUN3(&VAR3, VAR4.VAR21, VAR4.VAR22 * 8);
            FUN11(&VAR3, VAR10 * 8);
            if (VAR10 >= VAR4.VAR22)
                break;
        }
        VAR5 = &VAR2->VAR31[VAR6];
        FUN4(&VAR3, VAR5);
        VAR10 = VAR5->VAR22 + FUN6(&VAR3) / 8;
        VAR8 = ((VAR5->VAR22 > 0xff) ? 1 : 0) + VAR5->VAR22 + 2;
        if (VAR5->VAR17 == 0)
            break;
        if (VAR8 > VAR7)
        {
            if (VAR5->VAR17 != 10 && VAR5->VAR17 != 11 && VAR5->VAR17 != 12)
                break;
            VAR5->VAR22 += VAR7 - VAR8;
        }
        VAR7 -= VAR8;
        VAR2->VAR29[VAR6].VAR5 = VAR5;
        if (VAR5->VAR17 == 8)
        {
            FUN10("");
            return;
        }
        else if (VAR5->VAR17 >= 9 && VAR5->VAR17 <= 12)
        {
            FUN12(VAR2->VAR26, VAR9, VAR5);
        }
        else if (VAR5->VAR17 == 13)
        {
            for (VAR28 = 0; VAR28 < 6; VAR28++)
                VAR2->VAR27[VAR28] = FUN7(&VAR3, 6);
        }
        else if (VAR5->VAR17 == 14)
        {
            for (VAR28 = 0; VAR28 < 6; VAR28++)
                VAR2->VAR27[VAR28] = FUN13(&VAR3, &VAR32, 0, 2);
        }
        else if (VAR5->VAR17 == 15)
        {
            FUN10("")
            return;
        }
        else if (VAR5->VAR17 >= 16 && VAR5->VAR17 < 48 && !VAR33[VAR5->VAR17 - 16])
        {
            FUN12(VAR2->VAR25, VAR2->VAR14, VAR5);
        }
    }
    if (VAR2->VAR26[0].VAR5)
    {
        FUN14(VAR2, VAR2->VAR26);
        VAR2->VAR34 = 1;
    }
    else if (VAR2->VAR34)
    {
        FUN15(VAR2, NULL);
        FUN16(VAR2, NULL);
        FUN17(VAR2, NULL);
    }
}