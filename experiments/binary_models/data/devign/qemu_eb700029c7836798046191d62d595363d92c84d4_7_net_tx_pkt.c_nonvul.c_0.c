static bool FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4, *VAR5;
    size_t VAR6;
    size_t VAR7;
    uint16_t VAR8;
    assert(VAR2);
    VAR4 = &VAR2->VAR9[VAR10];
    VAR5 = &VAR2->VAR9[VAR11];
    VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, 0, VAR4->VAR14, VAR15);
    if (VAR6 < sizeof(struct VAR16))
    {
        VAR4->VAR17 = 0;
        return false;
    }
    VAR4->VAR17 = sizeof(struct VAR16);
    switch (FUN3(FUN4(VAR4->VAR14)->VAR18))
    {
    case VAR19:
        VAR4->VAR17 += sizeof(struct VAR20);
        break;
    case VAR21:
        VAR4->VAR17 += 2 * sizeof(struct VAR20);
        break;
    }
    if (VAR6 < VAR4->VAR17)
    {
        VAR4->VAR17 = 0;
        VAR5->VAR17 = 0;
        VAR2->VAR22 = VAR23;
        return false;
    }
    else
    {
        VAR4->VAR17 = VAR15;
        VAR4->VAR17 = FUN5(VAR4->VAR14);
        VAR2->VAR22 = FUN6(VAR4->VAR14);
    }
    VAR8 = FUN7(VAR4, 1, VAR4->VAR17);
    switch (VAR8)
    {
    case VAR24:
        VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR17, VAR5->VAR14, sizeof(struct VAR25));
        if (VAR6 < sizeof(struct VAR25))
        {
            VAR5->VAR17 = 0;
            return false;
        }
        VAR5->VAR17 = FUN8(VAR5->VAR14);
        if (VAR5->VAR17 < sizeof(struct VAR25))
        {
            VAR5->VAR17 = 0;
            return false;
        }
        VAR2->VAR26 = ((struct VAR25 *)VAR5->VAR14)->VAR27;
        if (FUN8(VAR5->VAR14) != sizeof(struct VAR25))
        {
            VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR17 + sizeof(struct VAR25), VAR5->VAR14 + sizeof(struct VAR25), VAR5->VAR17 - sizeof(struct VAR25));
            if (VAR6 < VAR5->VAR17 - sizeof(struct VAR25))
            {
                VAR5->VAR17 = 0;
                return false;
            }
        }
        break;
    case VAR28:
    {
        eth_ip6_hdr_info VAR29;
        if (!FUN9(VAR2->VAR12, VAR2->VAR13, VAR4->VAR17, &VAR29))
        {
            VAR5->VAR17 = 0;
            return false;
        }
        VAR2->VAR26 = VAR29.VAR26;
        VAR7 = VAR29.VAR30;
        if (VAR7 > VAR31)
        {
            VAR5->VAR17 = 0;
            return false;
        }
        VAR6 = FUN2(VAR2->VAR12, VAR2->VAR13, VAR4->VAR17, VAR5->VAR14, VAR7);
        if (VAR6 < VAR7)
        {
            VAR5->VAR17 = 0;
            return false;
        }
        else
        {
            VAR5->VAR17 = VAR7;
        }
        break;
    }
    default:
        VAR5->VAR17 = 0;
        break;
    }
    FUN10(VAR2);
    return true;
}