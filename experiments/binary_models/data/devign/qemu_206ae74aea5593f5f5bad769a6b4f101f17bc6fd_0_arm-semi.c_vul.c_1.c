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
        const char *VAR52;
        unsigned int VAR53;
        unsigned int VAR54 = FUN3(1);
        unsigned int VAR55 = VAR10->VAR56->VAR57 - VAR10->VAR56->VAR58;
        if (!VAR54 || VAR55 > VAR54)
        {
            return -1;
        }
        if (!VAR55)
        {
            VAR51 = FUN9(VAR28, FUN3(0), 1, 0);
            VAR51[0] = 0;
            FUN7(VAR51, FUN3(0), 1);
            FUN16(1, 0);
            return 0;
        }
        VAR51 = FUN9(VAR28, FUN3(0), VAR55, 0);
        VAR52 = FUN9(VAR26, VAR10->VAR56->VAR58, VAR55, 1);
        if (VAR51 && VAR52)
        {
            memcpy(VAR51, VAR52, VAR55);
            for (VAR53 = 0; VAR53 < VAR55 - 1; VAR53++)
            {
                if (VAR51[VAR53] == 0)
                {
                    VAR51[VAR53] = '';
                }
            }
            FUN16(1, VAR55 - 1);
        }
        FUN7(VAR51, FUN3(0), VAR55);
        FUN7((void *)VAR52, VAR10->VAR56->VAR58, 0);
        return (VAR51 && VAR52) ? 0 : -1;
    }
        return -1;
    case VAR59:
    {
        VAR1 *VAR60;
        uint32_t VAR61;
        if (!VAR10->VAR62)
        {
            long VAR7;
            VAR10->VAR63 = FUN17(0);
            VAR61 = VAR10->VAR63 + VAR64;
            for (;;)
            {
                VAR7 = FUN17(VAR61);
                if (VAR7 != -1)
                    break;
                VAR61 = (VAR10->VAR63 >> 1) + (VAR61 >> 1);
            }
            VAR10->VAR62 = VAR61;
        }
        if (!(VAR60 = FUN9(VAR28, FUN3(0), 16, 0)))
            return (VAR1)-1;
        VAR60[0] = FUN18(VAR10->VAR63);
        VAR60[1] = FUN18(VAR10->VAR62);
        VAR60[2] = FUN18(VAR10->VAR65);
        VAR60[3] = FUN18(0);
        FUN7(VAR60, FUN3(0), 16);
        VAR61 = VAR66;
        if (!(VAR60 = FUN9(VAR28, FUN3(0), 16, 0)))
            return (VAR1)-1;
        VAR60[0] = FUN18(VAR61 / 2);
        VAR60[1] = FUN18(VAR61);
        VAR60[2] = FUN18(VAR61);
        VAR60[3] = FUN18(0);
        FUN7(VAR60, FUN3(0), 16);
        return 0;
    }
    case VAR67:
        FUN19(VAR3, 0);
        FUN20(0);
    default:
        fprintf(VAR68, "", VAR6);
        FUN21(VAR3, VAR68, fprintf, 0);
        FUN22();
    }
}