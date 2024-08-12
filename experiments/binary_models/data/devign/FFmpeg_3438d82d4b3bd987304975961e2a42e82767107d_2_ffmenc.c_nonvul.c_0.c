static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    VAR4->VAR14 = VAR15;
    FUN2(VAR9, FUN3('', '', '', ''));
    FUN4(VAR9, VAR4->VAR14);
    FUN5(VAR9, VAR4->VAR14);
    FUN4(VAR9, VAR2->VAR16);
    VAR12 = 0;
    for (VAR13 = 0; VAR13 < VAR2->VAR16; VAR13++)
    {
        VAR7 = VAR2->VAR17[VAR13];
        VAR12 += VAR7->VAR11->VAR12;
    }
    FUN4(VAR9, VAR12);
    for (VAR13 = 0; VAR13 < VAR2->VAR16; VAR13++)
    {
        VAR7 = VAR2->VAR17[VAR13];
        FUN6(VAR7, 64, 1, 1000000);
        VAR11 = VAR7->VAR11;
        FUN4(VAR9, VAR11->VAR18);
        FUN7(VAR9, VAR11->VAR19);
        FUN4(VAR9, VAR11->VAR12);
        FUN4(VAR9, VAR7->VAR20);
        FUN4(VAR9, VAR11->VAR21);
        FUN4(VAR9, VAR11->VAR22);
        FUN4(VAR9, VAR11->VAR23);
        switch (VAR11->VAR19)
        {
        case VAR24:
            FUN4(VAR9, VAR11->VAR25.VAR26);
            FUN4(VAR9, VAR11->VAR25.VAR27);
            FUN8(VAR9, VAR11->VAR28);
            FUN8(VAR9, VAR11->VAR29);
            FUN8(VAR9, VAR11->VAR30);
            FUN4(VAR9, VAR11->VAR31);
            FUN7(VAR9, VAR11->VAR32);
            FUN7(VAR9, VAR11->VAR33);
            FUN7(VAR9, VAR11->VAR34);
            FUN8(VAR9, (int)(VAR11->VAR35 * 10000.0));
            FUN8(VAR9, (int)(VAR11->VAR36 * 10000.0));
            FUN4(VAR9, VAR11->VAR37);
            FUN9(VAR9, VAR11->VAR38);
            FUN4(VAR9, VAR11->VAR39);
            FUN4(VAR9, VAR11->VAR40);
            FUN4(VAR9, VAR11->VAR41);
            FUN5(VAR9, FUN10(VAR11->VAR42));
            FUN5(VAR9, FUN10(VAR11->VAR43));
            FUN5(VAR9, FUN10(VAR11->VAR44));
            FUN5(VAR9, FUN10(VAR11->VAR45));
            FUN4(VAR9, VAR11->VAR46);
            FUN4(VAR9, VAR11->VAR47);
            FUN4(VAR9, VAR11->VAR48);
            FUN4(VAR9, VAR11->VAR49);
            FUN4(VAR9, VAR11->VAR50);
            FUN4(VAR9, VAR11->VAR51);
            FUN4(VAR9, VAR11->VAR52);
            FUN4(VAR9, VAR11->VAR53);
            FUN4(VAR9, VAR11->VAR54);
            FUN4(VAR9, VAR11->VAR55);
            FUN4(VAR9, VAR11->VAR56);
            FUN5(VAR9, FUN10(VAR11->VAR57));
            FUN4(VAR9, VAR11->VAR58);
            break;
        case VAR59:
            FUN4(VAR9, VAR11->VAR60);
            FUN11(VAR9, VAR11->VAR61);
            FUN11(VAR9, VAR11->VAR62);
            break;
        default:
            return -1;
        }
    }
    while ((FUN12(VAR9) % VAR4->VAR14) != 0)
        FUN7(VAR9, 0);
    FUN13(VAR9);
    VAR4->VAR63 = VAR4->VAR64;
    VAR4->VAR65 = VAR4->VAR64 + VAR4->VAR14 - VAR66;
    assert(VAR4->VAR65 >= VAR4->VAR64);
    VAR4->VAR67 = 0;
    VAR4->VAR68 = 0;
    VAR4->VAR69 = 1;
    return 0;
}