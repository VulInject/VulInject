static int FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    if (VAR1->VAR4.VAR5 && FUN2(VAR1) == -1)
    {
        goto VAR6;
    }
    VAR1->VAR7++;
    if (VAR1->VAR8)
    {
        FUN3(VAR1->VAR3->VAR9, VAR10, VAR1);
        return 0;
    }
    switch (VAR1->VAR4.VAR11)
    {
    case VAR12:
        FUN4(FUN5(VAR3->VAR9), &VAR1->VAR13, VAR1->VAR14.VAR15, VAR16);
        VAR1->VAR7++;
        FUN6(VAR3->VAR9, VAR1->VAR17 / VAR18, &VAR1->VAR14, VAR1->VAR14.VAR15 / VAR18, VAR10, VAR1);
        break;
    case VAR19:
    case VAR20:
        if (!VAR1->VAR4.VAR5)
        {
            break;
        }
        FUN4(FUN5(VAR3->VAR9), &VAR1->VAR13, VAR1->VAR14.VAR15, VAR21);
        VAR1->VAR7++;
        FUN7(VAR3->VAR9, VAR1->VAR17 / VAR18, &VAR1->VAR14, VAR1->VAR14.VAR15 / VAR18, VAR10, VAR1);
        break;
    case VAR22:
    {
        struct VAR23 *VAR24 = (void *)&VAR1->VAR4;
        VAR1->VAR7++;
        FUN8(VAR3->VAR9, VAR24->VAR25, VAR24->VAR26, VAR10, VAR1);
        break;
    }
    default:
        goto VAR27;
    }
    FUN9(VAR1, 0);
    return 0;
VAR27:
    FUN10(VAR1);
VAR6:
    FUN11(VAR1);
    VAR1->VAR28 = VAR29;
    return -1;
}