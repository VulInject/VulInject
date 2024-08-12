static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR10;
    int64_t VAR11;
    int VAR12;
    VAR6->VAR13 = VAR2;
    VAR11 = 0;
    for (;;)
    {
        VAR11 = FUN2(VAR9, VAR14, VAR11) + 1;
        if (VAR11 < 0)
        {
            FUN3(VAR2, VAR15, "");
            return -1;
        }
        if (FUN4(VAR6) >= 0)
            break;
    }
    VAR2->VAR16 = 0;
    VAR6->VAR17 = FUN5(sizeof(VAR18) * VAR6->VAR19);
    VAR11 = 0;
    for (VAR12 = 0; VAR12 < VAR6->VAR19;)
    {
        VAR11 = FUN2(VAR9, VAR20, VAR11) + 1;
        if (VAR11 < 0)
        {
            FUN3(VAR2, VAR15, "");
            return -1;
        }
        if (FUN6(VAR6) >= 0)
            VAR12++;
    }
    VAR11 = 0;
    for (;;)
    {
        uint64_t VAR21 = FUN7(VAR9, VAR11);
        VAR11 = FUN8(VAR9);
        if (VAR21 == 0)
        {
            FUN3(VAR2, VAR15, "");
            return -1;
        }
        else if (VAR21 == VAR22)
        {
            VAR6->VAR23 = VAR21;
            break;
        }
        else if (VAR21 != VAR24)
        {
            continue;
        }
        FUN9(VAR6);
    }
    return 0;
}