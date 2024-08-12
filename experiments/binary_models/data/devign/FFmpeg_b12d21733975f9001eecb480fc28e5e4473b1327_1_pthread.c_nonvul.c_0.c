static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 1;
    cpu_set_t VAR5;
    FUN2(&VAR5);
    VAR3 = FUN3(0, sizeof(VAR5), &VAR5);
    if (!VAR3)
    {
        VAR4 = FUN4(&VAR5);
    }
    SYSTEM_INFO VAR6;
    FUN5(&VAR6);
    VAR4 = VAR6.VAR7;
    int VAR8[2] = {VAR9, VAR10};
    size_t VAR11 = sizeof(VAR4);
    VAR3 = FUN6(VAR8, 2, &VAR4, &VAR11, NULL, 0);
    if (VAR3 == -1)
        VAR4 = 0;
    VAR4 = FUN7(VAR12);
    VAR4 = FUN7(VAR13);
    FUN8(VAR2, VAR14, "", VAR4);
    return VAR4;
}