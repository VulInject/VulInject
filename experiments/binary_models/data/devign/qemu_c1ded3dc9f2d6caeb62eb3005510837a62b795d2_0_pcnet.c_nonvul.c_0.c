VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    int VAR11 = 0, VAR12 = 0, VAR13 = 0;
    uint8_t VAR14[60];
    int VAR15;
    int VAR16 = 0;
    int VAR17 = VAR6;
    if (FUN3(VAR8) || FUN4(VAR8) || FUN5(VAR8) || !VAR17 || (FUN6(VAR8) && !VAR8->VAR18))
    {
        return -1;
    }
    FUN7("", VAR17);
    if (VAR17 < VAR19)
    {
        memcpy(VAR14, VAR5, VAR17);
        memset(VAR14 + VAR17, 0, VAR19 - VAR17);
        VAR5 = VAR14;
        VAR17 = VAR19;
    }
    if (FUN8(VAR8) || (VAR11 = FUN9(VAR8, VAR5, VAR17)) || (VAR12 = FUN10(VAR8, VAR5, VAR17)) || (VAR13 = FUN11(VAR8, VAR5, VAR17)))
    {
        FUN12(VAR8);
        if (!(FUN13(VAR8) & 0x8000) && VAR8->VAR20)
        {
            struct pcnet_RMD VAR21;
            int VAR22 = FUN14(VAR8) - 1, VAR23;
            target_phys_addr_t VAR24;
            for (VAR23 = FUN15(VAR8) - 1; VAR23 > 0; VAR23--, VAR22--)
            {
                if (VAR22 <= 1)
                    VAR22 = FUN15(VAR8);
                VAR24 = VAR8->VAR20 + (FUN15(VAR8) - VAR22) * (FUN16(VAR8) ? 16 : 8);
                FUN17(&VAR21, VAR24);
                if (FUN18(VAR21.VAR25, VAR26, VAR27))
                {
                    FUN7("", VAR22, FUN14(VAR8));
                    FUN14(VAR8) = VAR22;
                    FUN12(VAR8);
                    break;
                }
            }
        }
        if (!(FUN13(VAR8) & 0x8000))
        {
            FUN7("", FUN14(VAR8));
            VAR8->VAR28[0] |= 0x1000;
            FUN19(VAR8)
            ++;
        }
        else
        {
            VAR4 *VAR29 = VAR8->VAR30;
            target_phys_addr_t VAR31 = FUN20(VAR8);
            struct pcnet_RMD VAR21;
            int VAR32 = 0;
            if (!VAR8->VAR18)
            {
                memcpy(VAR29, VAR5, VAR17);
                VAR29[VAR17] = 0;
                VAR29[VAR17 + 1] = 0;
                VAR29[VAR17 + 2] = 0;
                VAR29[VAR17 + 3] = 0;
                VAR17 += 4;
            }
            else if (VAR8->VAR18 == VAR33 || !FUN21(VAR8) || VAR17 < VAR19 + 4)
            {
                uint32_t VAR34 = ~0;
                VAR4 *VAR35 = VAR29;
                while (VAR35 != &VAR29[VAR17])
                    FUN22(VAR34, *VAR35++);
                *(VAR36 *)VAR35 = FUN23(VAR34);
                VAR17 += 4;
            }
            else
            {
                uint32_t VAR34 = ~0;
                VAR4 *VAR35 = VAR29;
                while (VAR35 != &VAR29[VAR17 - 4])
                    FUN22(VAR34, *VAR35++);
                VAR16 = (*(VAR36 *)VAR35 != FUN23(VAR34));
            }
            FUN24(VAR5);
            FUN17(&VAR21, FUN25(VAR8, VAR31));
            FUN26(&VAR21.VAR25, VAR26, VAR37, 1);
            int VAR38 = FUN27(4096 - FUN18(VAR21.VAR39, VAR40, VAR41), VAR15);
            target_phys_addr_t VAR42 = FUN25(VAR8, VAR21.VAR42);
            VAR8->FUN28(VAR8->VAR43, VAR42, VAR29, VAR38, FUN29(VAR8));
            VAR29 += VAR38;
            VAR15 -= VAR38;
            FUN26(&VAR21.VAR25, VAR26, VAR27, 0);
            FUN30(&VAR21, FUN25(VAR8, VAR31));
            VAR32++;
        }
        while (0)
            VAR15 = VAR17;
        FUN31();
        if ((VAR15 > 0) && FUN32(VAR8))
        {
            target_phys_addr_t VAR24 = FUN32(VAR8);
            FUN33(&VAR21);
            FUN17(&VAR21, FUN25(VAR8, VAR24));
            if (FUN18(VAR21.VAR25, VAR26, VAR27))
            {
                VAR31 = VAR24;
                FUN31();
                FUN33(&VAR21);
                if ((VAR15 > 0) && (VAR24 = FUN34(VAR8)))
                {
                    FUN17(&VAR21, FUN25(VAR8, VAR24));
                    if (FUN18(VAR21.VAR25, VAR26, VAR27))
                    {
                        VAR31 = VAR24;
                        FUN31();
                    }
                }
            }
        }
        FUN17(&VAR21, FUN25(VAR8, VAR31));
        if (VAR15 == 0)
        {
            FUN26(&VAR21.VAR44, VAR45, VAR46, VAR17);
            FUN26(&VAR21.VAR25, VAR26, VAR47, 1);
            FUN26(&VAR21.VAR25, VAR26, VAR48, !FUN8(VAR8) && VAR11);
            FUN26(&VAR21.VAR25, VAR26, VAR49, !FUN8(VAR8) && VAR13);
            FUN26(&VAR21.VAR25, VAR26, VAR50, !FUN8(VAR8) && VAR12);
            if (VAR16)
            {
                FUN26(&VAR21.VAR25, VAR26, VAR51, 1);
                FUN26(&VAR21.VAR25, VAR26, VAR52, 1);
            }
        }
        else
        {
            FUN26(&VAR21.VAR25, VAR26, VAR53, 1);
            FUN26(&VAR21.VAR25, VAR26, VAR54, 1);
            FUN26(&VAR21.VAR25, VAR26, VAR52, 1);
        }
        FUN30(&VAR21, FUN25(VAR8, VAR31));
        VAR8->VAR28[0] |= 0x0400;
        FUN7("", FUN14(VAR8), FUN25(VAR8, FUN20(VAR8)), VAR32);
        FUN33(&VAR21);
        while (VAR32--)
        {
            if (FUN14(VAR8) <= 1)
                FUN14(VAR8) = FUN15(VAR8);
            else
                FUN14(VAR8)
                --;
        }
        FUN12(VAR8);
    }
}
FUN35(VAR8);
FUN36(VAR8);
return VAR6;
}