VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    int VAR9 = 0, VAR10 = 0, VAR11 = 0;
    uint8_t VAR12[60];
    int VAR13;
    int VAR14 = 0;
    int VAR15 = VAR6;
    if (FUN3(VAR8) || FUN4(VAR8) || FUN5(VAR8) || !VAR15 || (FUN6(VAR8) && !VAR8->VAR16))
    {
        return -1;
    }
    FUN7("", VAR15);
    if (VAR15 < VAR17)
    {
        memcpy(VAR12, VAR5, VAR15);
        memset(VAR12 + VAR15, 0, VAR17 - VAR15);
        VAR5 = VAR12;
        VAR15 = VAR17;
    }
    if (FUN8(VAR8) || (VAR9 = FUN9(VAR8, VAR5, VAR15)) || (VAR10 = FUN10(VAR8, VAR5, VAR15)) || (VAR11 = FUN11(VAR8, VAR5, VAR15)))
    {
        FUN12(VAR8);
        if (!(FUN13(VAR8) & 0x8000) && VAR8->VAR18)
        {
            struct pcnet_RMD VAR19;
            int VAR20 = FUN14(VAR8) - 1, VAR21;
            hwaddr VAR22;
            for (VAR21 = FUN15(VAR8) - 1; VAR21 > 0; VAR21--, VAR20--)
            {
                if (VAR20 <= 1)
                    VAR20 = FUN15(VAR8);
                VAR22 = VAR8->VAR18 + (FUN15(VAR8) - VAR20) * (FUN16(VAR8) ? 16 : 8);
                FUN17(&VAR19, VAR22);
                if (FUN18(VAR19.VAR23, VAR24, VAR25))
                {
                    FUN7("", VAR20, FUN14(VAR8));
                    FUN14(VAR8) = VAR20;
                    FUN12(VAR8);
                    break;
                }
            }
        }
        if (!(FUN13(VAR8) & 0x8000))
        {
            FUN7("", FUN14(VAR8));
            VAR8->VAR26[0] |= 0x1000;
            FUN19(VAR8)
            ++;
        }
        else
        {
            VAR4 *VAR27 = VAR8->VAR28;
            hwaddr VAR29 = FUN20(VAR8);
            struct pcnet_RMD VAR19;
            int VAR30 = 0;
            if (!VAR8->VAR16)
            {
                memcpy(VAR27, VAR5, VAR15);
                VAR27[VAR15] = 0;
                VAR27[VAR15 + 1] = 0;
                VAR27[VAR15 + 2] = 0;
                VAR27[VAR15 + 3] = 0;
                VAR15 += 4;
            }
            else if (VAR8->VAR16 == VAR31 || !FUN21(VAR8) || VAR15 < VAR17 + 4)
            {
                uint32_t VAR32 = ~0;
                VAR4 *VAR33 = VAR27;
                while (VAR33 != &VAR27[VAR15])
                    FUN22(VAR32, *VAR33++);
                *(VAR34 *)VAR33 = FUN23(VAR32);
                VAR15 += 4;
            }
            else
            {
                uint32_t VAR32 = ~0;
                VAR4 *VAR33 = VAR27;
                while (VAR33 != &VAR27[VAR15 - 4])
                    FUN22(VAR32, *VAR33++);
                VAR14 = (*(VAR34 *)VAR33 != FUN23(VAR32));
            }
            FUN24(VAR5);
            FUN17(&VAR19, FUN25(VAR8, VAR29));
            FUN26(&VAR19.VAR23, VAR24, VAR35, 1);
            int VAR36 = FUN27(4096 - FUN18(VAR19.VAR37, VAR38, VAR39), VAR13);
            hwaddr VAR40 = FUN25(VAR8, VAR19.VAR40);
            VAR8->FUN28(VAR8->VAR41, VAR40, VAR27, VAR36, FUN29(VAR8));
            VAR27 += VAR36;
            VAR13 -= VAR36;
            FUN26(&VAR19.VAR23, VAR24, VAR25, 0);
            FUN30(&VAR19, FUN25(VAR8, VAR29));
            VAR30++;
        }
        while (0)
            VAR13 = VAR15;
        FUN31();
        if ((VAR13 > 0) && FUN32(VAR8))
        {
            hwaddr VAR22 = FUN32(VAR8);
            FUN33(&VAR19);
            FUN17(&VAR19, FUN25(VAR8, VAR22));
            if (FUN18(VAR19.VAR23, VAR24, VAR25))
            {
                VAR29 = VAR22;
                FUN31();
                FUN33(&VAR19);
                if ((VAR13 > 0) && (VAR22 = FUN34(VAR8)))
                {
                    FUN17(&VAR19, FUN25(VAR8, VAR22));
                    if (FUN18(VAR19.VAR23, VAR24, VAR25))
                    {
                        VAR29 = VAR22;
                        FUN31();
                    }
                }
            }
        }
        FUN17(&VAR19, FUN25(VAR8, VAR29));
        if (VAR13 == 0)
        {
            FUN26(&VAR19.VAR42, VAR43, VAR44, VAR15);
            FUN26(&VAR19.VAR23, VAR24, VAR45, 1);
            FUN26(&VAR19.VAR23, VAR24, VAR46, !FUN8(VAR8) && VAR9);
            FUN26(&VAR19.VAR23, VAR24, VAR47, !FUN8(VAR8) && VAR11);
            FUN26(&VAR19.VAR23, VAR24, VAR48, !FUN8(VAR8) && VAR10);
            if (VAR14)
            {
                FUN26(&VAR19.VAR23, VAR24, VAR49, 1);
                FUN26(&VAR19.VAR23, VAR24, VAR50, 1);
            }
        }
        else
        {
            FUN26(&VAR19.VAR23, VAR24, VAR51, 1);
            FUN26(&VAR19.VAR23, VAR24, VAR52, 1);
            FUN26(&VAR19.VAR23, VAR24, VAR50, 1);
        }
        FUN30(&VAR19, FUN25(VAR8, VAR29));
        VAR8->VAR26[0] |= 0x0400;
        FUN7("", FUN14(VAR8), FUN25(VAR8, FUN20(VAR8)), VAR30);
        FUN33(&VAR19);
        while (VAR30--)
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