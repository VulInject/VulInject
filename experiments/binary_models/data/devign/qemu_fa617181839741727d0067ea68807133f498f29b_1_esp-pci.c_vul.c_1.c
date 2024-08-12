static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR4->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    VAR11 = VAR2->VAR14;
    VAR11[VAR15] = 0x01;
    VAR8->VAR16 = VAR17;
    VAR8->VAR18 = VAR19;
    VAR8->VAR20 = VAR4;
    VAR8->VAR21 = VAR22;
    FUN4(&VAR4->VAR23, FUN5(VAR4), &VAR24, VAR4, "", 0x80);
    FUN6(VAR2, 0, VAR25, &VAR4->VAR23);
    VAR8->VAR26 = FUN7(VAR2);
    FUN8(&VAR8->VAR27, sizeof(VAR8->VAR27), VAR6, &VAR28, NULL);
    if (!VAR6->VAR29)
    {
        FUN9(&VAR8->VAR27, &VAR13);
        if (VAR13 != NULL)
        {
            FUN10(VAR13);
            return -1;
        }
    }
    return 0;