static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint32_t VAR6;
    if (VAR5->VAR7 && !(VAR3 & (VAR8 | VAR9)))
    {
        FUN3(VAR5->VAR7);
    }
    if (!(VAR3 & VAR9))
    {
        return;
    }
    VAR6 = VAR2->VAR10;
    if (!(VAR6 & (1 << VAR11)))
    {
        FUN4(FUN5(VAR5->VAR12));
        FUN6(VAR5->VAR12, !!(VAR6 & (1 << VAR13)));
        FUN7(FUN5(VAR5->VAR12));
    }
}