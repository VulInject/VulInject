int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    unsigned int VAR8, VAR9;
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    uint32_t VAR15;
    int VAR16 = 0;
    if (!VAR6)
    {
        if (VAR2->VAR14 && VAR2->VAR17)
        {
            VAR15 = 0;
            VAR16 = VAR2->FUN2(VAR2, VAR4, &VAR15, NULL, 0);
            FUN3(VAR2, VAR4, VAR15);
            return VAR16;
        }
        else
        {
            if (VAR2->VAR18 >= VAR2->VAR19)
                return -1;
            VAR12 = FUN4(VAR2->VAR20, VAR4, VAR2->VAR6 + VAR2->VAR18, VAR2->VAR19 - VAR2->VAR18);
            if (VAR12 < 0)
                return -1;
            VAR2->VAR18 += VAR12;
            if (VAR2->VAR18 < VAR2->VAR19)
                return 1;
            else
                return 0;
        }
    }
    if (VAR7 < 12)
        return -1;
    if ((VAR6[0] & 0xc0) != (VAR21 << 6))
        return -1;
    if (VAR6[1] >= 200 && VAR6[1] <= 204)
    {
        FUN5(VAR2, VAR6, VAR7);
        return -1;
    }
    VAR10 = VAR6[1] & 0x7f;
    VAR11 = (VAR6[2] << 8) | VAR6[3];
    VAR15 = FUN6(VAR6 + 4);
    VAR8 = FUN6(VAR6 + 8);
    VAR2->VAR8 = VAR8;
    if (VAR2->VAR10 != VAR10)
        return -1;
    VAR14 = VAR2->VAR14;
    if (!FUN7(&VAR2->VAR22, VAR11))
    {
        FUN8(VAR14 ? VAR14->VAR23 : NULL, VAR24, "", VAR10, VAR11, ((VAR2->VAR11 + 1) & 0xffff));
        return -1;
    }
    VAR2->VAR11 = VAR11;
    VAR7 -= 12;
    VAR6 += 12;
    if (!VAR14)
    {
        VAR12 = FUN4(VAR2->VAR20, VAR4, VAR6, VAR7);
        if (VAR12 < 0)
            return -1;
        if (VAR12 < VAR7)
        {
            VAR2->VAR19 = VAR7 - VAR12;
            memcpy(VAR2->VAR6, VAR6 + VAR12, VAR2->VAR19);
            VAR2->VAR18 = 0;
            return 1;
        }
    }
    else
    {
        switch (VAR14->VAR23->VAR25)
        {
        case VAR26:
            if (VAR7 <= 4)
                return -1;
            VAR9 = FUN6(VAR6);
            VAR7 -= 4;
            VAR6 += 4;
            FUN9(VAR4, VAR7);
            memcpy(VAR4->VAR27, VAR6, VAR7);
            break;
        case VAR28:
            if (VAR7 <= 4)
                return -1;
            VAR9 = FUN6(VAR6);
            VAR6 += 4;
            VAR7 -= 4;
            if (VAR9 & (1 << 26))
            {
                if (VAR7 <= 4)
                    return -1;
                VAR6 += 4;
                VAR7 -= 4;
            }
            FUN9(VAR4, VAR7);
            memcpy(VAR4->VAR27, VAR6, VAR7);
            break;
        case VAR29:
            if (FUN10(VAR2, VAR6))
                return -1;
            {
                VAR30 *VAR31 = VAR2->VAR32;
                if (VAR31 == NULL)
                    return -1;
                VAR6 += VAR31->VAR33 + 2;
                VAR7 -= VAR31->VAR33 + 2;
                FUN9(VAR4, VAR31->VAR34[0].VAR35);
                memcpy(VAR4->VAR27, VAR6, VAR31->VAR34[0].VAR35);
                VAR6 += VAR31->VAR34[0].VAR35;
                VAR7 -= VAR31->VAR34[0].VAR35;
            }
            VAR2->VAR19 = VAR7;
            VAR2->VAR36 = VAR6;
            VAR16 = 0;
            break;
        default:
            if (VAR2->VAR17)
            {
                VAR16 = VAR2->FUN2(VAR2, VAR4, &VAR15, VAR6, VAR7);
            }
            else
            {
                FUN9(VAR4, VAR7);
                memcpy(VAR4->VAR27, VAR6, VAR7);
            }
            break;
        }
        FUN3(VAR2, VAR4, VAR15);
    }
    return VAR16;
}