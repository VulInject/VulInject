static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    void (*VAR6)(VAR1 * VAR2, VAR7 * VAR8);
    switch (VAR2->VAR9[1].VAR10.VAR11)
    {
    case VAR12:
        VAR6 = VAR13;
        break;
    case VAR14:
        VAR6 = VAR15;
        break;
    default:
        VAR6 = VAR2->VAR16;
    }
    for (VAR5 = 3; VAR5 >= 0; VAR5--)
    {
        for (VAR4 = 0; VAR4 < VAR17; VAR4++)
        {
            VAR18 *VAR19 = VAR2->VAR19[VAR5][VAR4];
            if (VAR19 && VAR19->VAR20)
            {
                if (VAR5 <= VAR21)
                    FUN2(VAR2, VAR19, VAR5, VAR4, VAR22, FUN3(VAR23));
                if (VAR2->VAR9[1].VAR10.VAR11 == VAR24)
                {
                    if (VAR19->VAR25[0].VAR26.VAR27)
                    {
                        if (VAR19->VAR25[0].VAR26.VAR28.VAR20)
                            VAR2->FUN4(VAR2, &VAR19->VAR25[0]);
                        if (VAR19->VAR25[1].VAR26.VAR28.VAR20 && VAR5 == VAR21)
                            VAR2->FUN4(VAR2, &VAR19->VAR25[1]);
                    }
                }
                if (VAR19->VAR25[0].VAR29.VAR20)
                    VAR2->FUN5(VAR19->VAR25[0].VAR30, &VAR19->VAR25[0].VAR29, &VAR19->VAR25[0].VAR26, 1);
                if (VAR19->VAR25[1].VAR29.VAR20)
                    VAR2->FUN5(VAR19->VAR25[1].VAR30, &VAR19->VAR25[1].VAR29, &VAR19->VAR25[1].VAR26, 1);
                if (VAR5 <= VAR21)
                    FUN2(VAR2, VAR19, VAR5, VAR4, VAR31, FUN3(VAR23));
                if (VAR5 != VAR32 || VAR19->VAR33.VAR34 == VAR35)
                {
                    FUN6(VAR2, &VAR19->VAR25[0]);
                    if (VAR2->VAR9[1].VAR10.VAR11 == VAR24)
                        VAR2->FUN7(VAR2, &VAR19->VAR25[0]);
                    if (VAR5 == VAR21)
                    {
                        FUN6(VAR2, &VAR19->VAR25[1]);
                        if (VAR2->VAR9[1].VAR10.VAR11 == VAR24)
                            VAR2->FUN7(VAR2, &VAR19->VAR25[1]);
                    }
                    if (VAR2->VAR9[1].VAR10.VAR36 > 0)
                    {
                        FUN3(VAR37)
                        (VAR2, &VAR19->VAR36, VAR5, VAR19->VAR25[0].VAR38, VAR19->VAR25[1].VAR38);
                    }
                }
                if (VAR5 <= VAR32)
                    FUN2(VAR2, VAR19, VAR5, VAR4, VAR35, FUN3(VAR39));
                {
                    int VAR40;
                    for (VAR40 = 0; VAR40 < VAR3; VAR40++)
                    {
                        VAR19->VAR25[0].VAR38[VAR40] = (VAR41)FUN8((VAR42)VAR19->VAR25[0].VAR38[VAR40] << 7, VAR43, VAR44 - 0x8000) + 0x8000;
                        if (VAR5 == VAR21)
                            VAR19->VAR25[1].VAR38[VAR40] = (VAR41)FUN8((VAR42)VAR19->VAR25[1].VAR38[VAR40] << 7, VAR43, VAR44 - 0x8000) + 0x8000;
                    }
                }
                VAR19->VAR20 = 0;
            }
            else if (VAR19)
            {
                FUN9(VAR2->VAR45, VAR46, "", VAR5, VAR4);
            }
        }
    }
}