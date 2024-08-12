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
        if (VAR2->VAR15)
            FUN6(VAR2->VAR15);
        VAR2->VAR15 = NULL;
        if (VAR2->VAR16)
        {
            FUN7(VAR2->VAR16);
            FUN8(&VAR2->VAR17);
        }
        break;
    case VAR18:
        FUN2(&VAR2->VAR19);
        FUN9(VAR2->VAR20);
        FUN10(VAR2->VAR21);
        FUN11(VAR2->VAR20);
        FUN12(VAR2->VAR22, NULL);
        FUN4(&VAR2->VAR19);
        break;
    case VAR23:
        FUN2(&VAR2->VAR24);
        FUN9(VAR2->VAR25);
        VAR2->VAR26 = 1;
        FUN10(VAR2->VAR27);
        FUN11(VAR2->VAR25);
        FUN12(VAR2->VAR28, NULL);
        FUN4(&VAR2->VAR24);
        break;
    default:
        break;
    }
    VAR5->VAR9[VAR3]->VAR29 = VAR30;
    FUN13(VAR7);
    switch (VAR7->VAR11)
    {
    case VAR12:
        VAR2->VAR31 = NULL;
        VAR2->VAR32 = -1;
        break;
    case VAR18:
        VAR2->VAR33 = NULL;
        VAR2->VAR34 = -1;
        break;
    case VAR23:
        VAR2->VAR35 = NULL;
        VAR2->VAR36 = -1;
        break;
    default:
        break;
    }