VAR1 FUN1(void *VAR2, hwaddr VAR3, VAR4 *VAR5, unsigned VAR6, MemTxAttrs VAR7)
{
    VAR8 *VAR9 = VAR2;
    VAR10 *VAR11;
    MemTxResult VAR12;
    int VAR13;
    VAR13 = VAR3 / 0x20000;
    VAR3 %= 0x20000;
    assert(VAR13 < VAR9->VAR14);
    VAR11 = &VAR9->VAR15[VAR13];
    switch (VAR6)
    {
    case 1:
        VAR12 = FUN2(VAR11, VAR3, VAR5, VAR7);
        break;
    case 4:
        VAR12 = FUN3(VAR11, VAR3, VAR5, VAR7);
        break;
    case 8:
        VAR12 = FUN4(VAR11, VAR3, VAR5, VAR7);
        break;
    default:
        VAR12 = VAR16;
        break;
    }
    if (VAR12 == VAR16)
    {
        FUN5(VAR17, "" VAR18 "", VAR19, VAR3, VAR6);
        FUN6(FUN7(VAR11), VAR3, VAR6, VAR7.VAR20);
    }
    else
    {
        FUN8(FUN7(VAR11), VAR3, *VAR5, VAR6, VAR7.VAR20);
    }
    return VAR12;