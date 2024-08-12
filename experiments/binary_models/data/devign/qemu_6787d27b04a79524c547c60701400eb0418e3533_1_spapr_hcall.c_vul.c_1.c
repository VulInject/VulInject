static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = FUN2(VAR7[0]);
    target_ulong VAR9;
    VAR10 *VAR11 = FUN3(VAR3);
    VAR12 *VAR13;
    bool VAR14 = false, VAR15 = true;
    unsigned VAR16 = VAR3->VAR17;
    unsigned VAR18 = 0, VAR17 = 0;
    unsigned VAR19 = FUN4(VAR3->VAR20);
    int VAR21;
    VAR22 *VAR23;
    for (VAR21 = 0; VAR21 < 512; ++VAR21)
    {
        uint32_t VAR24, VAR25;
        VAR25 = FUN5(&VAR26, VAR8);
        VAR8 += 4;
        VAR24 = FUN5(&VAR26, VAR8);
        VAR8 += 4;
        FUN6(VAR24);
        if (!VAR19 && ((VAR3->VAR27.VAR28[VAR29] & VAR25) == (VAR24 & VAR25)))
        {
            VAR14 = true;
            VAR17 = 0;
        }
        else if (VAR24 == VAR3->VAR17)
        {
            VAR14 = true;
            VAR17 = VAR3->VAR17;
        }
        else if (!VAR14)
        {
            FUN7(VAR11, VAR24, VAR19, &VAR18, &VAR17);
        }
        if (~VAR25 & VAR24)
        {
            break;
        }
    }
    FUN8(VAR3->VAR17, VAR14, VAR17, VAR11->VAR30);
    if (VAR16 != VAR17)
    {
        FUN9(VAR13)
        {
            SetCompatState VAR31 = {
                .VAR17 = VAR17,
                .VAR32 = NULL,
            };
            FUN10(VAR13, VAR33, &VAR31);
            if (VAR31.VAR32)
            {
                FUN11(VAR31.VAR32);
                return VAR34;
            }
        }
    }
    if (!VAR17)
    {
        VAR15 = false;
    }
    VAR9 = VAR8;
    VAR23 = FUN12(VAR9, 5);
    FUN13(VAR5->VAR35, VAR5->VAR36, VAR23);
    FUN14(VAR23);
    if (FUN15(VAR5, VAR7[1], VAR7[2], VAR15))
    {
        FUN16();
    }
    return VAR37;
}