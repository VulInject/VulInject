static int FUN1(void)
{
    TypeInfo VAR1 = {
        .VAR2 = VAR3,
        .VAR4 = VAR5,
        .VAR6 = VAR7,
    };
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = FUN2();
    if (VAR9 == NULL)
    {
        return -1;
    }
    VAR1.VAR12 = FUN3(FUN4(VAR9));
    FUN5(&VAR1);
    VAR9 = FUN6(VAR9);
    VAR11 = FUN7(VAR9);
    VAR1.VAR12 = FUN3(FUN4(VAR9));
    VAR1.VAR2 = FUN8("" VAR13, VAR11->VAR14);
    FUN5(&VAR1);
    VAR1.VAR2 = FUN8("" VAR15, "");
    VAR1.VAR12 = VAR15, VAR1.VAR16 = sizeof(VAR17);
    VAR1.VAR4 = NULL;
    VAR1.VAR6 = VAR18;
    VAR1.VAR19 = (void *)"";
    FUN5(&VAR1);
    FUN9((void *)VAR1.VAR2);
    VAR1.VAR2 = FUN8("" VAR15, VAR11->VAR14);
    VAR1.VAR19 = (void *)VAR11->VAR14;
    FUN5(&VAR1);
    FUN9((void *)VAR1.VAR2);
    return 0;
}