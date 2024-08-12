static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int *VAR5)
{
    int VAR6;
    ProxyHeader VAR7;
    *VAR5 = 0;
    VAR4->VAR8 = 0;
    VAR6 = FUN2(VAR2->VAR9, VAR4->VAR10, VAR11);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR4->VAR8 = VAR11;
    FUN3(VAR4, 0, "", &VAR7.VAR12, &VAR7.VAR13);
    if (VAR7.VAR13 != sizeof(int))
    {
        *VAR5 = -VAR14;
        return 0;
    }
    VAR6 = FUN2(VAR2->VAR9, VAR4->VAR10 + VAR11, VAR7.VAR13);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR4->VAR8 += VAR7.VAR13;
    FUN3(VAR4, VAR11, "", VAR5);
    return 0;
}