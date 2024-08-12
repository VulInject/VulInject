static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint32_t VAR6 = FUN3();
    uint32_t VAR7 = FUN4();
    if (VAR6 != -1)
    {
        FUN5(&VAR5->VAR8, VAR9, VAR6 > 0);
        FUN5(&VAR5->VAR10, VAR11, VAR6 > 1);
    }
    if (VAR7 != -1)
    {
        FUN5(&VAR5->VAR10, VAR12, VAR7);
    }
    if (VAR13 != -1)
    {
        VAR5->VAR14 = VAR13;
    }
    if (VAR15 != -1)
    {
        VAR5->VAR16 = VAR15;
    }