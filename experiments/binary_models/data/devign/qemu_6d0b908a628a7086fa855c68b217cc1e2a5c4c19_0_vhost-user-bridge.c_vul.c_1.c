FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    struct timeval VAR4;
    VAR4.VAR5 = VAR3 / 1000000;
    VAR4.VAR6 = VAR3 % 1000000;
    fd_set VAR7 = VAR2->VAR7;
    int VAR8 = FUN2(VAR2->VAR9 + 1, &VAR7, 0, 0, &VAR4);
    if (VAR8 == -1)
    {
        FUN3("");
    }
    if (VAR8 == 0)
    {
        return 0;
    }
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR2->VAR9 + 1; VAR10++)
        if (FUN4(VAR10, &VAR7))
        {
            VAR11 *VAR12 = &VAR2->VAR13[VAR10];
            VAR12->FUN5(VAR10, VAR12->VAR14);
        }
    return 0;
}