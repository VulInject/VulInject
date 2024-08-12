static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    switch (VAR2->VAR5)
    {
    case 0:
        VAR2->VAR6 = (VAR2->VAR7 <= 8) ? VAR8 : VAR9;
        break;
    case 1:
        VAR2->VAR6 = VAR10;
        break;
    case 2:
        VAR2->VAR6 = VAR11;
        break;
    }
    switch (VAR2->VAR5)
    {
    case 0:
        VAR2->VAR12 = (VAR2->VAR7 <= 8) ? VAR13 : VAR14;
        break;
    case 1:
        VAR2->VAR12 = VAR15;
        break;
    case 2:
        VAR2->VAR12 = VAR16;
        break;
    }
    VAR4->VAR17 = 1;
    for (VAR4->VAR18 = 0; VAR4->VAR18 < VAR4->VAR19; VAR4->VAR18++)
    {
        for (VAR4->VAR20 = 0; VAR4->VAR20 < VAR4->VAR21; VAR4->VAR20++)
        {
            FUN2(VAR4);
            FUN3(VAR4);
            VAR4->VAR22.FUN4(VAR4->VAR23[0]);
            FUN5(VAR2);
            if (FUN6(&VAR4->VAR24) > VAR2->VAR25 || FUN6(&VAR4->VAR24) < 0)
            {
                FUN7(VAR4, 0, 0, VAR4->VAR20, VAR4->VAR18, (VAR26 | VAR27 | VAR28));
                FUN8(VAR4->VAR29, VAR30, "", FUN6(&VAR4->VAR24), VAR2->VAR25, VAR4->VAR20, VAR4->VAR18);
                return;
            }
            if (VAR2->VAR4.VAR31)
                FUN9(VAR4, VAR2->VAR32);
        }
        FUN10(VAR4, VAR4->VAR18 * 16, 16);
        VAR4->VAR17 = 0;
    }
    FUN7(VAR4, 0, 0, VAR4->VAR21 - 1, VAR4->VAR19 - 1, (VAR26 | VAR27 | VAR28));
}