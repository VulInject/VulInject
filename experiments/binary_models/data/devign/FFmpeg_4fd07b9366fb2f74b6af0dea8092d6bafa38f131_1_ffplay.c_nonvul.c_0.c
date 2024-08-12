static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    if (VAR3 < 0 || VAR3 >= VAR5->VAR8)
        return;
    VAR7 = VAR5->VAR9[VAR3]->VAR10;
    switch (VAR7->VAR11)
    {
    case VAR12:
        FUN2(&VAR2->VAR13);
        FUN3();
        FUN4(&VAR2->VAR13);
        FUN5(&VAR2->VAR14);
        FUN6(&VAR2->VAR15);
        FUN7(&VAR2->VAR16);
        VAR2->VAR17 = NULL;
        FUN7(&VAR2->VAR18);
        if (VAR2->VAR19)
        {
            FUN8(VAR2->VAR19);
            FUN7(&VAR2->VAR20);
            VAR2->VAR19 = NULL;
            VAR2->VAR21 = 0;
        }
        break;
    case VAR22:
        FUN2(&VAR2->VAR23);
        FUN9(VAR2->VAR24);
        FUN10(VAR2->VAR25);
        FUN11(VAR2->VAR24);
        FUN12(VAR2->VAR26, NULL);
        FUN4(&VAR2->VAR23);
        break;
    case VAR27:
        FUN2(&VAR2->VAR28);
        FUN9(VAR2->VAR29);
        VAR2->VAR30 = 1;
        FUN10(VAR2->VAR31);
        FUN11(VAR2->VAR29);
        FUN12(VAR2->VAR32, NULL);
        FUN4(&VAR2->VAR28);
        break;
    default:
        break;
    }
    VAR5->VAR9[VAR3]->VAR33 = VAR34;
    FUN13(VAR7);
    FUN14(&VAR2->VAR35);
    switch (VAR7->VAR11)
    {
    case VAR12:
        VAR2->VAR36 = NULL;
        VAR2->VAR37 = -1;
        break;
    case VAR22:
        VAR2->VAR38 = NULL;
        VAR2->VAR39 = -1;
        break;
    case VAR27:
        VAR2->VAR40 = NULL;
        VAR2->VAR41 = -1;
        break;
    default:
        break;
    }
}