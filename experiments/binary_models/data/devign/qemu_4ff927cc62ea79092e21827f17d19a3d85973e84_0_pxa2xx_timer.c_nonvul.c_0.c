static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    int VAR4, VAR5 = 0;
    VAR6 *VAR7 = (VAR6 *)VAR1;
    switch (VAR2)
    {
    case VAR8:
        VAR5++;
    case VAR9:
        VAR5++;
    case VAR10:
        VAR5++;
    case VAR11:
        VAR7->VAR12[VAR5].VAR3 = VAR3;
        FUN2(VAR7, FUN3(VAR13));
        break;
    case VAR14:
        VAR5++;
    case VAR15:
        VAR5++;
    case VAR16:
        VAR5++;
    case VAR17:
        VAR5++;
    case VAR18:
        VAR5++;
    case VAR19:
        VAR5++;
    case VAR20:
        VAR5++;
    case VAR21:
        if (!FUN4(VAR7))
            goto VAR22;
        VAR7->VAR23[VAR5].VAR5.VAR3 = VAR3;
        FUN5(VAR7, FUN3(VAR13), VAR5);
        break;
    case VAR24:
        VAR7->VAR25 = VAR7->VAR26;
        VAR7->VAR27 = FUN3(VAR13);
        VAR7->VAR26 = VAR3;
        FUN2(VAR7, VAR7->VAR27);
        break;
    case VAR28:
        VAR5++;
    case VAR29:
        VAR5++;
    case VAR30:
        VAR5++;
    case VAR31:
        VAR5++;
    case VAR32:
        VAR5++;
    case VAR33:
        VAR5++;
    case VAR34:
        VAR5++;
    case VAR35:
        if (!FUN4(VAR7))
            goto VAR22;
        VAR7->VAR23[VAR5].VAR25 = VAR7->VAR23[VAR5].VAR26;
        VAR7->VAR23[VAR5].VAR27 = FUN3(VAR13);
        VAR7->VAR23[VAR5].VAR26 = VAR3;
        FUN5(VAR7, VAR7->VAR23[VAR5].VAR27, VAR5);
        break;
    case VAR36:
        VAR7->VAR37 = VAR3 & 0xfff;
        break;
    case VAR38:
        VAR7->VAR39 &= ~VAR3;
        for (VAR4 = 0; VAR4 < 4; VAR4++, VAR3 >>= 1)
        {
            if (VAR7->VAR12[VAR4].VAR40 && (VAR3 & 1))
            {
                VAR7->VAR12[VAR4].VAR40 = 0;
                FUN6(VAR7->VAR12[VAR4].VAR41);
            }
        }
        if (FUN4(VAR7))
        {
            for (VAR4 = 0; VAR4 < 8; VAR4++, VAR3 >>= 1)
                if (VAR7->VAR23[VAR4].VAR5.VAR40 && (VAR3 & 1))
                    VAR7->VAR23[VAR4].VAR5.VAR40 = 0;
            if (!(VAR7->VAR39 & 0xff0))
                FUN6(VAR7->VAR42);
        }
        break;
    case VAR43:
        VAR7->VAR44 = VAR3;
        break;
    case VAR45:
        VAR5++;
    case VAR46:
        VAR5++;
    case VAR47:
        VAR5++;
    case VAR48:
        if (!FUN4(VAR7))
            goto VAR22;
        VAR7->VAR23[VAR5].VAR49 = VAR3 & 0x0ff;
        if ((VAR3 & (1 << 7)) || VAR5 == 0)
            VAR7->VAR23[VAR5].VAR50 = VAR51[VAR3 & 7];
        else
        {
            VAR7->VAR23[VAR5].VAR50 = 0;
            FUN5(VAR7, FUN3(VAR13), VAR5);
        }
        break;
    case VAR52:
        VAR5++;
    case VAR53:
        VAR5++;
    case VAR54:
        VAR5++;
    case VAR55:
        VAR5 += 4;
        if (!FUN4(VAR7))
            goto VAR22;
        VAR7->VAR23[VAR5].VAR49 = VAR3 & 0x3ff;
        if ((VAR3 & (1 << 7)) || !(VAR5 & 1))
            VAR7->VAR23[VAR5].VAR50 = VAR51[(VAR3 & (1 << 8)) ? 0 : (VAR3 & 7)];
        else
        {
            VAR7->VAR23[VAR5].VAR50 = 0;
            FUN5(VAR7, FUN3(VAR13), VAR5);
        }
        break;
    default:
    VAR22:
        FUN7("" VAR56 "", VAR2);
    }
}