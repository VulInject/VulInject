static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint32_t VAR6 = FUN3();
    uint32_t VAR7 = FUN4();
    uint32_t VAR8 = FUN5("");
    uint32_t VAR9 = FUN5("");
    VAR5->VAR10 = FUN6();
    if (VAR6 != -1)
    {
        FUN7(&VAR5->VAR11, VAR12, VAR6 > 0);
        FUN7(&VAR5->VAR13, VAR14, VAR6 > 1);
    }
    if (VAR7 != -1)
    {
        FUN7(&VAR5->VAR13, VAR15, VAR7);
    }
    if (VAR8 != -1)
    {
        VAR5->VAR16 = VAR8;
    }
    if (VAR9 != -1)
    {
        VAR5->VAR17 = VAR9;
    }
}