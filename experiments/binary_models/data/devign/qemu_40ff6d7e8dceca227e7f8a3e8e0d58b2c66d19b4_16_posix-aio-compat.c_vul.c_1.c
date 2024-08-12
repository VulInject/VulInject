int FUN1(void)
{
    struct sigaction VAR1;
    VAR2 *VAR3;
    int VAR4[2];
    int VAR5;
    if (VAR6)
        return 0;
    VAR3 = FUN2(sizeof(VAR2));
    FUN3(&VAR1.VAR7);
    VAR1.VAR8 = 0;
    VAR1.VAR9 = VAR10;
    FUN4(VAR11, &VAR1, NULL);
    VAR3->VAR12 = NULL;
    if (FUN5(VAR4) == -1)
    {
        fprintf(VAR13, "");
        return -1;
    }
    VAR3->VAR14 = VAR4[0];
    VAR3->VAR15 = VAR4[1];
    FUN6(VAR3->VAR14, VAR16, VAR17);
    FUN6(VAR3->VAR15, VAR16, VAR17);
    FUN7(VAR3->VAR14, VAR18, NULL, VAR19, VAR20, VAR3);
    VAR5 = pthread_attr_init(&VAR21);
    if (VAR5)
        FUN8(VAR5, "");
    VAR5 = FUN9(&VAR21, VAR22);
    if (VAR5)
        FUN8(VAR5, "");
    FUN10(&VAR23);
    VAR6 = VAR3;
    return 0;
}