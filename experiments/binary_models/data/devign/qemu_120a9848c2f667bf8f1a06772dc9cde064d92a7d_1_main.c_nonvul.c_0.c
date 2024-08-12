void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5, VAR6;
    for (;;)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        VAR6 = 0;
        switch (VAR5)
        {
        case VAR7:
            FUN7(VAR8, "", VAR2->VAR9);
            FUN8(VAR10);
            break;
        case VAR11:
            FUN7(VAR8, "", VAR2->VAR9);
            VAR6 = VAR12;
            break;
        case VAR13:
        case VAR14:
            FUN9(VAR4, VAR15, fprintf, 0);
            VAR6 = VAR16;
            break;
        case VAR17:
            FUN7(VAR8, "", VAR2->VAR9);
            break;
        case VAR18:
            FUN7(VAR8, "", VAR2->VAR9);
            VAR6 = VAR12;
            break;
        case VAR19:
            FUN7(VAR8, "", VAR2->VAR9);
            VAR6 = VAR20;
            break;
        case VAR21:
            FUN7(VAR8, "", VAR2->VAR9);
            break;
        case VAR22:
        case VAR23:
            FUN7(VAR8, "");
            break;
        case VAR24:
            FUN7(VAR8, "");
            VAR6 = VAR16;
            break;
        case VAR25:
            VAR2->VAR9 += 4;
            VAR2->VAR26[11] = FUN10(VAR2, VAR2->VAR26[11], VAR2->VAR26[3], VAR2->VAR26[4], VAR2->VAR26[5], VAR2->VAR26[6], VAR2->VAR26[7], VAR2->VAR26[8], 0, 0);
            break;
        case VAR27:
            FUN7(VAR8, "");
            break;
        case VAR28:
            FUN7(VAR8, "");
            VAR6 = VAR29;
            break;
        case VAR30:
            FUN7(VAR8, "");
            break;
        default:
            FUN11(VAR2, "", VAR5);
            VAR6 = VAR20;
            break;
        }
        if (VAR6)
        {
            FUN12(VAR4, VAR6);
            if (VAR6 != VAR29)
            {
                FUN8(VAR10);
            }
        }
        FUN13(VAR2);
    }
}