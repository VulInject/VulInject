VAR1 *FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, uint32_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3->VAR10;
    VAR1 *VAR11;
    tb_page_addr_t VAR12, VAR13;
    target_ulong VAR14;
    VAR15 *VAR16;
    int VAR17, VAR18;
    int64_t VAR19;
    FUN2();
    VAR12 = FUN3(VAR9, VAR4);
    if (VAR20 && !(VAR7 & VAR21))
    {
        VAR7 |= VAR22;
    }
    VAR11 = FUN4(VAR4);
    if (FUN5(!VAR11))
    {
    VAR23:
        FUN6(VAR3);
        FUN7();
        VAR3->VAR24 = VAR25;
        FUN8(VAR3);
    }
    VAR16 = VAR26.VAR27;
    VAR11->VAR28 = VAR16;
    VAR11->VAR4 = VAR4;
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR11->VAR29 = *VAR3->VAR30;
    VAR11->VAR31 = false;
    VAR26.VAR32++;
    VAR19 = FUN9();
    FUN10(&VAR26);
    VAR26.VAR3 = FUN11(VAR9);
    FUN12(VAR3, VAR11);
    VAR26.VAR3 = NULL;
    FUN13(VAR11, VAR11->VAR4, VAR11->VAR28);
    VAR11->VAR33[0] = VAR34;
    VAR11->VAR33[1] = VAR34;
    VAR26.VAR35 = VAR11->VAR33;
    if (VAR36)
    {
        VAR26.VAR37 = VAR11->VAR38;
        VAR26.VAR39 = NULL;
    }
    else
    {
        VAR26.VAR37 = NULL;
        VAR26.VAR39 = VAR11->VAR38;
    }
    VAR26.VAR40++;
    VAR26.VAR41 += FUN9() - VAR19;
    VAR26.VAR42 -= FUN9();
    VAR17 = FUN14(&VAR26, VAR11);
    if (FUN5(VAR17 < 0))
    {
        goto VAR23;
    }
    VAR18 = FUN15(VAR11, (void *)VAR16 + VAR17);
    if (FUN5(VAR18 < 0))
    {
        goto VAR23;
    }
    VAR26.VAR42 += FUN9();
    VAR26.VAR43 += VAR11->VAR44;
    VAR26.VAR45 += VAR17;
    VAR26.VAR46 += VAR18;
    if (FUN16(VAR47) && FUN17(VAR11->VAR4))
    {
        FUN18();
        FUN19("", VAR17);
        if (VAR26.VAR48)
        {
            size_t VAR49 = VAR26.VAR48 - VAR11->VAR28;
            size_t VAR50 = VAR17 - VAR49;
            size_t VAR51;
            FUN20(VAR11->VAR28, VAR49);
            for (VAR51 = 0; VAR51 < VAR50; VAR51 += sizeof(VAR52))
            {
                if (sizeof(VAR52) == 8)
                {
                    FUN19("" VAR53 "" VAR54 "", (VAR55)VAR26.VAR48 + VAR51, *(VAR56 *)(VAR26.VAR48 + VAR51));
                }
                else
                {
                    FUN19("" VAR53 "", (VAR55)VAR26.VAR48 + VAR51, *(VAR57 *)(VAR26.VAR48 + VAR51));
                }
            }
        }
        else
        {
            FUN20(VAR11->VAR28, VAR17);
        }
        FUN19("");
        FUN21();
        FUN22();
    }
    VAR26.VAR27 = (void *)FUN23((VAR55)VAR16 + VAR17 + VAR18, VAR58);
    assert(((VAR55)VAR11 & 3) == 0);
    VAR11->VAR59 = (VAR55)VAR11 | 2;
    VAR11->VAR60[0] = (VAR55)NULL;
    VAR11->VAR60[1] = (VAR55)NULL;
    if (VAR11->VAR33[0] != VAR34)
    {
        FUN24(VAR11, 0);
    }
    if (VAR11->VAR33[1] != VAR34)
    {
        FUN24(VAR11, 1);
    }
    VAR14 = (VAR4 + VAR11->VAR44 - 1) & VAR61;
    VAR13 = -1;
    if ((VAR4 & VAR61) != VAR14)
    {
        VAR13 = FUN3(VAR9, VAR14);
    }
    FUN25(VAR11, VAR12, VAR13);
    return VAR11;
}