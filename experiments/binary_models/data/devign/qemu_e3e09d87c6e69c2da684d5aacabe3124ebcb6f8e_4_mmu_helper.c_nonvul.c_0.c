static void FUN1(VAR1 *VAR2, target_ulong VAR3, uint32_t VAR4, uint64_t VAR5, int VAR6, bool VAR7)
{
    VAR8 *VAR9 = FUN2(FUN3(VAR2));
    int VAR10 = VAR11;
    int VAR12 = FUN4(VAR2, VAR5);
    FUN5("" VAR13 "", VAR14, VAR3, VAR12);
    if (!VAR7)
    {
        return;
    }
    if (VAR6 == 2)
    {
        VAR10 = 2;
    }
    FUN6(VAR9->VAR15, VAR2->VAR16 + FUN7(VAR17, VAR18), VAR3 | VAR12);
    FUN8(VAR2, VAR4, VAR10);
}