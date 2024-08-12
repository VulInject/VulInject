static int FUN1(void)
{
    sigset_t VAR1;
    VAR2 *VAR3;
    if (VAR4)
        return 0;
    VAR3 = FUN2(sizeof(VAR2));
    if (VAR3 == NULL)
        return -VAR5;
    FUN3(&VAR1);
    FUN4(&VAR1, VAR6);
    FUN5(VAR7, &VAR1, NULL);
    VAR3->VAR8 = NULL;
    VAR3->VAR9 = FUN6(&VAR1);
    if (VAR3->VAR9 == -1)
    {
        fprintf(VAR10, "");
        return -VAR11;
    }
    FUN7(VAR3->VAR9, VAR12, VAR13);
    FUN8(VAR3->VAR9, VAR14, NULL, VAR15, VAR3);
    {
        struct aioinit VAR16;
        memset(&VAR16, 0, sizeof(VAR16));
        VAR16.VAR17 = 64;
        VAR16.VAR18 = 64;
        VAR16.VAR17 = 1;
        VAR16.VAR18 = 1;
        VAR16.VAR19 = 365 * 100000;
        FUN9(&VAR16);
    }
    VAR4 = VAR3;
    return 0;
}