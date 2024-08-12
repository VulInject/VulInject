void FUN1(VAR1 *VAR2)
{
    target_siginfo_t VAR3;
    int VAR4, VAR5;
    unsigned int VAR6;
    for (;;)
    {
        VAR4 = FUN2(VAR2);
        switch (VAR4)
        {
        case VAR7:
            VAR6 = VAR2->VAR8.VAR9[2] - 4000;
            VAR2->VAR8.VAR10 += 4;
            if (VAR6 >= sizeof(VAR11))
            {
                VAR5 = -VAR12;
            }
            else
            {
                int VAR13;
                abi_ulong VAR14;
                abi_ulong VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18 = 0;
                VAR13 = VAR11[VAR6];
                VAR14 = VAR2->VAR8.VAR9[29];
                switch (VAR13)
                {
                case 8:
                    FUN3(VAR18, VAR14 + 28);
                case 7:
                    FUN3(VAR17, VAR14 + 24);
                case 6:
                    FUN3(VAR16, VAR14 + 20);
                case 5:
                    FUN3(VAR15, VAR14 + 16);
                default:
                    VAR5 = FUN4(VAR2, VAR2->VAR8.VAR9[2], VAR2->VAR8.VAR9[4], VAR2->VAR8.VAR9[5], VAR2->VAR8.VAR9[6], VAR2->VAR8.VAR9[7], VAR15, VAR16);
                    if ((unsigned int)VAR5 >= (unsigned int)(-1133))
                    {
                        VAR2->VAR8.VAR9[7] = 1;
                        VAR5 = -VAR5;
                    }
                    else
                    {
                        VAR2->VAR8.VAR9[7] = 0;
                        VAR2->VAR8.VAR9[2] = VAR5;
                    case VAR19:
                    case VAR20:
                        VAR3.VAR21 = VAR22;
                        VAR3.VAR23 = 0;
                        VAR3.VAR24 = VAR25;
                        VAR3.VAR26.VAR27.VAR28 = VAR2->VAR29;
                        FUN5(VAR2, VAR3.VAR21, &VAR3);
                    case VAR30:
                    case VAR31:
                        VAR3.VAR21 = VAR32;
                        VAR3.VAR23 = 0;
                        VAR3.VAR24 = 0;
                        FUN5(VAR2, VAR3.VAR21, &VAR3);
                    case VAR33:
                    case VAR34:
                    {
                        int VAR35;
                        VAR35 = FUN6(VAR2, VAR36);
                        if (VAR35)
                        {
                            VAR3.VAR21 = VAR35;
                            VAR3.VAR23 = 0;
                            VAR3.VAR24 = VAR37;
                            FUN5(VAR2, VAR3.VAR21, &VAR3);
                        default:
                            fprintf(VAR38, "", VAR4);
                            FUN7(VAR2, VAR38, fprintf, 0);
                            FUN8();
                            FUN9(VAR2);