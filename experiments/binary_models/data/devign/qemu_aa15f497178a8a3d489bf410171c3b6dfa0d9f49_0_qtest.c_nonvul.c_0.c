static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    const VAR3 *VAR5;
    FUN2(VAR4);
    VAR5 = VAR4[0];
    if (VAR6)
    {
        qemu_timeval VAR7;
        int VAR8;
        FUN3(&VAR7);
        fprintf(VAR6, "" VAR9 "", (long)VAR7.VAR10, (long)VAR7.VAR11);
        for (VAR8 = 0; VAR4[VAR8]; VAR8++)
        {
            fprintf(VAR6, "", VAR4[VAR8]);
        }
        fprintf(VAR6, "");
    }
    FUN2(VAR5);
    if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        VAR12 *VAR13;
        VAR14 *VAR15;
        FUN2(VAR4[1]);
        VAR13 = FUN4(FUN5(VAR4[1], NULL));
        if (!VAR13)
        {
            FUN6(VAR2);
            FUN7(VAR2, "");
            return;
        }
        if (VAR16)
        {
            FUN6(VAR2);
            if (VAR16 != VAR13)
            {
                FUN7(VAR2, "");
            }
            else
            {
                FUN7(VAR2, "");
            }
            return;
        }
        FUN8(VAR15, &VAR13->VAR17, VAR18)
        {
            if (VAR15->VAR19)
            {
                continue;
            }
            if (VAR4[0][14] == '')
            {
                int VAR8;
                for (VAR8 = 0; VAR8 < VAR15->VAR20; ++VAR8)
                {
                    VAR21 *VAR22 = FUN9(VAR21, 1);
                    qemu_irq VAR23 = FUN10(VAR24, VAR22, VAR8);
                    *VAR22 = FUN11(VAR13, VAR23, VAR15->VAR19, VAR8);
                }
            }
            else
            {
                FUN12(VAR15->VAR25, VAR24, VAR15->VAR26);
            }
        }
        VAR16 = VAR13;
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        unsigned long VAR27;
        unsigned long VAR28;
        FUN2(VAR4[1] && VAR4[2]);
        FUN2(FUN13(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN13(VAR4[2], NULL, 0, &VAR28) == 0);
        FUN2(VAR27 <= 0xffff);
        if (VAR4[0][3] == '')
        {
            FUN14(VAR27, VAR28);
        }
        else if (VAR4[0][3] == '')
        {
            FUN15(VAR27, VAR28);
        }
        else if (VAR4[0][3] == '')
        {
            FUN16(VAR27, VAR28);
        }
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        unsigned long VAR27;
        uint32_t VAR28 = -1U;
        FUN2(VAR4[1]);
        FUN2(FUN13(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(VAR27 <= 0xffff);
        if (VAR4[0][2] == '')
        {
            VAR28 = FUN17(VAR27);
        }
        else if (VAR4[0][2] == '')
        {
            VAR28 = FUN18(VAR27);
        }
        else if (VAR4[0][2] == '')
        {
            VAR28 = FUN19(VAR27);
        }
        FUN6(VAR2);
        FUN20(VAR2, "", VAR28);
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27;
        uint64_t VAR28;
        FUN2(VAR4[1] && VAR4[2]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR28) == 0);
        if (VAR4[0][5] == '')
        {
            uint8_t VAR29 = VAR28;
            FUN22(VAR27, &VAR29, 1);
        }
        else if (VAR4[0][5] == '')
        {
            uint16_t VAR29 = VAR28;
            FUN23(&VAR29);
            FUN22(VAR27, &VAR29, 2);
        }
        else if (VAR4[0][5] == '')
        {
            uint32_t VAR29 = VAR28;
            FUN24(&VAR29);
            FUN22(VAR27, &VAR29, 4);
        }
        else if (VAR4[0][5] == '')
        {
            uint64_t VAR29 = VAR28;
            FUN25(&VAR29);
            FUN22(VAR27, &VAR29, 8);
        }
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27;
        uint64_t VAR28 = FUN26(-1);
        FUN2(VAR4[1]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        if (VAR4[0][4] == '')
        {
            uint8_t VAR29;
            FUN27(VAR27, &VAR29, 1);
            VAR28 = VAR29;
        }
        else if (VAR4[0][4] == '')
        {
            uint16_t VAR29;
            FUN27(VAR27, &VAR29, 2);
            VAR28 = FUN28(VAR29);
        }
        else if (VAR4[0][4] == '')
        {
            uint32_t VAR29;
            FUN27(VAR27, &VAR29, 4);
            VAR28 = FUN29(VAR29);
        }
        else if (VAR4[0][4] == '')
        {
            FUN27(VAR27, &VAR28, 8);
            FUN25(&VAR28);
        }
        FUN6(VAR2);
        FUN20(VAR2, "" VAR30 "", VAR28);
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31, VAR8;
        VAR32 *VAR29;
        char *VAR33;
        FUN2(VAR4[1] && VAR4[2]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR31) == 0);
        VAR29 = FUN30(VAR31);
        FUN27(VAR27, VAR29, VAR31);
        VAR33 = FUN30(2 * VAR31 + 1);
        for (VAR8 = 0; VAR8 < VAR31; VAR8++)
        {
            sprintf(&VAR33[VAR8 * 2], "", VAR29[VAR8]);
        }
        FUN6(VAR2);
        FUN20(VAR2, "", VAR33);
        FUN31(VAR29);
        FUN31(VAR33);
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31;
        VAR32 *VAR29;
        VAR3 *VAR34;
        FUN2(VAR4[1] && VAR4[2]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR31) == 0);
        VAR29 = FUN30(VAR31);
        FUN27(VAR27, VAR29, VAR31);
        VAR34 = FUN32(VAR29, VAR31);
        FUN6(VAR2);
        FUN20(VAR2, "", VAR34);
        FUN31(VAR29);
        FUN31(VAR34);
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31, VAR8;
        VAR32 *VAR29;
        size_t VAR35;
        FUN2(VAR4[1] && VAR4[2] && VAR4[3]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR31) == 0);
        VAR35 = strlen(VAR4[3]);
        if (VAR35 < 3)
        {
            FUN7(VAR2, "");
            return;
        }
        VAR29 = FUN30(VAR31);
        for (VAR8 = 0; VAR8 < VAR31; VAR8++)
        {
            if ((VAR8 * 2 + 4) <= VAR35)
            {
                VAR29[VAR8] = FUN33(VAR4[3][VAR8 * 2 + 2]) << 4;
                VAR29[VAR8] |= FUN33(VAR4[3][VAR8 * 2 + 3]);
            }
            else
            {
                VAR29[VAR8] = 0;
            }
        }
        FUN22(VAR27, VAR29, VAR31);
        FUN31(VAR29);
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31;
        VAR32 *VAR29;
        unsigned long VAR36;
        FUN2(VAR4[1] && VAR4[2] && VAR4[3]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR31) == 0);
        FUN2(FUN13(VAR4[3], NULL, 0, &VAR36) == 0);
        if (VAR31)
        {
            VAR29 = FUN30(VAR31);
            memset(VAR29, VAR36, VAR31);
            FUN22(VAR27, VAR29, VAR31);
            FUN31(VAR29);
        }
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31;
        VAR32 *VAR29;
        size_t VAR35;
        gsize VAR37;
        FUN2(VAR4[1] && VAR4[2] && VAR4[3]);
        FUN2(FUN21(VAR4[1], NULL, 0, &VAR27) == 0);
        FUN2(FUN21(VAR4[2], NULL, 0, &VAR31) == 0);
        VAR35 = strlen(VAR4[3]);
        if (VAR35 < 3)
        {
            FUN7(VAR2, "");
            return;
        }
        VAR29 = FUN34(VAR4[3], &VAR37);
        if (VAR37 != VAR31)
        {
            FUN35("" VAR38 ""
                           "",
                           VAR31, VAR37);
            VAR37 = FUN36(VAR37, VAR31);
        }
        FUN22(VAR27, VAR29, VAR37);
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (FUN37() && strcmp(VAR4[0], "") == 0)
    {
        int64_t VAR39;
        if (VAR4[1])
        {
            FUN2(FUN38(VAR4[1], NULL, 0, &VAR39) == 0);
        }
        else
        {
            VAR39 = FUN39(VAR40);
        }
        FUN40(FUN41(VAR40) + VAR39);
        FUN6(VAR2);
        FUN20(VAR2, "" VAR41 "", (VAR42)FUN41(VAR40));
    }
    else if (FUN37() && strcmp(VAR4[0], "") == 0)
    {
        int64_t VAR39;
        FUN2(VAR4[1]);
        FUN2(FUN38(VAR4[1], NULL, 0, &VAR39) == 0);
        FUN40(VAR39);
        FUN6(VAR2);
        FUN20(VAR2, "" VAR41 "", (VAR42)FUN41(VAR40));
    }
    else
    {
        FUN6(VAR2);
        FUN20(VAR2, "", VAR4[0]);
    }
}