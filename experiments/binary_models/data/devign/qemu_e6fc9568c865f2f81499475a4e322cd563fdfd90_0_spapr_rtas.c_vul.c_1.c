static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint64_t VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    sPAPRDRCCResponse VAR19 = VAR20;
    int VAR21;
    const void *VAR22;
    if (VAR6 != 2 || VAR8 != 1)
    {
        FUN2(VAR9, 0, VAR23);
        return;
        VAR10 = ((VAR24)FUN3(VAR7, 1) << 32) | FUN3(VAR7, 0);
        VAR12 = FUN3(VAR10, 0);
        VAR14 = FUN4(VAR12);
        if (!VAR14)
        { FUN5 ( "" , VAR21 = VAR23 ; VAR16 = FUN6 ( VAR14 ) ; VAR22 = VAR16 -> FUN7 ( VAR14 , NULL ) ; VAR18 = FUN8 ( VAR4 , VAR12 ) ; if ( ! VAR18 ) {
                VAR18 = FUN9(VAR17, 1);
                (void)VAR16->FUN7(VAR14, &VAR18->VAR25);
                VAR18->VAR12 = VAR12;
                FUN10(VAR4, VAR18);
                do
                {
                    uint32_t VAR26;
                    const char *VAR27;
                    const struct VAR28 *VAR29;
                    int VAR30, VAR31;
                    VAR26 = FUN11(VAR22, VAR18->VAR25, &VAR30);
                    switch (VAR26)
                    {
                    case VAR32:
                        VAR18->VAR33++;
                        VAR27 = FUN12(VAR22, VAR18->VAR25, NULL);
                        VAR11 = VAR34;
                        FUN2(VAR10, VAR35, VAR11);
                        FUN13(VAR10 + VAR11, VAR36 - VAR11, (VAR37 *)VAR27, strlen(VAR27) + 1);
                        VAR19 = VAR38;
                        break;
                    case VAR39:
                        VAR18->VAR33--;
                        if (VAR18->VAR33 == 0)
                        {
                            VAR16->FUN14(VAR14);
                            FUN15(VAR4, VAR18);
                            VAR18 = NULL;
                            VAR19 = VAR40;
                        }
                        else
                        {
                            VAR19 = VAR41;
                            break;
                        case VAR42:
                            VAR29 = FUN16(VAR22, VAR18->VAR25, &VAR31);
                            VAR27 = FUN17(VAR22, FUN18(VAR29->VAR43));
                            VAR11 = VAR34;
                            FUN2(VAR10, VAR44, VAR11);
                            FUN13(VAR10 + VAR11, VAR36 - VAR11, (VAR37 *)VAR27, strlen(VAR27) + 1);
                            VAR11 += strlen(VAR27) + 1, FUN2(VAR10, VAR45, VAR31);
                            FUN2(VAR10, VAR46, VAR11);
                            FUN13(VAR10 + VAR11, VAR36 - VAR11, (VAR37 *)((struct VAR28 *)VAR29)->VAR47, VAR31);
                            VAR19 = VAR48;
                            break;
                        case VAR49:
                            VAR19 = VAR50;
                        default:
                            break;
                            if (VAR18)
                            {
                                VAR18->VAR25 = VAR30;
                            }
                            while (VAR19 == VAR20)
                                ;
                            VAR21 = VAR19;
                        VAR51:
                            FUN2(VAR9, 0, VAR21);