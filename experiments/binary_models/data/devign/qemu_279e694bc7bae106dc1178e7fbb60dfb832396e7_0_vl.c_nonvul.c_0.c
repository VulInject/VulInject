static VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    struct termios VAR5;
    int VAR6;
    VAR2 = FUN2(sizeof(VAR1));
    if (!VAR2)
        return NULL;
    VAR4 = FUN2(sizeof(VAR3));
    if (!VAR4)
    {
        FUN3(VAR2);
        return NULL;
    }
    if (FUN4(&VAR4->VAR7, &VAR6, NULL, NULL, NULL) < 0)
    {
        return NULL;
    }
    FUN5(&VAR5);
    FUN6(VAR6, VAR8, &VAR5);
    close(VAR6);
    fprintf(VAR9, "", FUN7(VAR4->VAR7));
    VAR2->VAR10 = VAR4;
    VAR2->VAR11 = VAR12;
    VAR2->VAR13 = VAR14;
    VAR2->VAR15 = VAR16;
    VAR4->VAR17 = FUN8(VAR18, VAR19, VAR2);
    return VAR2;
}