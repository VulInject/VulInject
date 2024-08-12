int FUN1(void)
{
    ULONG VAR1 = 0;
    extern struct VAR2 *VAR3;
    VAR3->FUN2(VAR4, &VAR1, VAR5);
    if (VAR1 == VAR6)
        return 1;
    return 0;
    int VAR7[2] = {VAR8, VAR9};
    int VAR10 = 0;
    size_t VAR11 = sizeof(VAR10);
    int VAR12;
    VAR12 = FUN3(VAR7, 2, &VAR10, &VAR11, NULL, 0);
    if (VAR12 == 0)
        return (VAR10 != 0);
    {
        signal(VAR13, VAR14);
        if (FUN4(VAR15, 1))
        {
            signal(VAR13, VAR16);
        }
        else
        {
            VAR17 = 1;
            asm volatile(""
                         ""
                         :
                         : ""(-1));
            signal(VAR13, VAR16);
            return 1;
        }
    }
    return 0;
}