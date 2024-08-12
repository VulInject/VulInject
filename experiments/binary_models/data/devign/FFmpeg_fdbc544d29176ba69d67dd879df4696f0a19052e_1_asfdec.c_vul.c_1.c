static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint64_t VAR10 = FUN2(VAR9);
    uint16_t VAR11 = FUN3(VAR9);
    int VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        uint16_t VAR14, VAR15, VAR16, VAR17, VAR18;
        VAR19 *VAR20 = NULL;
        FUN4(VAR9, 2);
        VAR18 = FUN3(VAR9);
        VAR14 = FUN3(VAR9);
        VAR15 = 2 * VAR14 + 1;
        if (!VAR14)
            break;
        VAR16 = FUN3(VAR9);
        VAR17 = FUN5(VAR9);
        VAR20 = FUN6(VAR14);
        if (!VAR20)
            return FUN7(VAR21);
        FUN8(VAR9, VAR14, VAR20, VAR15);
        if (!strcmp(VAR20, "") || !strcmp(VAR20, ""))
        {
            FUN9(VAR2, VAR18, VAR20);
        }
        else
        {
            if (VAR18 < VAR22)
            {
                if ((VAR13 = FUN10(VAR2, VAR20, VAR14, VAR17, VAR16, &VAR6->VAR23[VAR18].VAR24)) < 0)
                    break;
            }
            else
                FUN11(&VAR20);
        }
    }
    FUN12(VAR9, VAR6->VAR25, VAR10);
    return 0;
}