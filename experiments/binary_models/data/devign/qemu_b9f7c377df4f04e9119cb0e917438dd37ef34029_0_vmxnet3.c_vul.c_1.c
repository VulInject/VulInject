static void FUN1(struct VAR1 *VAR2, const void *VAR3, size_t VAR4)
{
    struct VAR5 *VAR6;
    bool VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    int VAR13;
    if (!FUN2(VAR2))
    {
        return;
    }
    VAR6 = FUN3(VAR2);
    if (!FUN4(VAR6->VAR14, VAR15))
    {
        return;
    }
    FUN5(VAR2, &VAR7, &VAR8, &VAR10, &VAR9);
    if (!(VAR7 || VAR8) || !(VAR9 || VAR10))
    {
        return;
    }
    FUN6(VAR6);
    if (VAR4 < (VAR6->VAR16 + VAR6->VAR17 + 2))
    {
        FUN7(""
                  "",
                  VAR13, VAR6->VAR16, VAR6->VAR17);
        return;
    }
    VAR12 = (VAR11 *)VAR3 + VAR6->VAR16;
    VAR13 = VAR4 - VAR6->VAR16;
    FUN8(VAR12 + VAR6->VAR17, FUN9(VAR12, VAR13));
    VAR6->VAR14 &= ~VAR15;
    VAR6->VAR14 |= VAR18;
}