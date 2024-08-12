void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    while (1)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        switch (VAR5)
        {
        case VAR6:
            VAR2->VAR7[VAR8] = FUN7(VAR2, VAR2->VAR7[VAR9], VAR2->VAR7[0], VAR2->VAR7[1], VAR2->VAR7[2], VAR2->VAR7[3], VAR2->VAR7[4], VAR2->VAR7[5], VAR2->VAR7[6], VAR2->VAR7[7]);
            VAR2->VAR7[VAR10] = FUN8(VAR2->VAR7[VAR8]) ? -VAR2->VAR7[VAR8] : 0;
            break;
        case VAR11:
            FUN9(VAR2, true, false);
            break;
        case VAR12:
            FUN9(VAR2, false, false);
            break;
        case VAR13:
            FUN9(VAR2, true, true);
            break;
        case VAR14:
            FUN9(VAR2, false, true);
            break;
        case VAR15:
        case VAR16:
        case VAR17:
        case VAR18:
            FUN10(VAR2, VAR5, true);
            break;
        case VAR19:
        case VAR20:
        case VAR21:
        case VAR22:
            FUN10(VAR2, VAR5, false);
            break;
        case VAR23:
            FUN11(VAR2, VAR2->VAR24, VAR2->VAR25);
            break;
        case VAR26:
        case VAR27:
            FUN12(VAR2);
            break;
        default:
            fprintf(VAR28, "", VAR5, VAR5);
            FUN13();
        }
        FUN14(VAR2);
    }
}