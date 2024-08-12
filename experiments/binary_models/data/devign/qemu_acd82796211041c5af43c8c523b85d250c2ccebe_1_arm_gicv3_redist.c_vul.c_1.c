VAR1 FUN1(void *VAR2, hwaddr VAR3, uint64_t VAR4, unsigned VAR5, MemTxAttrs VAR6)
{
    VAR7 *VAR8 = VAR2;
    VAR9 *VAR10;
    MemTxResult VAR11;
    int VAR12;
    VAR12 = VAR3 / 0x20000;
    VAR3 %= 0x20000;
    assert(VAR12 < VAR8->VAR13);
    VAR10 = &VAR8->VAR14[VAR12];
    switch (VAR5)
    {
    case 1:
        VAR11 = FUN2(VAR10, VAR3, VAR4, VAR6);
        break;
    case 4:
        VAR11 = FUN3(VAR10, VAR3, VAR4, VAR6);
        break;
    case 8:
        VAR11 = FUN4(VAR10, VAR3, VAR4, VAR6);
        break;
    default:
        VAR11 = VAR15;
        break;
    }
    if (VAR11 == VAR15)
    {
        FUN5(VAR16, "" VAR17 "", VAR18, VAR3, VAR5);
        FUN6(FUN7(VAR10), VAR3, VAR4, VAR5, VAR6.VAR19);
    }
    else
    {
        FUN8(FUN7(VAR10), VAR3, VAR4, VAR5, VAR6.VAR19);
    }
    return VAR11;