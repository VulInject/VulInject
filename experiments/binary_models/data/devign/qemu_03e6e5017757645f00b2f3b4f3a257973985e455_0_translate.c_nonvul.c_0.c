void FUN1(VAR1 *VAR2)
{
    if (FUN2(VAR3))
    {
        FUN3("", VAR2->VAR4);
        FUN4(VAR2, 0);
    }
    memset(VAR2, 0, FUN5(VAR1, VAR5));
    FUN6(VAR2, 1);
    VAR2->VAR6 = VAR2->VAR7->VAR6;
    VAR2->VAR8 = VAR2->VAR7->VAR8;
    VAR2->VAR8 |= (1 << VAR9);
    VAR2->VAR10 = VAR2->VAR7->VAR10;
    VAR2->VAR11 = VAR2->VAR7->VAR11;
    VAR2->VAR12 = VAR2->VAR7->VAR12;
    VAR2->VAR13 = VAR2->VAR7->VAR13;
    VAR2->VAR14 = VAR2->VAR7->VAR14;
    VAR2->VAR15 = VAR2->VAR7->VAR15 << VAR2->VAR7->VAR16;
    VAR2->VAR16 = VAR2->VAR7->VAR16;
    VAR2->VAR17 = VAR2->VAR7->VAR17;
    VAR2->VAR18 = VAR2->VAR7->VAR18;
    VAR2->VAR19 = VAR2->VAR7->VAR19;
    VAR2->VAR20 = VAR2->VAR7->VAR20;
    VAR2->VAR21 = VAR2->VAR7->VAR21;
    VAR2->VAR22 = 0;
    VAR2->VAR23 = VAR2->VAR7->VAR23;
    VAR2->VAR24 = (VAR25)((1ULL << VAR2->VAR7->VAR23) - 1);
    if (VAR2->VAR7->VAR26 & VAR27)
    {
        VAR2->VAR24 |= 3ULL << 62;
    }
    VAR2->VAR28 = VAR2->VAR7->VAR28;
    VAR2->VAR29 = (VAR25)((1ULL << VAR2->VAR7->VAR28) - 1);
    VAR2->VAR30 = VAR2->VAR7->VAR30;
    VAR2->VAR31 = VAR2->VAR7->VAR31;
    VAR2->VAR32 = VAR2->VAR7->VAR32;
    VAR2->VAR33 = VAR2->VAR7->VAR33;
    VAR2->VAR34 = VAR2->VAR7->VAR34;
    VAR2->VAR35 = VAR2->VAR7->VAR35;
    VAR2->VAR36 = VAR2->VAR7->VAR36;
    VAR2->VAR37 = VAR2->VAR7->VAR37;
    VAR2->VAR38 = VAR2->VAR7->VAR38;
    VAR2->VAR39 = VAR2->VAR7->VAR39;
    VAR2->VAR40.VAR41 = VAR2->VAR7->VAR42;
    VAR2->VAR26 = VAR2->VAR7->VAR26;
    VAR2->VAR43 = (VAR44 << VAR45);
    VAR2->VAR46 |= 0x0000000F;
    if (VAR2->VAR10 & (1 << VAR47))
    {
        VAR2->VAR43 |= (1 << VAR48);
    }
    if (VAR2->VAR49 & VAR50)
    {
        VAR2->VAR51 = VAR2->VAR52.VAR53 - 4;
    }
    else
    {
        VAR2->VAR51 = VAR2->VAR52.VAR53;
    }
    VAR2->VAR52.VAR53 = (VAR54)0xBFC00000;
    VAR2->VAR55 = VAR2->VAR56->VAR57 - 1;
    VAR2->VAR56->VAR58 = VAR2->VAR56->VAR57;
    VAR2->VAR59 = 0;
    VAR2->VAR60 = 0x80000000 | (VAR2->VAR4 & 0x3FF);
    VAR2->VAR43 = (1 << VAR61) | (1 << VAR62);
    VAR2->VAR63 = 0xe0000000;
    {
        int VAR64;
        for (VAR64 = 0; VAR64 < 7; VAR64++)
        {
            VAR2->VAR65[VAR64] = 0;
            VAR2->VAR66[VAR64] = 0x80000000;
        }
        VAR2->VAR65[7] = 0;
        VAR2->VAR66[7] = 0;
    }
    VAR2->VAR67 = (1 << VAR68) | (0x1 << VAR69);
    if (VAR2->VAR12 & (1 << VAR70))
    {
        int VAR64;
        for (VAR64 = 0; VAR64 < FUN7(VAR2->VAR71); VAR64++)
        {
            VAR2->VAR71[VAR64].VAR72 = VAR2->VAR4 << VAR73;
            VAR2->VAR71[VAR64].VAR74 = 1;
        }
        VAR2->VAR52.VAR74 = 1;
        VAR2->VAR75 = 1;
        if (!VAR2->VAR4)
        {
            VAR2->VAR76->VAR77 |= (1 << VAR78);
            VAR2->VAR79 |= (1 << VAR80) | (1 << VAR81);
            VAR2->VAR75 = 0;
            VAR2->VAR52.VAR74 = 0;
            VAR2->VAR71[0].VAR74 = 0;
            VAR2->VAR52.VAR82 = (1 << VAR83);
            VAR2->VAR71[0].VAR82 = (1 << VAR83);
        }
    }
    FUN8(VAR2);
    VAR2->VAR84 = VAR85;
}