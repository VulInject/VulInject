static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7 = 0, VAR8 = 0, VAR9 = 0;
    uint8_t VAR10[60];
    int VAR11;
    int VAR12 = 0;
    if (FUN2(VAR6) || FUN3(VAR6) || FUN4(VAR6) || !VAR4)
        return;
    FUN5("", VAR4);
    if (VAR4 < VAR13)
    {
        memcpy(VAR10, VAR3, VAR4);
        memset(VAR10 + VAR4, 0, VAR13 - VAR4);
        VAR3 = VAR10;
        VAR4 = VAR13;
    }
    if (FUN6(VAR6) || (VAR7 = FUN7(VAR6, VAR3, VAR4)) || (VAR8 = FUN8(VAR6, VAR3, VAR4)) || (VAR9 = FUN9(VAR6, VAR3, VAR4)))
    {
        FUN10(VAR6);
        if (!(FUN11(VAR6) & 0x8000) && VAR6->VAR14)
        {
            struct pcnet_RMD VAR15;
            int VAR16 = FUN12(VAR6) - 1, VAR17;
            target_phys_addr_t VAR18;
            for (VAR17 = FUN13(VAR6) - 1; VAR17 > 0; VAR17--, VAR16--)
            {
                if (VAR16 <= 1)
                    VAR16 = FUN13(VAR6);
                VAR18 = VAR6->VAR14 + (FUN13(VAR6) - VAR16) * (FUN14(VAR6) ? 16 : 8);
                FUN15(&VAR15, FUN16(VAR6, VAR18));
                if (FUN17(VAR15.VAR19, VAR20, VAR21))
                {
                    FUN5("", VAR16, FUN12(VAR6));
                    FUN12(VAR6) = VAR16;
                    FUN10(VAR6);
                    break;
                }
            }
        }
        if (!(FUN11(VAR6) & 0x8000))
        {
            FUN5("", FUN12(VAR6));
            VAR6->VAR22[0] |= 0x1000;
            FUN18(VAR6)
            ++;
        }
        else
        {
            VAR2 *VAR23 = VAR6->VAR24;
            target_phys_addr_t VAR25 = FUN19(VAR6);
            struct pcnet_RMD VAR15;
            int VAR26 = 0;
            if (!VAR6->VAR27)
            {
                memcpy(VAR23, VAR3, VAR4);
                VAR23[VAR4] = 0;
                VAR23[VAR4 + 1] = 0;
                VAR23[VAR4 + 2] = 0;
                VAR23[VAR4 + 3] = 0;
                VAR4 += 4;
            }
            else if (VAR6->VAR27 == VAR28 || !FUN20(VAR6) || VAR4 < VAR13 + 4)
            {
                uint32_t VAR29 = ~0;
                VAR2 *VAR30 = VAR23;
                while (VAR30 != &VAR23[VAR4])
                    FUN21(VAR29, *VAR30++);
                *(VAR31 *)VAR30 = FUN22(VAR29);
                VAR4 += 4;
            }
            else
            {
                uint32_t VAR29 = ~0;
                VAR2 *VAR30 = VAR23;
                while (VAR30 != &VAR23[VAR4 - 4])
                    FUN21(VAR29, *VAR30++);
                VAR12 = (*(VAR31 *)VAR30 != FUN22(VAR29));
            }
            FUN23(VAR3);
            FUN15(&VAR15, FUN16(VAR6, VAR25));
            FUN24(&VAR15.VAR19, VAR20, VAR32, 1);
            int VAR33 = FUN25(4096 - FUN17(VAR15.VAR34, VAR35, VAR36), VAR11);
            target_phys_addr_t VAR37 = FUN16(VAR6, VAR15.VAR37);
            VAR6->FUN26(VAR6->VAR38, VAR37, VAR23, VAR33, FUN27(VAR6));
            VAR23 += VAR33;
            VAR11 -= VAR33;
            FUN24(&VAR15.VAR19, VAR20, VAR21, 0);
            FUN28(&VAR15, FUN16(VAR6, VAR25));
            VAR26++;
        }
        while (0)
            VAR11 = VAR4;
        FUN29();
        if ((VAR11 > 0) && FUN30(VAR6))
        {
            target_phys_addr_t VAR18 = FUN30(VAR6);
            FUN31(&VAR15);
            FUN15(&VAR15, FUN16(VAR6, VAR18));
            if (FUN17(VAR15.VAR19, VAR20, VAR21))
            {
                VAR25 = VAR18;
                FUN29();
                FUN31(&VAR15);
                if ((VAR11 > 0) && (VAR18 = FUN32(VAR6)))
                {
                    FUN15(&VAR15, FUN16(VAR6, VAR18));
                    if (FUN17(VAR15.VAR19, VAR20, VAR21))
                    {
                        VAR25 = VAR18;
                        FUN29();
                    }
                }
            }
        }
        FUN15(&VAR15, FUN16(VAR6, VAR25));
        if (VAR11 == 0)
        {
            FUN24(&VAR15.VAR39, VAR40, VAR41, VAR4);
            FUN24(&VAR15.VAR19, VAR20, VAR42, 1);
            FUN24(&VAR15.VAR19, VAR20, VAR43, !FUN6(VAR6) && VAR7);
            FUN24(&VAR15.VAR19, VAR20, VAR44, !FUN6(VAR6) && VAR9);
            FUN24(&VAR15.VAR19, VAR20, VAR45, !FUN6(VAR6) && VAR8);
            if (VAR12)
            {
                FUN24(&VAR15.VAR19, VAR20, VAR46, 1);
                FUN24(&VAR15.VAR19, VAR20, VAR47, 1);
            }
        }
        else
        {
            FUN24(&VAR15.VAR19, VAR20, VAR48, 1);
            FUN24(&VAR15.VAR19, VAR20, VAR49, 1);
            FUN24(&VAR15.VAR19, VAR20, VAR47, 1);
        }
        FUN28(&VAR15, FUN16(VAR6, VAR25));
        VAR6->VAR22[0] |= 0x0400;
        FUN5("", FUN12(VAR6), FUN16(VAR6, FUN19(VAR6)), VAR26);
        FUN31(&VAR15);
        while (VAR26--)
        {
            if (FUN12(VAR6) <= 1)
                FUN12(VAR6) = FUN13(VAR6);
            else
                FUN12(VAR6)
                --;
        }
        FUN10(VAR6);
    }
}
FUN33(VAR6);
FUN34(VAR6);
}