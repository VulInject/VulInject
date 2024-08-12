static VAR1 FUN1(void *VAR2, hwaddr VAR3, uint64_t VAR4, unsigned VAR5, MemTxAttrs VAR6)
{
    int VAR7 = 0;
    MSIMessage VAR8 = {}, VAR9 = {};
    uint16_t VAR10 = VAR11;
    VAR8.VAR12 = (VAR13)VAR3 + VAR14;
    VAR8.VAR15 = (VAR16)VAR4;
    if (!VAR6.VAR17)
    {
        VAR10 = VAR6.VAR18;
    }
    VAR7 = FUN2(VAR2, &VAR8, &VAR9, VAR10);
    if (VAR7)
    {
        FUN3(VAR19, "" VAR20 "" VAR21, VAR8.VAR12, VAR8.VAR15);
        return VAR22;
    }
    FUN3(VAR23, "" VAR20 "" VAR21 "", VAR9.VAR12, VAR9.VAR15, VAR10);
    if (FUN4(&VAR24, VAR9.VAR12, &VAR9.VAR15, VAR5))
    {
        FUN3(VAR19, "" VAR20 "" VAR21, VAR9.VAR12, VAR9.VAR15);
    }
    return VAR25;
}