static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    VAR9 *VAR10 = FUN2(VAR9, VAR2, VAR2);
    VAR11 *VAR12 = FUN2(VAR11, VAR2, VAR4);
    VAR10->VAR12 = VAR12;
    if (VAR10->VAR13 == -1)
    {
        VAR10->VAR13 = VAR6->VAR14;
    }
    if (VAR10->VAR13 > 15)
        return -1;
    VAR6->VAR14 = VAR10->VAR13 + 1;
    return VAR12->FUN3(VAR10);
}