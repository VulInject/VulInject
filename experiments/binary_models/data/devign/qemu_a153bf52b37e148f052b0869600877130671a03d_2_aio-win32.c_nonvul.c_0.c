bool FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    HANDLE VAR6[VAR7 + 1];
    bool VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12;
    VAR8 = false;
    if (VAR3)
    {
        FUN2(&VAR2->VAR13, 2);
    }
    FUN3(&VAR2->VAR14);
    VAR9 = FUN4(VAR2);
    VAR11 = 0;
    FUN5(VAR5, &VAR2->VAR15, VAR5)
    {
        if (!VAR5->VAR16 && VAR5->VAR17 && FUN6(VAR2, VAR5->VAR18))
        {
            VAR6[VAR11++] = FUN7(VAR5->VAR19);
        }
    }
    FUN8(&VAR2->VAR14);
    VAR10 = true;
    assert(VAR11 > 0);
    do
    {
        HANDLE VAR20;
        int VAR21;
        VAR12 = VAR3 && !VAR9 ? FUN9(FUN10(VAR2)) : 0;
        VAR21 = FUN11(VAR11, VAR6, VAR22, VAR12);
        if (VAR3)
        {
            assert(VAR10);
            FUN12(&VAR2->VAR13, 2);
        }
        if (VAR10)
        {
            FUN13(VAR2);
            VAR8 |= FUN14(VAR2);
            VAR10 = false;
        }
        VAR20 = NULL;
        if ((VAR23)(VAR21 - VAR24) < VAR11)
        {
            VAR20 = VAR6[VAR21 - VAR24];
            VAR6[VAR21 - VAR24] = VAR6[--VAR11];
        }
        else if (!VAR9)
        {
            break;
        }
        VAR9 = false;
        VAR3 = false;
        VAR8 |= FUN15(VAR2, VAR20);
    } while (VAR11 > 0);
    VAR8 |= FUN16(&VAR2->VAR25);
    return VAR8;
}