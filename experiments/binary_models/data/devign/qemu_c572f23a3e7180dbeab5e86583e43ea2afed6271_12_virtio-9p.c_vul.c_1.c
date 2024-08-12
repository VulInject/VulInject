static void FUN1(void *VAR1)
{
    int32_t VAR2;
    int VAR3 = 0;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    V9fsQID VAR7;
    int32_t VAR8;
    int8_t VAR9;
    V9fsPath VAR10;
    struct stat VAR11;
    V9fsString VAR12;
    V9fsString VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR1;
    FUN2(&VAR10);
    FUN3(VAR16, VAR4, "", &VAR2, &VAR12, &VAR8, &VAR9, &VAR13);
    FUN4(VAR16->VAR17, VAR16->VAR18, VAR2, VAR12.VAR19, VAR8, VAR9);
    VAR6 = FUN5(VAR16, VAR2);
    if (VAR6 == NULL)
    {
        VAR3 = -VAR20;
        goto VAR21;
    }
    if (VAR8 & VAR22)
    {
        VAR3 = FUN6(VAR16, VAR6, &VAR12, VAR8 & 0777, VAR6->VAR23, -1, &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
        VAR3 = FUN9(VAR16, VAR6);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR6->VAR25 = VAR26;
    }
    else if (VAR8 & VAR27)
    {
        VAR3 = FUN10(VAR16, VAR6, &VAR12, VAR13.VAR19, -1, &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
    }
    else if (VAR8 & VAR28)
    {
        int32_t VAR29 = FUN11(VAR13.VAR19);
        VAR5 *VAR30 = FUN5(VAR16, VAR29);
        if (VAR30 == NULL)
        {
            VAR3 = -VAR20;
            goto VAR24;
        }
        VAR3 = FUN12(VAR16, VAR30, VAR6, &VAR12);
        FUN13(VAR16, VAR30);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            VAR6->VAR25 = VAR31;
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
        VAR3 = FUN14(VAR16, &VAR6->VAR10, &VAR11);
        if (VAR3 < 0)
        {
            VAR6->VAR25 = VAR31;
            goto VAR24;
        }
    }
    else if (VAR8 & VAR32)
    {
        char VAR33;
        uint32_t VAR34, VAR35;
        mode_t VAR36 = 0;
        if (sscanf(VAR13.VAR19, "", &VAR33, &VAR34, &VAR35) != 3)
        {
            VAR3 = -VAR37;
            goto VAR24;
        }
        switch (VAR33)
        {
        case '':
            VAR36 = VAR38;
            break;
        case '':
            VAR36 = VAR39;
            break;
        default:
            VAR3 = -VAR40;
            goto VAR24;
        }
        VAR36 |= VAR8 & 0777;
        VAR3 = FUN15(VAR16, VAR6, &VAR12, VAR6->VAR23, -1, FUN16(VAR34, VAR35), VAR36, &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
    }
    else if (VAR8 & VAR41)
    {
        VAR3 = FUN15(VAR16, VAR6, &VAR12, VAR6->VAR23, -1, 0, VAR42 | (VAR8 & 0777), &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
    }
    else if (VAR8 & VAR43)
    {
        VAR3 = FUN15(VAR16, VAR6, &VAR12, VAR6->VAR23, -1, 0, VAR44 | (VAR8 & 0777), &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR3 = FUN7(VAR16, &VAR6->VAR10, VAR12.VAR19, &VAR10);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        FUN8(&VAR6->VAR10, &VAR10);
    }
    else
    {
        VAR3 = FUN17(VAR16, VAR6, &VAR12, -1, FUN18(VAR9) | VAR45, VAR8, &VAR11);
        if (VAR3 < 0)
        {
            goto VAR24;
        }
        VAR6->VAR25 = VAR46;
        VAR6->VAR47 = FUN18(VAR9);
        if (VAR6->VAR47 & VAR48)
        {
            VAR6->VAR49 |= VAR50;
        }
    }
    VAR14 = FUN19(VAR16, &VAR6->VAR10);
    FUN20(&VAR11, &VAR7);
    VAR4 += FUN21(VAR16, VAR4, "", &VAR7, VAR14);
    VAR3 = VAR4;
VAR24:
    FUN13(VAR16, VAR6);
VAR21:
    FUN22(VAR16->VAR51, VAR16, VAR3);
    FUN23(&VAR12);
    FUN23(&VAR13);
    FUN24(&VAR10);