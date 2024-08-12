void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR2);
    FUN3(VAR2, VAR6);
    FUN4(&VAR2->VAR7, 10, (VAR2->VAR3 - VAR2->VAR8) & 0x3ff);
    FUN4(&VAR2->VAR7, 3, VAR2->VAR9);
    VAR2->VAR10 = VAR2->VAR7.VAR11 + FUN5(&VAR2->VAR7) / 8;
    FUN4(&VAR2->VAR7, 16, 0xFFFF);
    if (VAR2->VAR9 == VAR12 || VAR2->VAR9 == VAR13)
    {
        FUN4(&VAR2->VAR7, 1, 0);
        if (VAR2->VAR14 == VAR15)
            FUN4(&VAR2->VAR7, 3, VAR2->VAR16);
        else
            FUN4(&VAR2->VAR7, 3, 7);
    }
    if (VAR2->VAR9 == VAR13)
    {
        FUN4(&VAR2->VAR7, 1, 0);
        if (VAR2->VAR14 == VAR15)
            FUN4(&VAR2->VAR7, 3, VAR2->VAR17);
        else
            FUN4(&VAR2->VAR7, 3, 7);
    }
    FUN4(&VAR2->VAR7, 1, 0);
    VAR2->VAR18 = 1;
    if (VAR2->VAR14 == VAR19)
    {
        FUN3(VAR2, VAR20);
        FUN4(&VAR2->VAR7, 4, 8);
        if (VAR2->VAR9 == VAR12 || VAR2->VAR9 == VAR13)
        {
            FUN4(&VAR2->VAR7, 4, VAR2->VAR16);
            FUN4(&VAR2->VAR7, 4, VAR2->VAR16);
        }
        else
        {
            FUN4(&VAR2->VAR7, 8, 255);
        }
        if (VAR2->VAR9 == VAR13)
        {
            FUN4(&VAR2->VAR7, 4, VAR2->VAR17);
            FUN4(&VAR2->VAR7, 4, VAR2->VAR17);
        }
        else
        {
            FUN4(&VAR2->VAR7, 8, 255);
        }
        FUN4(&VAR2->VAR7, 2, VAR2->VAR21);
        assert(VAR2->VAR22 == VAR23);
        FUN4(&VAR2->VAR7, 2, VAR2->VAR22);
        if (VAR2->VAR24)
            FUN4(&VAR2->VAR7, 1, 0);
        else
            FUN4(&VAR2->VAR7, 1, VAR2->VAR25->VAR26.VAR27);
        VAR2->VAR18 = VAR2->VAR24;
        FUN4(&VAR2->VAR7, 1, VAR2->VAR18);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR28);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR29);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR30);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR31);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR32);
        VAR2->VAR33 = VAR2->VAR24;
        FUN4(&VAR2->VAR7, 1, VAR2->VAR34 == VAR35 ? VAR2->VAR33 : 0);
        FUN4(&VAR2->VAR7, 1, VAR2->VAR33);
        FUN4(&VAR2->VAR7, 1, 0);
    }
    if (VAR2->VAR36)
    {
        int VAR37;
        FUN3(VAR2, VAR38);
        for (VAR37 = 0; VAR37 < sizeof(VAR39); VAR37++)
            FUN4(&VAR2->VAR7, 8, VAR39[VAR37]);
    }
    VAR5 = FUN6(&VAR2->VAR25->VAR26, VAR40);
    if (VAR5)
    {
        VAR41 *VAR42 = (VAR41 *)VAR5->VAR43;
        uint8_t VAR44;
        switch (VAR42->VAR45)
        {
        case VAR46:
            VAR44 = 0x03;
            break;
        case VAR47:
            VAR44 = 0x04;
            break;
        case VAR48:
            VAR44 = 0x08;
            break;
        case VAR49:
            VAR44 = 0x23;
            break;
        default:
            VAR44 = 0;
            break;
        }
        if (VAR44 != 0)
        {
            FUN3(VAR2, VAR38);
            FUN4(&VAR2->VAR7, 8, '');
            FUN4(&VAR2->VAR7, 8, '');
            FUN4(&VAR2->VAR7, 8, '');
            FUN4(&VAR2->VAR7, 8, '');
            FUN4(&VAR2->VAR7, 8, 0x03);
            FUN4(&VAR2->VAR7, 1, 1);
            FUN4(&VAR2->VAR7, 7, VAR44);
            FUN4(&VAR2->VAR7, 8, 0x04);
            FUN4(&VAR2->VAR7, 8, 0xFF);
        }
    }
    VAR2->VAR50 = 0;
    FUN7(VAR2);
}