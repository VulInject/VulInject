static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3);
    VAR6 *VAR7 = &VAR3->VAR7;
    MemTxResult VAR8;
    hwaddr VAR9 = VAR7->VAR10.VAR11[VAR7->VAR10.VAR12] + VAR7->VAR10.VAR13 * 4;
    uint32_t VAR14;
    VAR14 = FUN3(VAR5->VAR15, VAR9, VAR16, &VAR8);
    if (VAR8 != VAR17)
    {
        FUN4(VAR5, ""
                      "",
                  (unsigned)VAR9);
    }
    return VAR14;
}