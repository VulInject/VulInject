static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, update, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21, VAR22, VAR23;
    VAR24 *VAR25;
    uint32_t VAR26, VAR27, VAR28;
    VAR29 *VAR30;
    VAR3 |= FUN2(VAR2);
    if (!VAR3)
        FUN3(VAR2);
    VAR2->FUN4(VAR2, &VAR13, &VAR14);
    VAR21 = VAR13;
    VAR15 = (VAR2->VAR31[0x05] >> 5) & 3;
    VAR10 = (VAR2->VAR32[0x09] >> 7);
    if (VAR15 != 1)
    {
        VAR22 = (((VAR2->VAR32[0x09] & 0x1f) + 1) << VAR10) - 1;
    }
    else
    {
        VAR22 = VAR10;
    }
    VAR23 = VAR22;
    if (VAR15 != VAR2->VAR15 || VAR10 != VAR2->VAR10)
    {
        VAR3 = 1;
        VAR2->VAR15 = VAR15;
        VAR2->VAR10 = VAR10;
    }
    if (VAR15 == 0)
    {
        VAR3 |= FUN5(VAR2);
        if (VAR2->VAR33[0x01] & 8)
        {
            VAR26 = VAR34;
            VAR21 <<= 1;
        }
        else
        {
            VAR26 = VAR35;
        }
        VAR20 = 4;
    }
    else if (VAR15 == 1)
    {
        VAR3 |= FUN5(VAR2);
        if (VAR2->VAR33[0x01] & 8)
        {
            VAR26 = VAR36;
            VAR21 <<= 1;
        }
        else
        {
            VAR26 = VAR37;
        }
        VAR20 = 4;
    }
    else
    {
        switch (VAR2->FUN6(VAR2))
        {
        default:
        case 0:
            VAR3 |= FUN7(VAR2);
            VAR26 = VAR38;
            VAR20 = 4;
            break;
        case 8:
            VAR3 |= FUN7(VAR2);
            VAR26 = VAR39;
            VAR20 = 8;
            break;
        case 15:
            VAR26 = VAR40;
            VAR20 = 16;
            break;
        case 16:
            VAR26 = VAR41;
            VAR20 = 16;
            break;
        case 24:
            VAR26 = VAR42;
            VAR20 = 24;
            break;
        case 32:
            VAR26 = VAR43;
            VAR20 = 32;
            break;
        }
    }
    VAR30 = VAR44[VAR26 * VAR45 + FUN8(VAR2->VAR46)];
    VAR12 = VAR2->FUN6(VAR2);
    if (VAR2->VAR16 != VAR2->VAR47 || VAR21 != VAR2->VAR48 || VAR14 != VAR2->VAR49 || VAR2->VAR50 != VAR12)
    {
        if (VAR12 == 16 || VAR12 == 32)
        {
            if (FUN9())
            {
                FUN10(VAR2->VAR46->VAR51);
                VAR2->VAR46->VAR51 = FUN11(VAR21, VAR14, VAR12, VAR2->VAR16, VAR2->VAR52 + (VAR2->VAR53 * 4));
                FUN12(VAR2->VAR46);
            }
            else
            {
                FUN13(VAR2->VAR46, VAR21, VAR14);
            }
        }
        else
        {
            FUN13(VAR2->VAR46, VAR21, VAR14);
        }
        VAR2->VAR54 = VAR21;
        VAR2->VAR55 = VAR14;
        VAR2->VAR48 = VAR21;
        VAR2->VAR49 = VAR14;
        VAR2->VAR47 = VAR2->VAR16;
        VAR2->VAR50 = VAR12;
        VAR3 = 1;
    }
    else if (FUN9() && FUN14(VAR2->VAR46->VAR51) && (VAR3 || VAR2->VAR46->VAR51->VAR56 != VAR2->VAR52 + (VAR2->VAR53 * 4)))
    {
        VAR2->VAR46->VAR51->VAR56 = VAR2->VAR52 + (VAR2->VAR53 * 4);
        FUN15(VAR2->VAR46);
    }
    VAR2->VAR57 = VAR58[FUN8(VAR2->VAR46)];
    if (!FUN14(VAR2->VAR46->VAR51) && VAR2->VAR59)
        VAR2->FUN16(VAR2);
    VAR16 = VAR2->VAR16;
    FUN17("", VAR13, VAR14, VAR26, VAR16, VAR2->VAR32[9], VAR2->VAR32[0x17], VAR2->VAR60, VAR2->VAR33[0x01]);
    VAR27 = (VAR2->VAR53 * 4);
    VAR19 = (VAR13 * VAR20 + 7) / 8;
    VAR9 = -1;
    VAR6 = 0x7fffffff;
    VAR7 = -1;
    VAR25 = FUN18(VAR2->VAR46);
    VAR8 = FUN19(VAR2->VAR46);
    VAR4 = 0;
    for (VAR5 = 0; VAR5 < VAR14; VAR5++)
    {
        VAR28 = VAR27;
        if (!(VAR2->VAR32[0x17] & 1))
        {
            int VAR61;
            VAR61 = 14 + ((VAR2->VAR32[0x17] >> 6) & 1);
            VAR28 = (VAR28 & ~(1 << VAR61)) | ((VAR4 & 1) << VAR61);
        }
        if (!(VAR2->VAR32[0x17] & 2))
        {
            VAR28 = (VAR28 & ~0x8000) | ((VAR4 & 2) << 14);
        }
        VAR17 = VAR2->VAR62 + (VAR28 & VAR63);
        VAR18 = VAR2->VAR62 + ((VAR28 + VAR19 - 1) & VAR63);
        update = VAR3 | FUN20(VAR17, VAR64) | FUN20(VAR18, VAR64);
        if ((VAR18 - VAR17) > VAR65)
        {
            update |= FUN20(VAR17 + VAR65, VAR64);
        }
        update |= (VAR2->VAR66[VAR5 >> 5] >> (VAR5 & 0x1f)) & 1;
        if (update)
        {
            if (VAR9 < 0)
                VAR9 = VAR5;
            if (VAR17 < VAR6)
                VAR6 = VAR17;
            if (VAR18 > VAR7)
                VAR7 = VAR18;
            if (!(FUN14(VAR2->VAR46->VAR51)))
            {
                FUN21(VAR2, VAR25, VAR2->VAR52 + VAR28, VAR13);
                if (VAR2->VAR67)
                    VAR2->FUN22(VAR2, VAR25, VAR5);
            }
        }
        else
        {
            if (VAR9 >= 0)
            {
                FUN23(VAR2->VAR46, 0, VAR9, VAR21, VAR5 - VAR9);
                VAR9 = -1;
            }
        }
        if (!VAR23)
        {
            VAR11 = (VAR2->VAR32[0x17] & 3) ^ 3;
            if ((VAR4 & VAR11) == VAR11)
                VAR27 += VAR16;
            VAR4++;
            VAR23 = VAR22;
        }
        else
        {
            VAR23--;
        }
        if (VAR5 == VAR2->VAR60)
            VAR27 = 0;
        VAR25 += VAR8;
    }
    if (VAR9 >= 0)
    {
        FUN23(VAR2->VAR46, 0, VAR9, VAR21, VAR5 - VAR9);
    }
    if (VAR7 != -1)
    {
        FUN24(VAR6, VAR7 + VAR65, VAR64);
    }
    memset(VAR2->VAR66, 0, ((VAR14 + 31) >> 5) * 4);
}