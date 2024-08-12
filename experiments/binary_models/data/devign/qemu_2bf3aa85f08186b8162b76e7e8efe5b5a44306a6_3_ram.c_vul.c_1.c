static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ram_addr_t VAR5)
{
    VAR6 *VAR7 = &VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12 = VAR4->VAR13 + (VAR5 & VAR14);
    VAR9 = FUN2(VAR7, VAR4, VAR5 | VAR15);
    VAR10 = FUN3(VAR2, VAR12, VAR16, FUN4());
    if (VAR10 < 0)
    {
        VAR9 = 0;
        FUN5(FUN6()->VAR17, VAR10);
        FUN7("");
    }
    else
    {
        VAR9 += VAR10;
        FUN8(VAR4->VAR18, VAR5 & VAR14, 1);
    }
    return VAR9;
}