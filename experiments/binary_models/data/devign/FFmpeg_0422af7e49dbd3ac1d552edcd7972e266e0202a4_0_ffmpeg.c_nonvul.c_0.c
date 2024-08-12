static void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    AVFormatParameters VAR4, *VAR5 = &VAR4;
    VAR6 *VAR7 = NULL;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    int64_t VAR13;
    if (VAR14)
    {
        if (!(VAR7 = FUN2(VAR14)))
        {
            fprintf(VAR15, "", VAR14);
            FUN3(1);
        }
        VAR14 = NULL;
    }
    if (!strcmp(VAR1, ""))
        VAR1 = "";
    VAR16 |= !FUN4(VAR1, "", 5) || !strcmp(VAR1, "");
    VAR3 = FUN5();
    if (!VAR3)
    {
        FUN6(VAR1, FUN7(VAR17));
        FUN3(1);
    }
    memset(VAR5, 0, sizeof(*VAR5));
    VAR5->VAR18 = 1;
    VAR5->VAR19 = VAR20;
    VAR5->VAR21 = VAR22;
    VAR5->VAR23.VAR24 = VAR25.VAR26;
    VAR5->VAR23.VAR26 = VAR25.VAR24;
    VAR5->VAR27 = VAR28;
    VAR5->VAR29 = VAR30;
    VAR5->VAR31 = VAR32;
    VAR5->VAR33 = VAR34;
    VAR5->VAR35 = VAR36;
    FUN8(VAR3, VAR37, VAR38, NULL);
    VAR3->VAR39 = FUN9(VAR40, VAR41, 0, VAR42[VAR41]->VAR43);
    VAR3->VAR44 = FUN9(VAR45, VAR46, 0, VAR42[VAR46]->VAR43);
    VAR3->VAR47 = FUN9(VAR48, VAR49, 0, VAR42[VAR49]->VAR43);
    VAR3->VAR50 |= VAR51;
    VAR8 = FUN10(&VAR3, VAR1, VAR7, 0, VAR5);
    if (VAR8 < 0)
    {
        FUN6(VAR1, VAR8);
        FUN3(1);
    }
    if (VAR52)
    {
        int VAR9, VAR53;
        int VAR54 = 0;
        for (VAR9 = 0; VAR9 < VAR3->VAR55; VAR9++)
        {
            VAR3->VAR56[VAR9]->VAR57 = VAR58;
        }
        for (VAR9 = 0; VAR9 < VAR3->VAR59; VAR9++)
        {
            VAR60 *VAR61 = VAR3->VAR62[VAR9];
            if (VAR61->VAR63 != VAR52)
            {
                VAR61->VAR57 = VAR58;
            }
            else
            {
                VAR54 = 1;
                for (VAR53 = 0; VAR53 < VAR61->VAR64; VAR53++)
                {
                    VAR3->VAR56[VAR61->VAR65[VAR53]]->VAR57 = VAR66;
                }
            }
        }
        if (!VAR54)
        {
            fprintf(VAR15, "");
            FUN3(1);
        }
        VAR52 = 0;
    }
    VAR3->VAR67 = VAR67;
    VAR10 = FUN11(VAR3);
    if (VAR10 < 0 && VAR68 >= 0)
    {
        fprintf(VAR15, "", VAR1);
        FUN12(VAR3);
        FUN3(1);
    }
    VAR13 = VAR69;
    if (VAR3->VAR69 != VAR70)
        VAR13 += VAR3->VAR69;
    if (VAR69 != 0)
    {
        VAR10 = FUN13(VAR3, -1, VAR13, VAR71);
        if (VAR10 < 0)
        {
            fprintf(VAR15, "", VAR1, (double)VAR13 / VAR72);
        }
        VAR69 = 0;
    }
    for (VAR9 = 0; VAR9 < VAR3->VAR55; VAR9++)
    {
        VAR73 *VAR74 = VAR3->VAR56[VAR9];
        VAR75 *VAR76 = VAR74->VAR77;
        FUN14(VAR76, VAR78);
        VAR79 = FUN15(VAR79, sizeof(*VAR79), &VAR80, VAR80 + 1);
        switch (VAR76->VAR81)
        {
        case VAR46:
            VAR79[VAR80 - 1] = FUN16(VAR45);
            FUN8(VAR76, VAR42[VAR46], VAR82 | VAR38, VAR79[VAR80 - 1]);
            VAR83 = VAR76->VAR83;
            VAR22 = VAR76->VAR21;
            VAR20 = VAR76->VAR19;
            VAR84 = VAR76->VAR85;
            if (VAR86)
                VAR74->VAR57 = VAR58;
            if (VAR76->VAR87)
                VAR20 >>= VAR76->VAR87;
            break;
        case VAR41:
            VAR79[VAR80 - 1] = FUN16(VAR40);
            FUN8(VAR76, VAR42[VAR41], VAR88 | VAR38, VAR79[VAR80 - 1]);
            VAR30 = VAR76->VAR29;
            VAR28 = VAR76->VAR27;
            if (VAR3->VAR56[VAR9]->VAR89.VAR26)
                VAR90 = FUN17(VAR3->VAR56[VAR9]->VAR89);
            else
                VAR90 = FUN17(VAR76->VAR89);
            VAR90 *= (float)VAR76->VAR27 / VAR76->VAR29;
            VAR32 = VAR76->VAR31;
            VAR11 = VAR3->VAR56[VAR9]->VAR91.VAR26;
            VAR12 = VAR3->VAR56[VAR9]->VAR91.VAR24;
            if (VAR76->VAR87)
            {
                VAR76->VAR50 |= VAR92;
                VAR30 >>= VAR76->VAR87;
                VAR28 >>= VAR76->VAR87;
            }
            if (VAR93)
                VAR76->VAR94 |= VAR95;
            if (VAR76->VAR23.VAR24 != VAR11 * VAR76->VAR96 || VAR76->VAR23.VAR26 != VAR12)
            {
                if (VAR68 >= 0)
                    fprintf(VAR15, "", VAR9, (float)VAR76->VAR23.VAR24 / VAR76->VAR23.VAR26, VAR76->VAR23.VAR24, VAR76->VAR23.VAR26, (float)VAR11 / VAR12, VAR11, VAR12);
            }
            VAR25.VAR26 = VAR11;
            VAR25.VAR24 = VAR12;
            if (VAR97)
                VAR74->VAR57 = VAR58;
            else if (VAR98)
                VAR74->VAR57 = VAR98;
            break;
        case VAR99:
            break;
        case VAR49:
            VAR79[VAR80 - 1] = FUN16(VAR48);
            if (VAR100)
                VAR74->VAR57 = VAR58;
            break;
        case VAR101:
        case VAR102:
            break;
        default:
            FUN18();
        }
    }
    VAR103[VAR104] = VAR3;
    VAR105[VAR104] = VAR106 - (VAR107 ? 0 : VAR13);
    if (VAR68 >= 0)
        FUN19(VAR3, VAR104, VAR1, 0);
    VAR104++;
    VAR34 = 0;
    FUN20(&VAR40);
    FUN20(&VAR45);
    FUN20(&VAR48);
}