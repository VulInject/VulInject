VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5;
    int VAR6;
    if (VAR2 == VAR7)
        return NULL;
    for (VAR5 = VAR8; VAR5 != NULL; VAR5 = VAR5->VAR9)
    {
        if (VAR5->VAR10[0] == VAR2 || VAR5->VAR10[1] == VAR2 || VAR5->VAR10[2] == VAR2 || VAR5->VAR10[3] == VAR2 || VAR5->VAR10[4] == VAR2)
            goto VAR11;
    }
    return NULL;
VAR11:
    VAR3 = FUN2(sizeof(VAR1));
    if (!VAR3)
        goto VAR12;
    VAR3->VAR5 = VAR5;
    VAR3->VAR13 = FUN2(VAR5->VAR14);
    if (!VAR3->VAR13)
        goto VAR12;
    VAR3->VAR15 = 1;
    VAR3->VAR16 = VAR17;
    if (VAR5->VAR18)
    {
        if (FUN3(NULL) < 0)
            goto VAR12;
        VAR6 = VAR5->FUN4(VAR3);
        FUN5();
        if (VAR6 != 0)
            goto VAR12;
    }
    VAR3->VAR19 = -1;
    VAR3->VAR20 = 0;
    VAR3->VAR21 = VAR22;
    VAR3->VAR23 = VAR22;
    VAR3->VAR24 = VAR22;
    return VAR3;
VAR12:
    if (VAR3)
        FUN6(&VAR3->VAR13);
    FUN7(VAR3);
    return NULL;
}