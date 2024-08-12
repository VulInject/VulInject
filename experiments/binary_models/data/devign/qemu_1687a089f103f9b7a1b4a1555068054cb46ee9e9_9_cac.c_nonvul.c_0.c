FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    unsigned char *VAR13;
    vcard_7816_status_t VAR14;
    VCardStatus VAR15 = VAR16;
    VAR10 = FUN2(VAR2, VAR4->VAR17);
    assert(VAR10);
    VAR8 = &(VAR10->VAR18.VAR19);
    switch (VAR4->VAR20)
    {
    case VAR21:
        *VAR6 = FUN3(VAR22);
        VAR15 = VAR23;
        break;
    case VAR24:
        if ((VAR4->VAR25 != 0) || (VAR4->VAR26 != 0))
        {
            *VAR6 = FUN3(VAR27);
            break;
        }
        assert(VAR8->VAR28 != NULL);
        VAR11 = VAR4->VAR29;
        if (VAR8->VAR30 == NULL)
        {
            VAR8->VAR30 = VAR8->VAR28;
            VAR8->VAR31 = VAR8->VAR32;
        }
        VAR11 = FUN4(VAR11, VAR8->VAR31);
        VAR12 = FUN4(255, VAR8->VAR31 - VAR11);
        *VAR6 = FUN5(VAR2, VAR8->VAR30, VAR11, VAR4->VAR29, VAR12 ? VAR33 : VAR34, VAR12);
        VAR8->VAR30 += VAR11;
        VAR8->VAR31 -= VAR11;
        if ((*VAR6 == NULL) || (VAR12 == 0))
        {
            VAR8->VAR30 = NULL;
        }
        if (*VAR6 == NULL)
        {
            *VAR6 = FUN3(VAR35);
        }
        VAR15 = VAR23;
        break;
    case VAR36:
        if (VAR4->VAR25 != 0)
        {
            *VAR6 = FUN3(VAR27);
            break;
        }
        VAR11 = VAR4->VAR37;
        VAR13 = FUN6(VAR8->VAR13, VAR8->VAR38 + VAR11);
        memcpy(VAR13 + VAR8->VAR38, VAR4->VAR39, VAR11);
        VAR11 += VAR8->VAR38;
        switch (VAR4->VAR26)
        {
        case 0x80:
            VAR8->VAR13 = VAR13;
            VAR8->VAR38 = VAR11;
            *VAR6 = FUN3(VAR40);
            break;
        case 0x00:
            VAR14 = FUN7(VAR2, VAR8->VAR41, VAR13, VAR11);
            if (VAR14 != VAR40)
            {
                *VAR6 = FUN3(VAR14);
                break;
            }
            *VAR6 = FUN8(VAR2, VAR13, VAR11, VAR4->VAR29, VAR40);
            if (*VAR6 == NULL)
            {
                *VAR6 = FUN3(VAR35);
            }
            break;
        default:
            *VAR6 = FUN3(VAR27);
            break;
        }
        FUN9(VAR13);
        VAR8->VAR13 = NULL;
        VAR8->VAR38 = 0;
        VAR15 = VAR23;
        break;
    case VAR42:
        *VAR6 = FUN3(VAR43);
        VAR15 = VAR23;
        break;
    default:
        VAR15 = FUN10(VAR2, VAR4, VAR6);
        break;
    }
    return VAR15;
}