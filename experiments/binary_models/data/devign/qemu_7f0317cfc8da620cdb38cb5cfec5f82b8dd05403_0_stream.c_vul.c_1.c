void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, BlockdevOnError VAR6, VAR7 *VAR8, void *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR13 = FUN2(&VAR14, VAR2, VAR5, VAR8, VAR9, VAR11);
    if (!VAR13)
    {
        return;
    }
    VAR13->VAR3 = VAR3;
    VAR13->VAR4 = FUN3(VAR4);
    VAR13->VAR6 = VAR6;
    VAR13->VAR15.VAR16 = FUN4(VAR17);
    FUN5(VAR2, VAR3, VAR13, VAR13->VAR15.VAR16, VAR9);
    FUN6(VAR13->VAR15.VAR16, VAR13);
}