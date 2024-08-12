static VAR1 FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    AVPacket VAR9, *VAR10 = &VAR9;
    int64_t VAR11 = *VAR4;
    int64_t VAR12;
    assert(VAR11 % VAR7->VAR13 == 0);
    FUN2(&VAR3->VAR14, VAR11 + VAR3->VAR15, VAR16);
    do
    {
        VAR11 = FUN3(&VAR3->VAR14) - VAR3->VAR15;
        FUN4(VAR3);
        if (FUN5(VAR3, VAR10) < 0)
            return VAR17;
        VAR12 = VAR10->VAR12;
        FUN6(VAR10);
    } while (VAR10->VAR5 != VAR5);
    *VAR4 = VAR11;
    return VAR12;
}