static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = FUN2(VAR7[0]);
    target_ulong VAR9;
    VAR10 *VAR11 = FUN3(VAR3);
    VAR12 *VAR13;
    bool VAR14 = false;
    unsigned VAR15 = VAR3->VAR16;
    unsigned VAR17 = 0, VAR16 = 0;
    unsigned VAR18 = FUN4(VAR3->VAR19);
    int VAR20;
    VAR21 *VAR22, *VAR23, *VAR24;
    for (VAR20 = 0; VAR20 < 512; ++VAR20)
    {
        uint32_t VAR25, VAR26;
        VAR26 = FUN5(&VAR27, VAR8);
        VAR8 += 4;
        VAR25 = FUN5(&VAR27, VAR8);
        VAR8 += 4;
        FUN6(VAR25);
        if (!VAR18 && ((VAR3->VAR28.VAR29[VAR30] & VAR26) == (VAR25 & VAR26)))
        {
            VAR14 = true;
            VAR16 = 0;
        }
        else if (VAR25 == VAR3->VAR16)
        {
            VAR14 = true;
            VAR16 = VAR3->VAR16;
        }
        else if (!VAR14)
        {
            FUN7(VAR11, VAR25, VAR18, &VAR17, &VAR16);
        }
        if (~VAR26 & VAR25)
        {
            break;
        }
    }
    FUN8(VAR3->VAR16, VAR14, VAR16, VAR11->VAR31);
    if (VAR15 != VAR16)
    {
        FUN9(VAR13)
        {
            SetCompatState VAR32 = {
                .VAR16 = VAR16,
                .VAR33 = NULL,
            };
            FUN10(VAR13, VAR34, FUN11(&VAR32));
            if (VAR32.VAR33)
            {
                FUN12(VAR32.VAR33);
                return VAR35;
            }
        }
    }
    VAR9 = VAR8;
    VAR22 = FUN13(VAR9, 5);
    VAR23 = FUN14(VAR5->VAR36);
    FUN15(VAR5->VAR36, VAR5->VAR37, VAR22);
    FUN16(VAR22);
    VAR24 = FUN17();
    VAR5->VAR38 = FUN18(VAR24, VAR23, VAR5->VAR36);
    if (!VAR5->VAR38)
    {
        VAR5->VAR38 = (FUN19(VAR5, VAR7[1], VAR7[2], VAR24) != 0);
    }
    FUN16(VAR24);
    if (VAR5->VAR38)
    {
        FUN20();
    }
    return VAR39;
}