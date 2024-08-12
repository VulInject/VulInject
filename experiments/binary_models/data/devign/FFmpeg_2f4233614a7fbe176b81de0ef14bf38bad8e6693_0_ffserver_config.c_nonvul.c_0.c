static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    VAR9 **VAR10, *VAR11 = NULL;
    char *VAR12;
    if (VAR2->VAR13 >= FUN2(VAR2->VAR14))
        return;
    VAR10 = VAR4->VAR15 == VAR16 ? &VAR6->VAR17 : &VAR6->VAR18;
    FUN3(&VAR11, *VAR10, 0);
    FUN4(VAR4->VAR19, VAR10, VAR20);
    FUN4(VAR4, VAR10, VAR20);
    if (FUN5(*VAR10))
        FUN6(NULL, VAR21, "", FUN5(*VAR10));
    if (VAR6->VAR22)
    {
        switch (VAR4->VAR15)
        {
        case VAR16:
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR23 = 64000;
                FUN8(&VAR11, "", VAR4->VAR23, 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR24 = 22050;
                FUN8(&VAR11, "", VAR4->VAR24, 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR25 = 1;
                FUN8(&VAR11, "", VAR4->VAR25, 0);
            }
            break;
        case VAR26:
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR23 = 64000;
                FUN8(&VAR11, "", VAR4->VAR23, 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR27.VAR28 = 5;
                VAR4->VAR27.VAR29 = 1;
                FUN9(&VAR11, "", "", 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR30 = 160;
                VAR4->VAR31 = 128;
                FUN9(&VAR11, "", "", 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR32 = FUN10(VAR4->VAR23 / 4, (VAR33)VAR4->VAR23 * VAR4->VAR27.VAR29 / VAR4->VAR27.VAR28);
                FUN8(&VAR11, "", VAR4->VAR32, 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR34 = FUN11("");
                FUN9(&VAR11, "", "", 0);
            }
            if (!FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR35 = VAR4->VAR23 * 2;
                FUN8(&VAR11, "", VAR4->VAR35, 0);
            }
            if (VAR4->VAR35 && !FUN7(VAR11, "", NULL, 0))
            {
                VAR4->VAR36 = VAR4->VAR35;
                FUN8(&VAR11, "", VAR4->VAR36, 0);
            }
            break;
        default:
            FUN12();
        }
    }
    else
    {
        switch (VAR4->VAR15)
        {
        case VAR16:
            if (VAR4->VAR23 == 0)
                FUN13(VAR6->VAR37, VAR6->VAR38, VAR39, &VAR6->VAR40, "");
            if (VAR4->VAR24 == 0)
                FUN13(VAR6->VAR37, VAR6->VAR38, VAR39, &VAR6->VAR40, "");
            break;
        case VAR26:
            if (VAR4->VAR30 == 0 || VAR4->VAR31 == 0)
                FUN13(VAR6->VAR37, VAR6->VAR38, VAR39, &VAR6->VAR40, "");
            break;
        default:
            FUN14(0);
        }
    }
    VAR8 = FUN15(sizeof(VAR7));
    if (!VAR8)
        return;
    FUN16(VAR11, &VAR12, '', '');
    FUN17(&VAR11);
    FUN18(VAR8, VAR12);
    VAR8->VAR41 = VAR4;
    VAR2->VAR14[VAR2->VAR13++] = VAR8;
}