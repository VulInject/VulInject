static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7 = VAR2 / 4;
    int VAR8;
    int VAR9;
    int VAR10;
    if (!FUN2(VAR7, false))
    {
        FUN3(VAR11, ""
                                       "" VAR12 "",
                      VAR2);
        return;
    }
    switch (VAR7)
    {
    case VAR13:
        VAR6->VAR14[VAR13] = VAR3;
        break;
    case VAR15:
        VAR6->VAR14[VAR15] &= ~VAR3;
        break;
    case VAR16:
        VAR6->VAR14[VAR16] = VAR3 & VAR17;
        break;
    case VAR18:
        VAR9 = FUN4(VAR3, 26, 4);
        VAR8 = FUN4(VAR3, 16, 10);
        VAR10 = FUN4(VAR3, 0, 16);
        if (VAR6->VAR14[VAR19] & VAR20)
        {
            FUN3(VAR11, ""
                                           "" VAR21 "",
                          (VAR22)VAR3);
            break;
        }
        if (VAR8 > VAR23 && VAR9 != VAR24)
        {
            FUN3(VAR11, ""
                                           "",
                          VAR8);
            break;
        }
        switch (VAR9)
        {
        case VAR25:
            FUN5(VAR6, VAR6->VAR26[VAR8]);
            break;
        case VAR27:
            VAR6->VAR26[VAR8] = VAR10;
        case VAR24:
            FUN5(VAR6, 0);
            break;
        }
        break;
    case VAR19:
        VAR6->VAR14[VAR19] = VAR3 & 0x00fffeff;
        break;
    }
    FUN6(VAR6);
}