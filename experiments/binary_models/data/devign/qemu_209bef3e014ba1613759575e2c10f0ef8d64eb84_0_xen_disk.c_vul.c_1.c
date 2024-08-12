static int FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    if (VAR1->VAR4.VAR5 && FUN2(VAR1) == -1)
        goto VAR6;
    VAR1->VAR7++;
    if (VAR1->VAR8)
        FUN3(VAR3->VAR9);
    switch (VAR1->VAR4.VAR10)
    {
    case VAR11:
        VAR1->VAR7++;
        FUN4(VAR3->VAR9, VAR1->VAR12 / VAR13, &VAR1->VAR14, VAR1->VAR14.VAR15 / VAR13, VAR16, VAR1);
        break;
    case VAR17:
    case VAR18:
        VAR1->VAR7++;
        if (!VAR1->VAR4.VAR5)
            break;
        FUN5(VAR3->VAR9, VAR1->VAR12 / VAR13, &VAR1->VAR14, VAR1->VAR14.VAR15 / VAR13, VAR16, VAR1);
        break;
    default:
        goto VAR6;
    }
    if (VAR1->VAR19)
        FUN3(VAR3->VAR9);
    FUN6(VAR1, 0);
    return 0;
VAR6:
    VAR1->VAR20 = VAR21;
    return -1;
}