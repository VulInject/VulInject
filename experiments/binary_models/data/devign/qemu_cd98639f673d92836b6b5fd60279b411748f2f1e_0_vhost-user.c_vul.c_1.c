static int FUN1(struct VAR1 *VAR2, unsigned long int VAR3, void *VAR4)
{
    VhostUserMsg VAR5;
    VhostUserRequest VAR6;
    struct VAR7 *VAR8 = 0;
    int VAR9 = 0;
    int VAR10[VAR11];
    int VAR12, VAR13;
    size_t VAR14 = 0;
    assert(VAR2->VAR15->VAR16 == VAR17);
    VAR6 = FUN2(VAR3);
    VAR5.VAR3 = VAR6;
    VAR5.VAR18 = VAR19;
    VAR5.VAR20 = 0;
    switch (VAR3)
    {
    case VAR21:
        VAR9 = 1;
        break;
    case VAR22:
    case VAR23:
        VAR5.VAR24 = *((VAR25 *)VAR4);
        VAR5.VAR20 = sizeof(VAR26.VAR24);
        break;
    case VAR27:
    case VAR28:
        break;
    case VAR29:
        for (VAR12 = 0; VAR12 < VAR2->VAR30->VAR31; ++VAR12)
        {
            struct VAR32 *VAR33 = VAR2->VAR30->VAR34 + VAR12;
            ram_addr_t VAR35;
            FUN3((void *)VAR33->VAR36, &VAR35);
            VAR13 = FUN4(VAR35);
            if (VAR13 > 0)
            {
                VAR5.VAR37.VAR34[VAR14].VAR36 = VAR33->VAR36;
                VAR5.VAR37.VAR34[VAR14].VAR38 = VAR33->VAR38;
                VAR5.VAR37.VAR34[VAR14].VAR39 = VAR33->VAR39;
                VAR5.VAR37.VAR34[VAR14].VAR40 = VAR33->VAR36 - (VAR41)FUN5(VAR33->VAR39);
                assert(VAR14 < VAR11);
                VAR10[VAR14++] = VAR13;
            }
        }
        VAR5.VAR37.VAR31 = VAR14;
        if (!VAR14)
        {
            FUN6(""
                         "");
            return -1;
        }
        VAR5.VAR20 = sizeof(VAR26.VAR37.VAR31);
        VAR5.VAR20 += sizeof(VAR26.VAR37.VAR42);
        VAR5.VAR20 += VAR14 * sizeof(VAR43);
        break;
    case VAR44:
        VAR10[VAR14++] = *((int *)VAR4);
        break;
    case VAR45:
    case VAR46:
        memcpy(&VAR5.VAR47, VAR4, sizeof(struct VAR48));
        VAR5.VAR20 = sizeof(VAR26.VAR47);
        break;
    case VAR49:
        memcpy(&VAR5.VAR47, VAR4, sizeof(struct VAR48));
        VAR5.VAR20 = sizeof(VAR26.VAR47);
        VAR9 = 1;
        break;
    case VAR50:
        memcpy(&VAR5.VAR51, VAR4, sizeof(struct VAR52));
        VAR5.VAR20 = sizeof(VAR26.VAR51);
        break;
    case VAR53:
    case VAR54:
    case VAR55:
        VAR8 = VAR4;
        VAR5.VAR24 = VAR8->VAR56 & VAR57;
        VAR5.VAR20 = sizeof(VAR26.VAR24);
        if (FUN7() && VAR8->VAR13 > 0)
        {
            VAR10[VAR14++] = VAR8->VAR13;
        }
        else
        {
            VAR5.VAR24 |= VAR58;
        }
        break;
    default:
        FUN6("");
        return -1;
        break;
    }
    if (FUN8(VAR2, &VAR5, VAR10, VAR14) < 0)
    {
        return 0;
    }
    if (VAR9)
    {
        if (FUN9(VAR2, &VAR5) < 0)
        {
            return 0;
        }
        if (VAR6 != VAR5.VAR3)
        {
            FUN6(""
                         "",
                         VAR6, VAR5.VAR3);
            return -1;
        }
        switch (VAR6)
        {
        case VAR59:
            if (VAR5.VAR20 != sizeof(VAR26.VAR24))
            {
                FUN6("");
                return -1;
            }
            *((VAR25 *)VAR4) = VAR5.VAR24;
            break;
        case VAR60:
            if (VAR5.VAR20 != sizeof(VAR26.VAR47))
            {
                FUN6("");
                return -1;
            }
            memcpy(VAR4, &VAR5.VAR47, sizeof(struct VAR48));
            break;
        default:
            FUN6("");
            return -1;
            break;
        }
    }
    return 0;
}