int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2, VAR4);
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        int VAR9 = VAR4->VAR10;
        for (VAR6 = 0; VAR6 < VAR4->VAR11[VAR5]; VAR6++)
        {
            unsigned int VAR12 = VAR4->VAR13[VAR5][VAR6].VAR14;
            unsigned int VAR15 = VAR4->VAR13[VAR5][VAR6].VAR15;
            unsigned int VAR16;
            int VAR17;
            VAR18 *VAR19 = NULL;
            switch (VAR12)
            {
            case 0:
            case 1:
            {
                const unsigned int VAR20 = VAR15 + 1;
                int VAR21;
                if (VAR20 > VAR4->VAR22)
                {
                    FUN5(VAR2->VAR23, VAR24, "");
                    return VAR25;
                }
                if (VAR12 == 0)
                    VAR9 -= VAR20;
                else
                    VAR9 += VAR20;
                VAR9 &= VAR4->VAR22 - 1;
                VAR21 = FUN6(VAR2, VAR9, &VAR7);
                for (VAR17 = VAR2->VAR26 - 1; VAR17 >= 0; VAR17--)
                {
                    VAR19 = VAR2->VAR27[VAR17];
                    assert(VAR19->VAR28);
                    assert(!VAR19->VAR29);
                    if (VAR19->VAR21 == VAR21 && (VAR19->VAR28 & VAR7))
                        break;
                }
                if (VAR17 >= 0)
                    VAR19->VAR16 = VAR9;
                break;
            }
            case 2:
            {
                int VAR30;
                VAR16 = VAR15;
                VAR30 = FUN6(VAR2, VAR16, &VAR7);
                if (VAR30 > 31U)
                {
                    FUN5(VAR2->VAR23, VAR24, "");
                    return VAR25;
                }
                VAR19 = VAR2->VAR29[VAR30];
                assert(!(VAR19 && !VAR19->VAR28));
                if (VAR19 && (VAR19->VAR28 & VAR7))
                {
                    VAR19->VAR16 = VAR16;
                    assert(VAR19->VAR29);
                    VAR17 = 0;
                }
                else
                {
                    VAR17 = -1;
                }
                break;
            }
            default:
                FUN7(0);
            }
            if (VAR17 < 0)
            {
                FUN5(VAR2->VAR23, VAR24, "");
                memset(&VAR4->VAR31[VAR5][VAR6], 0, sizeof(VAR4->VAR31[0][0]));
            }
            else
            {
                for (VAR17 = VAR6; VAR17 + 1 < VAR4->VAR32[VAR5]; VAR17++)
                {
                    if (VAR4->VAR31[VAR5][VAR17].VAR33 && VAR19->VAR29 == VAR4->VAR31[VAR5][VAR17].VAR33->VAR29 && VAR19->VAR16 == VAR4->VAR31[VAR5][VAR17].VAR16)
                        break;
                }
                for (; VAR17 > VAR6; VAR17--)
                {
                    VAR4->VAR31[VAR5][VAR17] = VAR4->VAR31[VAR5][VAR17 - 1];
                }
                FUN8(&VAR4->VAR31[VAR5][VAR6], VAR19);
                if (FUN9(VAR2))
                {
                    FUN10(&VAR4->VAR31[VAR5][VAR6], VAR7);
                }
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR4->VAR32[VAR5]; VAR6++)
        {
            if (!VAR4->VAR31[VAR5][VAR6].VAR33 || (!FUN9(VAR2) && (VAR4->VAR31[VAR5][VAR6].VAR28 & 3) != 3))
            {
                int VAR17;
                FUN5(VAR2->VAR23, VAR24, "", VAR2->VAR34[VAR5].VAR35);
                for (VAR17 = 0; VAR17 < FUN11(VAR2->VAR36); VAR17++)
                    VAR2->VAR36[VAR17] = VAR37;
                if (VAR2->VAR34[VAR5].VAR33 && !(!FUN9(VAR2) && (VAR2->VAR34[VAR5].VAR28 & 3) != 3))
                    VAR4->VAR31[VAR5][VAR6] = VAR2->VAR34[VAR5];
                else
                    return -1;
            }
            FUN12(FUN13(VAR4->VAR31[VAR5][VAR6].VAR33->VAR38->VAR39[0]) > 0);
        }
    }
    if (FUN14(VAR2))
        FUN15(VAR4);
    return 0;
}