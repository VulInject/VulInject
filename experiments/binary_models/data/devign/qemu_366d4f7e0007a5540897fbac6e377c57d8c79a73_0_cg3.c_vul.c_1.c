static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    int VAR7;
    switch (VAR3)
    {
    case VAR8:
    case VAR9:
        VAR7 = 0;
        break;
    case VAR10:
        VAR7 = VAR6->VAR11[0];
        break;
    case VAR12:
        VAR7 = VAR6->VAR11[1] | VAR13 | VAR14;
        break;
    case VAR15 ... VAR16:
        VAR7 = VAR6->VAR11[VAR3 - 0x10];
        break;
    default:
        FUN2(VAR17, ""
                                 "" VAR18 "",
                      VAR3, VAR4);
        VAR7 = 0;
        break;
    }
    FUN3("" VAR18 "", VAR7, VAR3);
    return VAR7;
}