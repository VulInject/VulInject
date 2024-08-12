static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint64_t VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    sPAPRDRCCResponse VAR17 = VAR18;
    int VAR19;
    if (VAR6 != 2 || VAR8 != 1)
    {
        FUN2(VAR9, 0, VAR20);
        return;
    }
    VAR10 = ((VAR21)FUN3(VAR7, 1) << 32) | FUN3(VAR7, 0);
    VAR12 = FUN3(VAR10, 0);
    VAR14 = FUN4(VAR12);
    if (!VAR14)
    {
        FUN5(VAR12);
        VAR19 = VAR20;
        goto VAR22;
    }
    if ((VAR14->VAR23 != VAR24) && (VAR14->VAR23 != VAR25))
    {
        VAR19 = VAR26;
        goto VAR22;
    }
    FUN6(VAR14->VAR27);
    VAR16 = FUN7(VAR14);
    do
    {
        uint32_t VAR28;
        const char *VAR29;
        const struct VAR30 *VAR31;
        int VAR32, VAR33;
        VAR28 = FUN8(VAR14->VAR27, VAR14->VAR34, &VAR32);
        switch (VAR28)
        {
        case VAR35:
            VAR14->VAR36++;
            VAR29 = FUN9(VAR14->VAR27, VAR14->VAR34, NULL);
            VAR11 = VAR37;
            FUN2(VAR10, VAR38, VAR11);
            FUN10(VAR10, VAR11, VAR29, strlen(VAR29) + 1);
            VAR17 = VAR39;
            break;
        case VAR40:
            VAR14->VAR36--;
            if (VAR14->VAR36 == 0)
            {
                uint32_t VAR12 = FUN11(VAR14);
                FUN12(VAR12);
                VAR14->VAR23 = VAR16->VAR41;
                VAR14->VAR34 = -1;
                VAR14->VAR36 = -1;
                VAR17 = VAR42;
            }
            else
            {
                VAR17 = VAR43;
            }
            break;
        case VAR44:
            VAR31 = FUN13(VAR14->VAR27, VAR14->VAR34, &VAR33);
            VAR29 = FUN14(VAR14->VAR27, FUN15(VAR31->VAR45));
            VAR11 = VAR37;
            FUN2(VAR10, VAR46, VAR11);
            FUN10(VAR10, VAR11, VAR29, strlen(VAR29) + 1);
            VAR11 += strlen(VAR29) + 1, FUN2(VAR10, VAR47, VAR33);
            FUN2(VAR10, VAR48, VAR11);
            FUN10(VAR10, VAR11, VAR31->VAR49, VAR33);
            VAR17 = VAR50;
            break;
        case VAR51:
            VAR17 = VAR52;
        default:
            break;
        }
        if (VAR14->VAR34 >= 0)
        {
            VAR14->VAR34 = VAR32;
        }
    } while (VAR17 == VAR18);
    VAR19 = VAR17;
VAR22:
    FUN2(VAR9, 0, VAR19);
}