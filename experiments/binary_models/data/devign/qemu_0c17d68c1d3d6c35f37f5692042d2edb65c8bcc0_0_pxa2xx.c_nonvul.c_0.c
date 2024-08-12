static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4->VAR8;
    static const char *VAR9[8] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    if (VAR5 & 8)
    {
        FUN2("", VAR10);
    }
    switch (VAR5 & 7)
    {
    case 0:
        break;
    case 1:
        if (!(VAR7->VAR11[VAR12 >> 2] & (1U << 31)))
        {
            FUN3(FUN4(VAR7->VAR13), VAR14);
            break;
        }
    case 2:
        FUN3(FUN4(VAR7->VAR13), VAR14);
        VAR7->VAR15[VAR16 >> 2] |= 0x8;
        goto VAR17;
    case 3:
        VAR7->VAR13->VAR2.VAR18 = VAR19;
        VAR7->VAR13->VAR2.VAR20 = VAR21 | VAR22 | VAR23;
        VAR7->VAR13->VAR2.VAR24.VAR25 = 0;
        VAR7->VAR13->VAR2.VAR24.VAR26 = 0;
        VAR7->VAR13->VAR2.VAR24.VAR27[1] = 0;
        VAR7->VAR13->VAR2.VAR24.VAR28 = 0;
        VAR7->VAR15[VAR29 >> 2] |= 0x8;
        VAR7->VAR15[VAR16 >> 2] |= 0x8;
        memset(VAR7->VAR13->VAR2.VAR30, 0, 4 * 15);
        VAR7->VAR13->VAR2.VAR30[15] = VAR7->VAR15[VAR31 >> 2];
        VAR32 = 0xe59ff000;
        FUN5(0, &VAR32, 4);
        VAR32 = VAR7->VAR15[VAR31 >> 2];
        FUN5(8, &VAR32, 4);
        FUN3(VAR33, VAR14);
        goto VAR17;
    default:
    VAR17:
        FUN2("", VAR10, VAR9[VAR5 & 7]);
    }
}