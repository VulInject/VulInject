static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6.VAR7;
    uint16_t VAR8, VAR9;
    const int VAR10 = 512;
    uint8_t VAR11[VAR10];
    uint32_t VAR12, VAR13;
    ram_addr_t VAR14 = 0;
    size_t VAR15 = 0, VAR16;
    int VAR17;
    FUN2();
    while (!VAR3->VAR6.VAR18 && !FUN3(VAR5) && FUN4(VAR3->VAR19))
    {
        FUN5();
        VAR9 = FUN6(VAR5);
        VAR8 = FUN6(VAR5);
        if (VAR9 >= VAR20 || VAR9 == VAR21)
        {
            FUN7("", VAR9, VAR8);
            FUN8(VAR3);
            goto VAR22;
        }
        if ((VAR23[VAR9].VAR15 != -1 && VAR8 != VAR23[VAR9].VAR15) || VAR8 > VAR10)
        {
            FUN7(""
                         "",
                         VAR23[VAR9].VAR24, VAR9, VAR8, (VAR25)VAR23[VAR9].VAR15);
            FUN8(VAR3);
            goto VAR22;
        }
        VAR17 = FUN9(VAR5, VAR11, VAR8);
        if (VAR17 != VAR8)
        {
            FUN7(""
                         "",
                         VAR9, VAR17, VAR8);
            FUN8(VAR3);
            goto VAR22;
        }
        switch (VAR9)
        {
        case VAR26:
            VAR13 = FUN10((VAR27 *)VAR11);
            FUN11(VAR13);
            if (VAR13)
            {
                FUN7("", VAR13);
                FUN8(VAR3);
            }
            goto VAR22;
        case VAR28:
            VAR12 = FUN10((VAR27 *)VAR11);
            FUN12(VAR12);
            break;
        case VAR29:
            VAR14 = FUN13((VAR30 *)VAR11);
            VAR15 = FUN10((VAR27 *)(VAR11 + 8));
            FUN14(VAR3, NULL, VAR14, VAR15);
            break;
        case VAR31:
            VAR16 = 12 + 1;
            if (VAR8 >= VAR16)
            {
                VAR14 = FUN13((VAR30 *)VAR11);
                VAR15 = FUN10((VAR27 *)(VAR11 + 8));
                VAR12 = VAR11[12];
                VAR11[13 + VAR12] = '';
                VAR16 += VAR12;
            }
            if (VAR8 != VAR16)
            {
                FUN7("", VAR8, VAR16);
                FUN8(VAR3);
                goto VAR22;
            }
            FUN14(VAR3, (char *)&VAR11[13], VAR14, VAR15);
            break;
        default:
            break;
        }
    }
    if (FUN3(VAR5))
    {
        FUN15();
        FUN8(VAR3);
    }
    FUN16();
VAR22:
    VAR3->VAR6.VAR7 = NULL;
    FUN17(VAR5);
    return NULL;
}