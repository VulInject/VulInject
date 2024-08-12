static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = FUN2(VAR7[0]);
    target_ulong VAR9;
    bool VAR10 = false;
    uint32_t VAR11 = VAR3->VAR11;
    uint32_t VAR12 = 0;
    int VAR13;
    VAR14 *VAR15, *VAR16, *VAR17;
    bool VAR18;
    for (VAR13 = 0; VAR13 < 512; ++VAR13)
    {
        uint32_t VAR19, VAR20;
        VAR20 = FUN3(&VAR21, VAR8);
        VAR19 = FUN3(&VAR21, VAR8 + 4);
        VAR8 += 8;
        if (~VAR20 & VAR19)
        {
            break;
        }
        if ((VAR3->VAR22.VAR23[VAR24] & VAR20) == (VAR19 & VAR20))
        {
            VAR10 = true;
        }
        else
        {
            if (FUN4(VAR3, VAR19, VAR12, VAR11))
            {
                VAR12 = VAR19;
            }
        }
    }
    if ((VAR12 == 0) && (!VAR10 || VAR11))
    {
        return VAR25;
    }
    FUN5(VAR3->VAR26, VAR10, VAR12);
    if (VAR3->VAR26 != VAR12)
    {
        VAR27 *VAR28 = NULL;
        FUN6(VAR12, &VAR28);
        if (VAR28)
        {
            FUN7(VAR28);
            return VAR25;
        }
    }
    VAR9 = VAR8;
    VAR15 = FUN8(VAR9, 5);
    if (FUN9(VAR15, VAR29))
    {
        FUN10("");
        FUN11(VAR30);
    }
    VAR18 = FUN9(VAR15, VAR31);
    FUN12(VAR15, VAR31);
    VAR16 = FUN13(VAR5->VAR32);
    FUN14(VAR5->VAR32, VAR5->VAR33, VAR15);
    FUN15(VAR15);
    VAR17 = FUN16();
    VAR5->VAR34 = FUN17(VAR17, VAR16, VAR5->VAR32);
    if (VAR18)
    {
        if (FUN18() && !FUN19())
        {
            FUN10("");
            FUN11(VAR30);
        }
        FUN20(VAR5->VAR32, VAR31);
    }
    else
    {
        if (FUN18() && FUN19() && !FUN21())
        {
            FUN10("");
            FUN11(VAR30);
        }
    }
    if (!VAR5->VAR34)
    {
        VAR5->VAR34 = (FUN22(VAR5, VAR7[1], VAR7[2], VAR17) != 0);
    }
    FUN15(VAR17);
    if (VAR5->VAR34)
    {
        FUN23();
    }
    else
    {
        if ((VAR5->VAR35 & VAR36) && !VAR18)
        {
            FUN24(VAR5);
        }
    }
    return VAR37;
}