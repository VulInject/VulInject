void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint16_t VAR7)
{
    VAR8 *VAR9 = FUN2(FUN3());
    VAR6->VAR10 = VAR9->VAR11;
    if (!VAR6->VAR10)
    {
        return;
    }
    assert(!VAR12);
    VAR12 = VAR7;
    VAR6->VAR13 = FUN4(sizeof(*VAR6->VAR13) * VAR6->VAR10);
    FUN5(&VAR6->VAR14, VAR4, &VAR15, VAR6, "", VAR16);
    FUN6(VAR2, VAR12, &VAR6->VAR14);
}