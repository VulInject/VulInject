VAR1 *FUN1(VAR2 *VAR3, int VAR4, VAR5 **VAR6)
{
    int64_t VAR7;
    VAR1 *VAR8;
    assert((VAR4 & (VAR4 - 1)) == 0);
    VAR4 >>= VAR9;
    assert(VAR4);
    VAR7 = FUN2(VAR3);
    if (VAR7 < 0)
    {
        FUN3(VAR6, -VAR7, "");
        VAR10 = -VAR7;
        return NULL;
    }
    VAR8 = FUN4(VAR1, 1);
    VAR8->VAR8 = FUN5(VAR7, FUN6(VAR4));
    FUN7(&VAR3->VAR11, VAR8, VAR12);
    return VAR8;
}