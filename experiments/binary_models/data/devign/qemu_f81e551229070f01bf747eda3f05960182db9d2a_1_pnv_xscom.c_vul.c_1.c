static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = FUN2(VAR6, VAR3);
    uint64_t VAR8 = 0;
    MemTxResult VAR9;
    VAR8 = FUN3(VAR6, VAR7);
    if (VAR8 != -1)
    {
        goto VAR10;
    }
    VAR8 = FUN4(&VAR6->VAR11, VAR7 << 3, VAR12, &VAR9);
    if (VAR9 != VAR13)
    {
        FUN5(VAR14, "" VAR15 "", VAR3, VAR7);
        FUN6(VAR16, VAR17 | VAR18);
        return 0;
    }
VAR10:
    FUN6(VAR16, VAR18);
    return VAR8;
}