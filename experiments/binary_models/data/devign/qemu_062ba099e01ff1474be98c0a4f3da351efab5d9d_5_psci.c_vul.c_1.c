void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint64_t VAR5[4];
    uint64_t VAR6, VAR7;
    target_ulong VAR8;
    int32_t VAR9 = 0;
    int VAR10;
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        VAR5[VAR10] = FUN2(VAR4) ? VAR4->VAR11[VAR10] : VAR4->VAR12[VAR10];
    }
    if ((VAR5[0] & VAR13) && !FUN2(VAR4))
    {
        VAR9 = VAR14;
        goto VAR15;
    }
    switch (VAR5[0])
    {
        VAR16 *VAR17;
        VAR1 *VAR18;
    case VAR19:
        VAR9 = VAR20;
        break;
    case VAR21:
        VAR9 = VAR22;
        break;
    case VAR23:
    case VAR24:
        VAR7 = VAR5[1];
        switch (VAR5[2])
        {
        case 0:
            VAR17 = FUN3(VAR7);
            if (!VAR17)
            {
                VAR9 = VAR14;
                break;
            }
            VAR18 = FUN4(VAR17);
            VAR9 = VAR18->VAR25 ? 1 : 0;
            break;
        default:
            VAR9 = 0;
        }
        break;
    case VAR26:
        FUN5();
        goto VAR27;
    case VAR28:
        FUN6();
        goto VAR27;
    case VAR29:
    case VAR30:
    case VAR31:
    {
        int VAR32 = FUN7(VAR4, VAR33) ? 2 : 1;
        bool VAR34 = FUN8(VAR4, VAR32);
        VAR7 = VAR5[1];
        VAR8 = VAR5[2];
        VAR6 = VAR5[3];
        VAR9 = FUN9(VAR7, VAR8, VAR6, VAR32, VAR34);
        break;
    }
    case VAR35:
    case VAR36:
        goto VAR27;
    case VAR37:
    case VAR38:
    case VAR39:
        if (VAR5[1] & 0xfffe0000)
        {
            VAR9 = VAR14;
            break;
        }
        if (FUN2(VAR4))
        {
            VAR4->VAR11[0] = 0;
        }
        else
        {
            VAR4->VAR12[0] = 0;
        }
        FUN10(VAR4);
        break;
    case VAR40:
    case VAR41:
        VAR9 = VAR42;
        break;
    default:
        FUN11();
    }
VAR15:
    if (FUN2(VAR4))
    {
        VAR4->VAR11[0] = VAR9;
    }
    else
    {
        VAR4->VAR12[0] = VAR9;
    }
    return;
VAR27:
    VAR9 = FUN12(VAR2->VAR43);
    assert(VAR9 == VAR44);
}