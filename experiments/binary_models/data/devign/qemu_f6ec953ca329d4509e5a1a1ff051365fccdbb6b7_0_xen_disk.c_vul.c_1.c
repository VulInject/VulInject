static int FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    int VAR4, VAR5, VAR6 = 0;
    off_t VAR7;
    if (VAR1->VAR8.VAR9 && FUN2(VAR1) == -1)
        goto VAR10;
    if (VAR1->VAR11)
        FUN3(VAR3->VAR12);
    switch (VAR1->VAR8.VAR13)
    {
    case VAR14:
        VAR7 = VAR1->VAR15;
        for (VAR4 = 0; VAR4 < VAR1->VAR16.VAR17; VAR4++)
        {
            VAR5 = FUN4(VAR3->VAR12, VAR7 / VAR18, VAR1->VAR16.VAR19[VAR4].VAR20, VAR1->VAR16.VAR19[VAR4].VAR21 / VAR18);
            if (VAR5 != 0)
            {
                FUN5(&VAR3->VAR22, 0, "", VAR1->VAR16.VAR19[VAR4].VAR20, VAR1->VAR16.VAR19[VAR4].VAR21);
                goto VAR10;
            }
            VAR6 += VAR1->VAR16.VAR19[VAR4].VAR21;
            VAR7 += VAR1->VAR16.VAR19[VAR4].VAR21;
        }
        break;
    case VAR23:
    case VAR24:
        if (!VAR1->VAR8.VAR9)
            break;
        VAR7 = VAR1->VAR15;
        for (VAR4 = 0; VAR4 < VAR1->VAR16.VAR17; VAR4++)
        {
            VAR5 = FUN6(VAR3->VAR12, VAR7 / VAR18, VAR1->VAR16.VAR19[VAR4].VAR20, VAR1->VAR16.VAR19[VAR4].VAR21 / VAR18);
            if (VAR5 != 0)
            {
                FUN5(&VAR3->VAR22, 0, "", VAR1->VAR16.VAR19[VAR4].VAR20, VAR1->VAR16.VAR19[VAR4].VAR21);
                goto VAR10;
            }
            VAR6 += VAR1->VAR16.VAR19[VAR4].VAR21;
            VAR7 += VAR1->VAR16.VAR19[VAR4].VAR21;
        }
        break;
    default:
        goto VAR10;
    }
    if (VAR1->VAR25)
        FUN3(VAR3->VAR12);
    VAR1->VAR26 = VAR27;
    FUN7(VAR1);
    FUN8(VAR1);
    return 0;
VAR10:
    VAR1->VAR26 = VAR28;
    return -1;
}