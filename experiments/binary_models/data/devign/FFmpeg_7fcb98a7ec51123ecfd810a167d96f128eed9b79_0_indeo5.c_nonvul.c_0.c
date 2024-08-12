static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR5->VAR15 = VAR5->VAR16[VAR2->VAR17];
    VAR5->VAR18 = VAR5->VAR16[VAR2->VAR18];
    VAR5->VAR19 = VAR2->VAR20 + (FUN2(&VAR2->VAR21) >> 3);
    VAR8 = FUN3(VAR2, VAR5, VAR7);
    if (VAR8)
    {
        FUN4(VAR7, VAR22, "", VAR8);
        return -1;
    }
    if (VAR5->VAR23)
    {
        FUN4(VAR7, VAR22, "");
        return -1;
    }
    if (VAR5->VAR24 == 8)
    {
        VAR5->VAR25 = &VAR26[VAR5->VAR27][0];
        VAR5->VAR28 = &VAR29[VAR5->VAR27][0];
        VAR5->VAR30 = &VAR31[VAR5->VAR27][0];
        VAR5->VAR32 = &VAR33[VAR5->VAR27][0];
    }
    else
    {
        VAR5->VAR25 = VAR34;
        VAR5->VAR28 = VAR35;
        VAR5->VAR30 = VAR36;
        VAR5->VAR32 = VAR37;
    }
    VAR5->VAR38 = &VAR2->VAR39[VAR5->VAR40];
    for (VAR9 = 0; VAR9 < VAR5->VAR41; VAR9++)
    {
        VAR11 = VAR5->VAR42[VAR9 * 2];
        VAR12 = VAR5->VAR42[VAR9 * 2 + 1];
        FUN5(VAR43, VAR5->VAR38->VAR44[VAR11], VAR5->VAR38->VAR44[VAR12]);
        FUN5(VAR45, VAR5->VAR38->VAR46[VAR11], VAR5->VAR38->VAR46[VAR12]);
    }
    for (VAR10 = 0; VAR10 < VAR5->VAR47; VAR10++)
    {
        VAR14 = &VAR5->VAR48[VAR10];
        VAR14->VAR23 = FUN6(&VAR2->VAR21);
        if (VAR14->VAR23)
        {
            FUN7(VAR7, VAR5, VAR14, (VAR2->VAR49[0].VAR50[0].VAR51 >> 3) - (VAR5->VAR51 >> 3));
            FUN8(&VAR2->VAR21);
        }
        else
        {
            VAR14->VAR52 = FUN9(&VAR2->VAR21);
            VAR8 = FUN10(VAR2, VAR5, VAR14, VAR7);
            if (VAR8 < 0)
                break;
            VAR8 = FUN11(&VAR2->VAR21, VAR5, VAR14);
            if (VAR8 < 0)
            {
                FUN4(VAR7, VAR22, "");
                break;
            }
        }
    }
    for (VAR9 = VAR5->VAR41 - 1; VAR9 >= 0; VAR9--)
    {
        VAR11 = VAR5->VAR42[VAR9 * 2];
        VAR12 = VAR5->VAR42[VAR9 * 2 + 1];
        FUN5(VAR43, VAR5->VAR38->VAR44[VAR11], VAR5->VAR38->VAR44[VAR12]);
        FUN5(VAR45, VAR5->VAR38->VAR46[VAR11], VAR5->VAR38->VAR46[VAR12]);
    }
    if (VAR5->VAR53)
    {
        uint16_t VAR54 = FUN12(VAR5);
        if (VAR54 != VAR5->VAR55)
        {
            FUN4(VAR7, VAR22, "", VAR5->VAR56, VAR5->VAR57, VAR5->VAR55, VAR54);
        }
    }
    return VAR8;
}