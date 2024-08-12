static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = &VAR2->VAR9->VAR8;
    GetBitContext VAR10;
    int VAR11, VAR12 = 0;
    FUN2(VAR2->VAR13, VAR14, "");
    VAR11 = FUN3(VAR8);
    if (VAR11)
    {
        uint8_t VAR15 = FUN4(VAR8, 8);
        if (VAR15 < FUN5(VAR16))
            VAR6->VAR17 = VAR16[VAR15];
        else if (VAR15 == 255)
        {
            VAR6->VAR17.VAR18 = FUN4(VAR8, 16);
            VAR6->VAR17.VAR19 = FUN4(VAR8, 16);
        }
        else
            FUN2(VAR2->VAR13, VAR20, "", VAR15);
    }
    VAR6->VAR21 = FUN3(VAR8);
    if (VAR6->VAR21)
        VAR6->VAR22 = FUN3(VAR8);
    VAR6->VAR23 = FUN3(VAR8);
    if (VAR6->VAR23)
    {
        VAR6->VAR24 = FUN4(VAR8, 3);
        VAR6->VAR25 = FUN3(VAR8);
        VAR6->VAR26 = FUN3(VAR8);
        if (VAR6->VAR25 && VAR4->VAR27 == VAR28)
            VAR4->VAR27 = VAR29;
        if (VAR6->VAR26)
        {
            VAR6->VAR30 = FUN4(VAR8, 8);
            VAR6->VAR31 = FUN4(VAR8, 8);
            VAR6->VAR32 = FUN4(VAR8, 8);
            if (VAR6->VAR30 >= VAR33)
                VAR6->VAR30 = VAR34;
            if (VAR6->VAR31 >= VAR35)
                VAR6->VAR31 = VAR36;
            if (VAR6->VAR32 >= VAR37)
                VAR6->VAR32 = VAR38;
        }
    }
    VAR6->VAR39 = FUN3(VAR8);
    if (VAR6->VAR39)
    {
        VAR6->VAR40 = FUN6(VAR8);
        VAR6->VAR41 = FUN6(VAR8);
    }
    VAR6->VAR42 = FUN3(VAR8);
    VAR6->VAR43 = FUN3(VAR8);
    VAR6->VAR44 = FUN3(VAR8);
    VAR6->VAR45 = FUN3(VAR8);
    memcpy(&VAR10, VAR8, sizeof(VAR10));
    if (VAR6->VAR45)
    {
        VAR6->VAR46.VAR47 = FUN6(VAR8) * 2;
        VAR6->VAR46.VAR48 = FUN6(VAR8) * 2;
        VAR6->VAR46.VAR49 = FUN6(VAR8) * 2;
        VAR6->VAR46.VAR50 = FUN6(VAR8) * 2;
        if (VAR2->VAR51 && VAR2->VAR13->VAR52 & VAR53)
        {
            FUN2(VAR2->VAR13, VAR14, ""
                                           "",
                   VAR6->VAR46.VAR47, VAR6->VAR46.VAR48, VAR6->VAR46.VAR49, VAR6->VAR46.VAR50);
            VAR6->VAR46.VAR47 = VAR6->VAR46.VAR48 = VAR6->VAR46.VAR49 = VAR6->VAR46.VAR50 = 0;
        }
    }
    VAR6->VAR54 = FUN3(VAR8);
    if (VAR6->VAR54)
    {
        if (FUN7(VAR8) < 66)
        {
            FUN2(VAR2->VAR13, VAR20, "");
            VAR6->VAR45 = 0;
            memset(&VAR6->VAR46, 0, sizeof(VAR6->VAR46));
            memcpy(VAR8, &VAR10, sizeof(VAR10));
            VAR12 = 1;
        }
        VAR6->VAR55 = FUN8(VAR8, 32);
        VAR6->VAR56 = FUN8(VAR8, 32);
        if (VAR12)
        {
            FUN2(VAR2->VAR13, VAR57, "", VAR6->VAR56, VAR6->VAR55);
        }
        VAR6->VAR58 = FUN3(VAR8);
        if (VAR6->VAR58)
            VAR6->VAR59 = FUN6(VAR8);
        VAR6->VAR60 = FUN3(VAR8);
        if (VAR6->VAR60)
            FUN9(VAR2, 1, VAR4->VAR61);
    }
    VAR6->VAR62 = FUN3(VAR8);
    if (VAR6->VAR62)
    {
        VAR6->VAR63 = FUN3(VAR8);
        VAR6->VAR64 = FUN3(VAR8);
        VAR6->VAR65 = FUN3(VAR8);
        VAR6->VAR66 = FUN6(VAR8);
        VAR6->VAR67 = FUN6(VAR8);
        VAR6->VAR68 = FUN6(VAR8);
        VAR6->VAR69 = FUN6(VAR8);
        VAR6->VAR70 = FUN6(VAR8);
    }
}