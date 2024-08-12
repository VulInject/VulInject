static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR10;
    int64_t VAR11;
    int VAR12;
    VAR6->VAR13 = VAR2;
    FUN2(VAR2, 60, 1, VAR14);
    VAR11 = 0;
    for (;;)
    {
        if (FUN3(VAR9, VAR15, VAR11) < 0)
        {
            FUN4(VAR2, VAR16, "");
            return -1;
        }
        VAR11 = FUN5(VAR9);
        if (FUN6(VAR6) >= 0)
            break;
    }
    VAR2->VAR17 = 0;
    VAR6->VAR18 = FUN7(sizeof(VAR19) * VAR6->VAR20);
    VAR11 = 0;
    for (VAR12 = 0; VAR12 < VAR6->VAR20;)
    {
        if (FUN3(VAR9, VAR21, VAR11) < 0)
        {
            FUN4(VAR2, VAR16, "");
            return -1;
        }
        VAR11 = FUN5(VAR9);
        if (FUN8(VAR6) >= 0)
            VAR12++;
    }
    VAR11 = 0;
    for (;;)
    {
        uint64_t VAR22 = FUN9(VAR9, VAR11);
        VAR11 = FUN5(VAR9);
        if (VAR22 == 0)
        {
            FUN4(VAR2, VAR16, "");
            return -1;
        }
        else if (VAR22 == VAR23)
        {
            VAR6->VAR24 = VAR22;
            break;
        }
        else if (VAR22 != VAR25)
        {
            continue;
        }
        FUN10(VAR6);
    }
    return 0;
}