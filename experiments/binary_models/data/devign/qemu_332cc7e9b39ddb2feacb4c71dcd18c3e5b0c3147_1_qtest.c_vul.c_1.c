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
        uint16_t VAR27;
        uint32_t VAR28;
        FUN2(VAR4[1] && VAR4[2]);
        VAR27 = FUN13(VAR4[1], NULL, 0);
        VAR28 = FUN13(VAR4[2], NULL, 0);
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
        uint16_t VAR27;
        uint32_t VAR28 = -1U;
        FUN2(VAR4[1]);
        VAR27 = FUN13(VAR4[1], NULL, 0);
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
        FUN7(VAR2, "", VAR28);
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27;
        uint64_t VAR28;
        FUN2(VAR4[1] && VAR4[2]);
        VAR27 = FUN20(VAR4[1], NULL, 0);
        VAR28 = FUN20(VAR4[2], NULL, 0);
        if (VAR4[0][5] == '')
        {
            uint8_t VAR29 = VAR28;
            FUN21(VAR27, &VAR29, 1);
        }
        else if (VAR4[0][5] == '')
        {
            uint16_t VAR29 = VAR28;
            FUN22(&VAR29);
            FUN21(VAR27, &VAR29, 2);
        }
        else if (VAR4[0][5] == '')
        {
            uint32_t VAR29 = VAR28;
            FUN23(&VAR29);
            FUN21(VAR27, &VAR29, 4);
        }
        else if (VAR4[0][5] == '')
        {
            uint64_t VAR29 = VAR28;
            FUN24(&VAR29);
            FUN21(VAR27, &VAR29, 8);
        }
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0 || strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27;
        uint64_t VAR28 = FUN25(-1);
        FUN2(VAR4[1]);
        VAR27 = FUN20(VAR4[1], NULL, 0);
        if (VAR4[0][4] == '')
        {
            uint8_t VAR29;
            FUN26(VAR27, &VAR29, 1);
            VAR28 = VAR29;
        }
        else if (VAR4[0][4] == '')
        {
            uint16_t VAR29;
            FUN26(VAR27, &VAR29, 2);
            VAR28 = FUN27(VAR29);
        }
        else if (VAR4[0][4] == '')
        {
            uint32_t VAR29;
            FUN26(VAR27, &VAR29, 4);
            VAR28 = FUN28(VAR29);
        }
        else if (VAR4[0][4] == '')
        {
            FUN26(VAR27, &VAR28, 8);
            FUN24(&VAR28);
        }
        FUN6(VAR2);
        FUN7(VAR2, "" VAR30 "", VAR28);
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31, VAR8;
        VAR32 *VAR29;
        FUN2(VAR4[1] && VAR4[2]);
        VAR27 = FUN20(VAR4[1], NULL, 0);
        VAR31 = FUN20(VAR4[2], NULL, 0);
        VAR29 = FUN29(VAR31);
        FUN26(VAR27, VAR29, VAR31);
        FUN6(VAR2);
        FUN7(VAR2, "");
        for (VAR8 = 0; VAR8 < VAR31; VAR8++)
        {
            FUN7(VAR2, "", VAR29[VAR8]);
        }
        FUN7(VAR2, "");
        FUN30(VAR29);
    }
    else if (strcmp(VAR4[0], "") == 0)
    {
        uint64_t VAR27, VAR31, VAR8;
        VAR32 *VAR29;
        size_t VAR33;
        FUN2(VAR4[1] && VAR4[2] && VAR4[3]);
        VAR27 = FUN20(VAR4[1], NULL, 0);
        VAR31 = FUN20(VAR4[2], NULL, 0);
        VAR33 = strlen(VAR4[3]);
        if (VAR33 < 3)
        {
            FUN7(VAR2, "");
            return;
        }
        VAR29 = FUN29(VAR31);
        for (VAR8 = 0; VAR8 < VAR31; VAR8++)
        {
            if ((VAR8 * 2 + 4) <= VAR33)
            {
                VAR29[VAR8] = FUN31(VAR4[3][VAR8 * 2 + 2]) << 4;
                VAR29[VAR8] |= FUN31(VAR4[3][VAR8 * 2 + 3]);
            }
            else
            {
                VAR29[VAR8] = 0;
            }
        }
        FUN21(VAR27, VAR29, VAR31);
        FUN30(VAR29);
        FUN6(VAR2);
        FUN7(VAR2, "");
    }
    else if (FUN32() && strcmp(VAR4[0], "") == 0)
    {
        int64_t VAR34;
        if (VAR4[1])
        {
            VAR34 = FUN33(VAR4[1], NULL, 0);
        }
        else
        {
            VAR34 = FUN34(VAR35);
        }
        FUN35(FUN36(VAR35) + VAR34);
        FUN6(VAR2);
        FUN7(VAR2, "" VAR36 "", (VAR37)FUN36(VAR35));
    }
    else if (FUN32() && strcmp(VAR4[0], "") == 0)
    {
        int64_t VAR34;
        FUN2(VAR4[1]);
        VAR34 = FUN33(VAR4[1], NULL, 0);
        FUN35(VAR34);
        FUN6(VAR2);
        FUN7(VAR2, "" VAR36 "", (VAR37)FUN36(VAR35));
    }
    else
    {
        FUN6(VAR2);
        FUN7(VAR2, "", VAR4[0]);
    }
}