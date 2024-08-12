static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    ram_addr_t VAR9 = VAR2->VAR9;
    VAR6 = VAR8->VAR10 + (VAR9 & VAR11);
    VAR3 = FUN2(VAR2->VAR12, VAR8, VAR9 | VAR13);
    VAR4 = FUN3(VAR2->VAR12, VAR6, VAR14, FUN4());
    if (VAR4 < 0)
    {
        VAR3 = 0;
        FUN5(FUN6()->VAR15, VAR4);
        FUN7("");
    }
    else
    {
        VAR3 += VAR4;
    }
    return VAR3;
}