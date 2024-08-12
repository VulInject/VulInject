static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    if (VAR6->VAR9)
    {
        VAR10 *VAR11 = VAR2->VAR11;
        int64_t VAR12, VAR13;
        VAR13 = VAR6->VAR14 - FUN2(VAR11);
        VAR12 = FUN3(VAR13, 1024);
        if (VAR12 <= 0)
            return VAR15;
        VAR8 = FUN4(VAR11, VAR4, VAR12);
        if (VAR8 < 0)
            return VAR8;
        VAR4->VAR16 = 0;
    }
    else
    {
        VAR8 = FUN5(VAR2, VAR4);
    }
    return VAR8;
}