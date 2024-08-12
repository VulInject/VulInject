static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7;
    uint64_t VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    dma_addr_t VAR13;
    if (VAR2->VAR14[VAR3].VAR3.VAR15[0].VAR16 & (VAR17 | VAR18))
    {
        FUN2(VAR3, "");
        return -1;
    }
    VAR10 = &((VAR9 *)VAR2->VAR14[VAR3].VAR19)[VAR4];
    if (!VAR2->VAR14[VAR3].VAR19)
    {
        FUN2(VAR3, "");
        return -1;
    }
    VAR2->VAR14[VAR3].VAR20 = VAR10;
    VAR7 = FUN3(VAR10->VAR7);
    VAR8 = FUN4(VAR10->VAR8);
    VAR13 = 0x80;
    VAR12 = FUN5(VAR2->VAR21, VAR8, &VAR13, VAR22);
    if (!VAR12)
    {
        FUN2(VAR3, "");
        return -1;
    }
    VAR6 = &VAR2->VAR14[VAR3].VAR3.VAR15[0];
    if (!VAR6->VAR23)
    {
        FUN2(VAR3, "");
        goto VAR24;
    }
    FUN6(VAR12, 0x90);
    switch (VAR12[0])
    {
    case VAR25:
        break;
    default:
        FUN2(VAR3, ""
                      "",
                VAR12[0], VAR12[1], VAR12[2]);
        goto VAR24;
        break;
    }
    switch (VAR12[1])
    {
    case VAR26:
        break;
    case 0:
        break;
    default:
        FUN2(VAR3, ""
                      "",
                VAR12[0], VAR12[1], VAR12[2]);
        goto VAR24;
        break;
    }
    if (!(VAR12[1] & VAR26))
    {
        switch (VAR2->VAR14[VAR3].VAR27)
        {
        case VAR28:
            if (VAR12[15] & VAR29)
            {
                VAR2->VAR14[VAR3].VAR27 = VAR30;
            }
            break;
        case VAR30:
            if (!(VAR12[15] & VAR29))
            {
                FUN7(VAR2, VAR3);
            }
            break;
        }
    }
    else if (VAR12[1] & VAR26)
    {
        if (FUN8(VAR12[2]))
        {
            FUN9(VAR2, VAR3, VAR12, VAR4);
            goto VAR24;
        }
        VAR6->VAR31 = VAR12[3];
        VAR6->VAR32 = VAR12[4];
        VAR6->VAR33 = VAR12[5];
        VAR6->VAR34 = VAR12[6];
        VAR6->VAR35 = VAR12[7];
        VAR6->VAR36 = VAR12[8];
        VAR6->VAR37 = VAR12[9];
        VAR6->VAR38 = VAR12[10];
        VAR6->VAR39 = VAR12[11];
        VAR6->VAR40 = (VAR41)((VAR12[13] << 8) | VAR12[12]);
        if (VAR7 & VAR42)
        {
            memcpy(VAR6->VAR43, &VAR12[VAR44], 0x10);
            FUN6(VAR6->VAR43, 0x10);
            VAR2->VAR14[VAR3].VAR45 = false;
        }
        VAR6->VAR46 = 0;
        VAR10->VAR16 = 0;
        FUN10(&VAR2->VAR14[VAR3].VAR3, VAR12[2]);
    }
VAR24:
    FUN11(VAR2->VAR21, VAR12, VAR13, VAR22, VAR13);
    if (VAR2->VAR14[VAR3].VAR3.VAR15[0].VAR16 & (VAR17 | VAR18))
    {
        VAR2->VAR14[VAR3].VAR47 = VAR4;
        return -1;
    }
    return 0;
}