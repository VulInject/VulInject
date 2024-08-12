static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    unsigned int VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13 = 0;
    int VAR14;
    VAR15 *VAR16;
    uint32_t VAR17;
    int VAR18 = 0;
    VAR14 = VAR6[0] & 0x10;
    VAR10 = VAR6[1] & 0x7f;
    if (VAR6[1] & 0x80)
        VAR13 |= VAR19;
    VAR11 = FUN2(VAR6 + 2);
    VAR17 = FUN3(VAR6 + 4);
    VAR8 = FUN3(VAR6 + 8);
    VAR2->VAR8 = VAR8;
    if (VAR2->VAR10 != VAR10)
        return -1;
    VAR16 = VAR2->VAR16;
    if (!FUN4(&VAR2->VAR20, VAR11))
    {
        FUN5(VAR16 ? VAR16->VAR21 : NULL, VAR22, "", VAR10, VAR11, ((VAR2->VAR11 + 1) & 0xffff));
        return -1;
    }
    if (VAR6[0] & 0x20)
    {
        int VAR23 = VAR6[VAR7 - 1];
        if (VAR7 >= 12 + VAR23)
            VAR7 -= VAR23;
    }
    VAR2->VAR11 = VAR11;
    VAR7 -= 12;
    VAR6 += 12;
    if (VAR14)
    {
        if (VAR7 < 4)
            return -1;
        VAR14 = (FUN2(VAR6 + 2) + 1) << 2;
        if (VAR7 < VAR14)
            return -1;
        VAR7 -= VAR14;
        VAR6 += VAR14;
    }
    if (!VAR16)
    {
        VAR12 = FUN6(VAR2->VAR24, VAR4, VAR6, VAR7);
        if (VAR12 < 0)
            return FUN7(VAR25);
        if (VAR12 < VAR7)
        {
            VAR2->VAR26 = VAR7 - VAR12;
            memcpy(VAR2->VAR6, VAR6 + VAR12, VAR2->VAR26);
            VAR2->VAR27 = 0;
            return 1;
        }
        return 0;
    }
    else if (VAR2->VAR28)
    {
        VAR18 = VAR2->FUN8(VAR2->VAR29, VAR2->VAR30, VAR2->VAR16, VAR4, &VAR17, VAR6, VAR7, VAR13);
    }
    else
    {
        switch (VAR16->VAR21->VAR31)
        {
        case VAR32:
        case VAR33:
            if (VAR7 <= 4)
                return -1;
            VAR9 = FUN3(VAR6);
            VAR7 -= 4;
            VAR6 += 4;
            if (FUN9(VAR4, VAR7) < 0)
                return FUN7(VAR34);
            memcpy(VAR4->VAR35, VAR6, VAR7);
            break;
        case VAR36:
        case VAR37:
            if (VAR7 <= 4)
                return -1;
            VAR9 = FUN3(VAR6);
            VAR6 += 4;
            VAR7 -= 4;
            if (VAR9 & (1 << 26))
            {
                if (VAR7 <= 4)
                    return -1;
                VAR6 += 4;
                VAR7 -= 4;
            }
            if (FUN9(VAR4, VAR7) < 0)
                return FUN7(VAR34);
            memcpy(VAR4->VAR35, VAR6, VAR7);
            break;
        default:
            if (FUN9(VAR4, VAR7) < 0)
                return FUN7(VAR34);
            memcpy(VAR4->VAR35, VAR6, VAR7);
            break;
        }
        VAR4->VAR38 = VAR16->VAR39;
    }
    FUN10(VAR2, VAR4, VAR17);
    return VAR18;
}