static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 != 2)
        return -VAR7;
    FUN2(&VAR6->VAR8, VAR2);
    while (FUN3(VAR2))
    {
        VAR9 *VAR10 = FUN4(VAR6);
        FUN5(VAR2, (unsigned char *)&VAR10->VAR11, sizeof(VAR10->VAR11));
        VAR10->VAR12 = VAR6->VAR13;
        VAR6->VAR13 = VAR10;
    }
    return 0;
}