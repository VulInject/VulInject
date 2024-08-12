static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    uint32_t VAR9 = 0;
    int VAR10 = 0;
    VAR8 = FUN2(VAR7, 1);
    VAR8->VAR6 = VAR6;
    if (VAR6->VAR11)
    {
        VAR10 = VAR6->FUN3(VAR2, VAR8->VAR6, VAR4->VAR12 + VAR6->VAR13, &VAR9);
        if (VAR10 < 0)
        {
            free(VAR8);
            return VAR10;
        }
        if (VAR9 == VAR14)
        {
            free(VAR8);
            return 0;
        }
        VAR8->VAR9 = VAR9;
    }
    FUN4(&VAR4->VAR15, VAR8, VAR16);
    return 0;
}