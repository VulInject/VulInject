static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR3;
    VAR7 *VAR8 = &VAR6->VAR8;
    uint32_t VAR9 = FUN2(VAR2);
    VAR8->VAR10 = ((VAR9 & VAR11) == 0);
    if (FUN3(VAR8))
    {
        FUN4(VAR8, VAR9);
        return 0;
    }
    VAR8->VAR12 = VAR9 & VAR13;
    FUN5(VAR8, VAR9, 0xffffffff, VAR14);
    return 0;
}