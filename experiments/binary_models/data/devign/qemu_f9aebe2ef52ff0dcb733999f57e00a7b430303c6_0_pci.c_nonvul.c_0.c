static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3, VAR5, VAR7);
    VAR8 *VAR7;
    int VAR9;
    assert(VAR4 == FUN3(VAR6));
    VAR7 = FUN4(VAR4);
    FUN5(VAR2, VAR7, VAR4);
    for (VAR9 = 0; VAR9 < VAR4; ++VAR9)
    {
        if ((VAR7[VAR9] ^ VAR6->VAR7[VAR9]) & VAR6->VAR10[VAR9] & ~VAR6->VAR11[VAR9] & ~VAR6->VAR12[VAR9])
        {
            FUN6(VAR7);
            return -VAR13;
        }
    }
    memcpy(VAR6->VAR7, VAR7, VAR4);
    FUN7(VAR6);
    FUN6(VAR7);
    return 0;
}