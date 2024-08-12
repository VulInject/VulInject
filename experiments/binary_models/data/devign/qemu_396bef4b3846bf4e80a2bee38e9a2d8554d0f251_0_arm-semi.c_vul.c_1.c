VAR1 FUN1(VAR2 *VAR3)
{
    target_ulong VAR4;
    char *VAR5;
    int VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    VAR9 *VAR10 = VAR3->VAR11;
    VAR2 *VAR10 = VAR3;
    VAR6 = VAR3->VAR12[0];
    VAR4 = VAR3->VAR12[1];
    switch (VAR6)
    {
    case VAR13:
        if (!(VAR5 = FUN2(FUN3(0))))
            return (VAR1)-1;
        if (FUN3(1) >= 12)
            return (VAR1)-1;
        if (strcmp(VAR5, "") == 0)
        {
            if (FUN3(1) < 4)
                return VAR14;
            else
                return VAR15;
        }
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0), (int)FUN3(2) + 1, VAR17[FUN3(1)]);
            return VAR3->VAR12[0];
        }
        else
        {
            VAR7 = FUN6(VAR10, open(VAR5, VAR18[FUN3(1)], 0644));
        }
        FUN7(VAR5, FUN3(0), 0);
        return VAR7;
    case VAR19:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0));
            return VAR3->VAR12[0];
        }
        else
        {
            return FUN6(VAR10, close(FUN3(0)));
        }
    case VAR20:
    {
        char VAR21;
        if (FUN8(VAR21, VAR4))
            return (VAR1)-1;
        if (FUN4())
        {
            FUN5(VAR16, "", VAR4);
            return VAR3->VAR12[0];
        }
        else
        {
            return write(VAR22, &VAR21, 1);
        }
    }
    case VAR23:
        if (!(VAR5 = FUN2(VAR4)))
            return (VAR1)-1;
        VAR8 = strlen(VAR5);
        if (FUN4())
        {
            FUN5(VAR16, "", VAR4, VAR8);
            VAR7 = VAR3->VAR12[0];
        }
        else
        {
            VAR7 = write(VAR22, VAR5, VAR8);
        }
        FUN7(VAR5, VAR4, 0);
        return VAR7;
    case VAR24:
        VAR8 = FUN3(2);
        if (FUN4())
        {
            VAR25 = VAR8;
            FUN5(VAR16, "", FUN3(0), FUN3(1), VAR8);
            return VAR3->VAR12[0];
        }
        else
        {
            if (!(VAR5 = FUN9(VAR26, FUN3(1), VAR8, 1)))
                return (VAR1)-1;
            VAR7 = FUN6(VAR10, write(FUN3(0), VAR5, VAR8));
            FUN7(VAR5, FUN3(1), 0);
            if (VAR7 == (VAR1)-1)
                return -1;
            return VAR8 - VAR7;
        }
    case VAR27:
        VAR8 = FUN3(2);
        if (FUN4())
        {
            VAR25 = VAR8;
            FUN5(VAR16, "", FUN3(0), FUN3(1), VAR8);
            return VAR3->VAR12[0];
        }
        else
        {
            if (!(VAR5 = FUN9(VAR28, FUN3(1), VAR8, 0)))
                return (VAR1)-1;
            do
                VAR7 = FUN6(VAR10, read(FUN3(0), VAR5, VAR8));
            while (VAR7 == -1 && VAR29 == VAR30);
            FUN7(VAR5, FUN3(1), VAR8);
            if (VAR7 == (VAR1)-1)
                return -1;
            return VAR8 - VAR7;
        }
    case VAR31:
        return 0;
    case VAR32:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0));
            return VAR3->VAR12[0];
        }
        else
        {
            return FUN10(FUN3(0));
        }
    case VAR33:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0), FUN3(1));
            return VAR3->VAR12[0];
        }
        else
        {
            VAR7 = FUN6(VAR10, FUN11(FUN3(0), FUN3(1), VAR34));
            if (VAR7 == (VAR1)-1)
                return -1;
            return 0;
        }
    case VAR35:
        if (FUN4())
        {
            FUN5(VAR36, "", FUN3(0), VAR3->VAR12[13] - 64);
            return VAR3->VAR12[0];
        }
        else
        {
            struct stat VAR37;
            VAR7 = FUN6(VAR10, FUN12(FUN3(0), &VAR37));
            if (VAR7 == (VAR1)-1)
                return -1;
            return VAR37.VAR38;
        }
    case VAR39:
        return -1;
    case VAR40:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0), (int)FUN3(1) + 1);
            VAR7 = VAR3->VAR12[0];
        }
        else
        {
            if (!(VAR5 = FUN2(FUN3(0))))
                return (VAR1)-1;
            VAR7 = FUN6(VAR10, remove(VAR5));
            FUN7(VAR5, FUN3(0), 0);
        }
        return VAR7;
    case VAR41:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0), (int)FUN3(1) + 1, FUN3(2), (int)FUN3(3) + 1);
            return VAR3->VAR12[0];
        }
        else
        {
            char *VAR42;
            VAR5 = FUN2(FUN3(0));
            VAR42 = FUN2(FUN3(2));
            if (!VAR5 || !VAR42)
                VAR7 = (VAR1)-1;
            else
                VAR7 = FUN6(VAR10, FUN13(VAR5, VAR42));
            if (VAR42)
                FUN7(VAR42, FUN3(2), 0);
            if (VAR5)
                FUN7(VAR5, FUN3(0), 0);
            return VAR7;
        }
    case VAR43:
        return FUN14() / (VAR44 / 100);
    case VAR45:
        return FUN6(VAR10, FUN15(NULL));
    case VAR46:
        if (FUN4())
        {
            FUN5(VAR16, "", FUN3(0), (int)FUN3(1) + 1);
            return VAR3->VAR12[0];
        }
        else
        {
            if (!(VAR5 = FUN2(FUN3(0))))
                return (VAR1)-1;
            VAR7 = FUN6(VAR10, system(VAR5));
            FUN7(VAR5, FUN3(0), 0);
            return VAR7;
        }
    case VAR47:
        return VAR10->VAR48;
        return VAR49;
    case VAR50:
    {
        char *VAR51;
        size_t VAR52 = FUN3(1);
        size_t VAR53;
        int VAR54 = 0;
        VAR53 = strlen(VAR10->VAR55->VAR56) + 1 + strlen(VAR10->VAR55->VAR57) + 1;
        unsigned int VAR58;
        VAR53 = VAR10->VAR59->VAR60 - VAR10->VAR59->VAR61;
        if (!VAR53)
        {
            VAR53 = 1;
        }
        if (VAR53 > VAR52)
        {
            return -1;
        }
        FUN16(1, VAR53 - 1);
        VAR51 = FUN9(VAR28, FUN3(0), VAR53, 0);
        if (!VAR51)
        {
            return -1;
        }
        FUN17(VAR51, VAR53, VAR10->VAR55->VAR56);
        FUN18(VAR51, VAR53, "");
        FUN18(VAR51, VAR53, VAR10->VAR55->VAR57);
        if (VAR53 == 1)
        {
            VAR51[0] = '';
            goto VAR62;
        }
        if (FUN19(VAR51, VAR10->VAR59->VAR61, VAR53))
        {
            VAR54 = -1;
            goto VAR62;
        }
        for (VAR58 = 0; VAR58 < VAR53 - 1; VAR58++)
        {
            if (VAR51[VAR58] == 0)
            {
                VAR51[VAR58] = '';
            }
        }
    VAR62:
        FUN7(VAR51, FUN3(0), VAR53);
        return VAR54;
    }
    case VAR63:
    {
        VAR1 *VAR64;
        uint32_t VAR65;
        if (!VAR10->VAR66)
        {
            abi_ulong VAR7;
            VAR10->VAR67 = FUN20(0);
            VAR65 = VAR10->VAR67 + VAR68;
            for (;;)
            {
                VAR7 = FUN20(VAR65);
                if (VAR7 >= VAR65)
                {
                    break;
                }
                VAR65 = (VAR10->VAR67 >> 1) + (VAR65 >> 1);
            }
            VAR10->VAR66 = VAR65;
        }
        if (!(VAR64 = FUN9(VAR28, FUN3(0), 16, 0)))
            return (VAR1)-1;
        VAR64[0] = FUN21(VAR10->VAR67);
        VAR64[1] = FUN21(VAR10->VAR66);
        VAR64[2] = FUN21(VAR10->VAR69);
        VAR64[3] = FUN21(0);
        FUN7(VAR64, FUN3(0), 16);
        VAR65 = VAR70;
        if (!(VAR64 = FUN9(VAR28, FUN3(0), 16, 0)))
            return (VAR1)-1;
        VAR64[0] = FUN21(VAR65 / 2);
        VAR64[1] = FUN21(VAR65);
        VAR64[2] = FUN21(VAR65);
        VAR64[3] = FUN21(0);
        FUN7(VAR64, FUN3(0), 16);
        return 0;
    }
    case VAR71:
        FUN22(VAR3, 0);
        FUN23(0);
    default:
        fprintf(VAR72, "", VAR6);
        FUN24(VAR3, VAR72, fprintf, 0);
        FUN25();
    }
}