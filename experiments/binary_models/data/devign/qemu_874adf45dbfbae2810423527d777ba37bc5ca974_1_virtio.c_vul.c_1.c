int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    int32_t VAR8;
    uint32_t VAR9;
    uint32_t VAR10;
    VAR11 *VAR12 = FUN2(FUN3(VAR2));
    VAR13 *VAR14 = FUN4(VAR12);
    VAR15 *VAR16 = FUN5(VAR2);
    VAR2->VAR17 = VAR18;
    if (VAR14->VAR19)
    {
        VAR7 = VAR14->FUN6(VAR12->VAR20, VAR4);
        if (VAR7)
            return VAR7;
    }
    FUN7(VAR4, &VAR2->VAR21);
    FUN7(VAR4, &VAR2->VAR22);
    FUN8(VAR4, &VAR2->VAR23);
    if (VAR2->VAR23 >= VAR24)
    {
        return -1;
    }
    FUN9(VAR4, &VAR10);
    VAR2->VAR25 = VAR10;
    VAR8 = FUN10(VAR4);
    FUN11(VAR4, VAR2->VAR26, FUN12(VAR8, VAR2->VAR8));
    while (VAR8 > VAR2->VAR8)
    {
        FUN13(VAR4);
        VAR8--;
    }
    VAR9 = FUN10(VAR4);
    if (VAR9 > VAR24)
    {
        FUN14("", VAR9);
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        VAR2->VAR27[VAR6].VAR28.VAR9 = FUN10(VAR4);
        if (VAR14->VAR29)
        {
            VAR2->VAR27[VAR6].VAR28.VAR30 = FUN10(VAR4);
        }
        VAR2->VAR27[VAR6].VAR28.VAR31 = FUN15(VAR4);
        FUN8(VAR4, &VAR2->VAR27[VAR6].VAR32);
        VAR2->VAR27[VAR6].VAR33 = false;
        VAR2->VAR27[VAR6].VAR34 = true;
        if (VAR2->VAR27[VAR6].VAR28.VAR31)
        {
            FUN16(VAR2, VAR6);
        }
        else if (VAR2->VAR27[VAR6].VAR32)
        {
            FUN14(""
                         "",
                         VAR6, VAR2->VAR27[VAR6].VAR32);
            return -1;
        }
        if (VAR14->VAR35)
        {
            VAR7 = VAR14->FUN17(VAR12->VAR20, VAR6, VAR4);
            if (VAR7)
                return VAR7;
        }
    }
    FUN18(VAR2, VAR36);
    if (VAR16->VAR37 != NULL)
    {
        VAR7 = VAR16->FUN19(VAR2, VAR4, VAR5);
        if (VAR7)
        {
            return VAR7;
        }
    }
    if (VAR16->VAR38)
    {
        VAR7 = FUN20(VAR4, VAR16->VAR38, VAR2, VAR5);
        if (VAR7)
        {
            return VAR7;
        }
    }
    VAR7 = FUN20(VAR4, &VAR39, VAR2, 1);
    if (VAR7)
    {
        return VAR7;
    }
    if (VAR2->VAR17 == VAR18)
    {
        VAR2->VAR17 = FUN21();
    }
    if (FUN22(VAR2))
    {
        uint64_t VAR40 = VAR2->VAR25;
        if (FUN23(VAR2, VAR40) < 0)
        {
            FUN14("" VAR41 ""
                         "" VAR41,
                         VAR40, VAR2->VAR42);
            return -1;
        }
    }
    else
    {
        if (FUN23(VAR2, VAR10) < 0)
        {
            FUN14(""
                         "" VAR41,
                         VAR10, VAR2->VAR42);
            return -1;
        }
    }
    FUN24();
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        if (VAR2->VAR27[VAR6].VAR28.VAR31)
        {
            uint16_t VAR43;
            VAR43 = FUN25(&VAR2->VAR27[VAR6]) - VAR2->VAR27[VAR6].VAR32;
            if (VAR43 > VAR2->VAR27[VAR6].VAR28.VAR9)
            {
                FUN14(""
                             "",
                             VAR6, VAR2->VAR27[VAR6].VAR28.VAR9, FUN25(&VAR2->VAR27[VAR6]), VAR2->VAR27[VAR6].VAR32, VAR43);
                return -1;
            }
            VAR2->VAR27[VAR6].VAR44 = FUN26(&VAR2->VAR27[VAR6]);
            VAR2->VAR27[VAR6].VAR45 = FUN25(&VAR2->VAR27[VAR6]);
            VAR2->VAR27[VAR6].VAR46 = (VAR47)(VAR2->VAR27[VAR6].VAR32 - VAR2->VAR27[VAR6].VAR44);
            if (VAR2->VAR27[VAR6].VAR46 > VAR2->VAR27[VAR6].VAR28.VAR9)
            {
                FUN14(""
                             "",
                             VAR6, VAR2->VAR27[VAR6].VAR28.VAR9, VAR2->VAR27[VAR6].VAR32, VAR2->VAR27[VAR6].VAR44);
                return -1;
            }
        }
    }
    FUN27();
    return 0;
}