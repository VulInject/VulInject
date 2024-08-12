void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR3 *VAR7;
    int VAR8;
    FUN4();
    VAR8 = 0;
    FUN5(VAR7) { VAR8++; }
    VAR4->VAR8 = VAR8;
    VAR4->VAR9 = 0;
    FUN6(&VAR4->VAR10);
    FUN6(&VAR4->VAR11);
    VAR4->VAR12 = &VAR13;
    VAR4->VAR14 = FUN7();
    FUN8(&VAR15, VAR4, VAR16);
    FUN9();
    if (FUN10(FUN11(VAR4)) == NULL)
    {
        FUN12(NULL, VAR8, &VAR17, VAR4);
    }
    FUN13(NULL, "", VAR8, VAR18, VAR19, VAR20, VAR2);
    assert(VAR6->VAR21 == NULL);
    assert(FUN10(FUN11(VAR4)) == NULL);
    if (VAR6->VAR21 != NULL)
    {
        FUN12(NULL, VAR8, VAR6->VAR21, VAR4);
    }