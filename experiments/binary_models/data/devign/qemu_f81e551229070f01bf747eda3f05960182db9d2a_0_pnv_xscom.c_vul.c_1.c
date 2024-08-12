static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = FUN2(VAR6, VAR2);
    MemTxResult VAR8;
    if (FUN3(VAR6, VAR7, VAR3))
    {
        goto VAR9;
    }
    FUN4(&VAR6->VAR10, VAR7 << 3, VAR3, VAR11, &VAR8);
    if (VAR8 != VAR12)
    {
        FUN5(VAR13, "" VAR14 "" VAR15 "", VAR2, VAR7, VAR3);
        FUN6(VAR16, VAR17 | VAR18);
        return;
    }
VAR9:
    FUN6(VAR16, VAR18);
}