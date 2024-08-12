static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR3;
    uint32_t VAR12;
    int VAR13;
    int VAR14, VAR15;
    if (VAR6->VAR16 < 4 + 4)
    {
        FUN2(VAR2, VAR17, "", VAR6->VAR16);
        return VAR18;
    }
    VAR12 = FUN3(VAR11);
    if (VAR12 == FUN4('', '', '', ''))
    {
        unsigned VAR19 = FUN3(VAR11 + 4);
        if (VAR19 > VAR20 || VAR19 + 8 > VAR6->VAR16)
        {
            FUN2(VAR2, VAR17, "" VAR21 "", VAR19);
            return VAR18;
        }
        FUN5(VAR2, VAR11 + 8, VAR19);
        VAR19 += 8;
        VAR11 += VAR19;
    }
    VAR13 = VAR11 - VAR6->VAR3;
    VAR8->VAR22 = VAR6->VAR16 - VAR13;
    VAR8->VAR11 = VAR11;
    VAR8->VAR23 = VAR3;
    if (VAR8->VAR22 < VAR24)
    {
        FUN2(VAR2, VAR17, "");
        return VAR18;
    }
    if (VAR11[0] != '' || VAR11[1] != '')
    {
        FUN2(VAR2, VAR17, "");
        return VAR18;
    }
    VAR8->VAR25 = !(VAR11[2] & 0x80);
    VAR8->VAR26 = VAR11[2] & 7;
    VAR8->VAR27 = (VAR11[3] & 3) + 8;
    VAR8->VAR28 = FUN6(VAR11 + 4);
    VAR8->VAR29 = FUN6(VAR11 + 6);
    for (VAR14 = 0; VAR14 < 17; VAR14++)
        VAR8->VAR30[VAR14] = FUN7(VAR11 + 8 + VAR14 * 3);
    if (VAR8->VAR27 == 8)
    {
        FUN2(VAR2, VAR17, "", VAR8->VAR27);
        return VAR18;
    }
    VAR15 = FUN8(VAR8->VAR28, VAR8->VAR29, 0, VAR2);
    if (VAR15 < 0)
    {
        FUN2(VAR2, VAR17, "", VAR8->VAR28, VAR8->VAR29);
        return VAR18;
    }
    VAR2->VAR31 = FUN9(VAR8->VAR28, 16);
    VAR2->VAR32 = FUN9(VAR8->VAR29, 16);
    VAR2->VAR28 = VAR8->VAR28;
    VAR2->VAR29 = VAR8->VAR29;
    VAR2->VAR33 = 10;
    switch (VAR8->VAR26)
    {
    case VAR34:
        VAR2->VAR35 = VAR36;
        VAR8->VAR37 = VAR38;
        break;
    case VAR39:
        VAR2->VAR35 = VAR40;
        VAR8->VAR37 = VAR41;
        break;
    case VAR42:
        VAR2->VAR35 = VAR43;
        VAR8->VAR37 = VAR44;
        break;
    case VAR45:
        VAR2->VAR35 = VAR46;
        VAR8->VAR37 = VAR47;
        break;
    default:
        FUN2(VAR2, VAR17, "", VAR8->VAR26);
        return VAR18;
    }
    VAR15 = FUN10(VAR2, VAR8->VAR23, 0);
    if (VAR15 < 0)
    {
        FUN2(VAR2, VAR17, "");
        return VAR15;
    }
    VAR2->FUN11(VAR2, VAR48, NULL, NULL, 16);
    VAR8->VAR23->VAR49 = 1;
    VAR8->VAR23->VAR50 = VAR51;
    *VAR4 = 1;
    return VAR6->VAR16;
}