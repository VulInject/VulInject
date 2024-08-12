int FUN1(VAR1 *VAR2, int VAR3, int *VAR4, VAR1 *VAR5, VAR1 *VAR6, int VAR7)
{
    DisasContext VAR8, *VAR9 = &VAR8;
    VAR1 *VAR10;
    VAR11 *VAR12;
    int VAR13;
    long VAR14;
    struct disassemble_info VAR15;
    VAR9->VAR16 = (VAR7 >> VAR17) & 1;
    VAR9->VAR18 = (VAR7 >> VAR19) & 1;
    VAR9->VAR20 = (VAR7 >> VAR21) & 1;
    VAR9->VAR22 = (VAR7 >> VAR23) & 7;
    VAR9->VAR24 = (VAR7 >> VAR25) & 1;
    VAR9->VAR26 = VAR27;
    VAR9->VAR6 = VAR6;
    VAR28 = VAR29;
    VAR12 = VAR29 + VAR30;
    VAR31 = VAR32;
    VAR9->VAR33 = 0;
    VAR10 = VAR5;
    do
    {
        VAR14 = FUN2(VAR9, VAR10);
        if (VAR14 == -1)
        {
            if (VAR10 == VAR5)
                return -1;
            else
                break;
        }
        VAR10 = (void *)VAR14;
    } while (!VAR9->VAR33 && VAR28 < VAR12);
    if (VAR9->VAR26 != VAR27)
        FUN3(VAR9->VAR26);
    if (VAR9->VAR33 != 1)
    {
        FUN4(VAR14 - (unsigned long)VAR9->VAR6);
    }
    *VAR28 = VAR34;
    if (VAR35)
    {
        VAR1 *VAR36;
        int VAR37;
        FUN5(VAR15, VAR38, fprintf);
        VAR15.VAR39 = FUN6(VAR40);
        VAR15.VAR41 = FUN7(VAR40);
        VAR15.VAR42 = FUN8(VAR40);
        VAR15.VAR43 = VAR44;
        if (VAR9->VAR16)
            VAR15.VAR42 = VAR45;
        else
            VAR15.VAR42 = VAR46;
        fprintf(VAR38, "");
        fprintf(VAR38, "");
        VAR15.VAR47 = VAR5;
        VAR15.VAR48 = (unsigned long)VAR5;
        VAR15.VAR49 = VAR10 - VAR5;
        VAR36 = VAR5;
        while (VAR36 < VAR10)
        {
            fprintf(VAR38, "", (long)VAR36);
            VAR37 = FUN9((unsigned long)VAR36, &VAR15);
            fprintf(VAR38, "");
            VAR36 += VAR37;
        }
        fprintf(VAR38, "");
        fprintf(VAR38, "");
        FUN10(VAR29, VAR32);
        fprintf(VAR38, "");
    }
    FUN11(VAR29, VAR28 - VAR29);
    if (VAR35)
    {
        fprintf(VAR38, "");
        FUN10(VAR29, VAR32);
        fprintf(VAR38, "");
    }
    VAR13 = FUN12(VAR2, VAR29, VAR32);
    FUN13((unsigned long)VAR2, (unsigned long)(VAR2 + VAR13));
    *VAR4 = VAR13;
    if (VAR35)
    {
        VAR1 *VAR36;
        int VAR37;
        FUN5(VAR15, VAR38, fprintf);
        VAR15.VAR39 = FUN6(VAR40);
        VAR15.VAR41 = FUN7(VAR40);
        VAR15.VAR42 = FUN8(VAR40);
        VAR15.VAR43 = VAR50;
        VAR15.VAR43 = VAR44;
        VAR15.VAR42 = VAR45;
        VAR36 = VAR2;
        VAR15.VAR47 = VAR36;
        VAR15.VAR48 = (unsigned long)VAR36;
        VAR15.VAR49 = *VAR4;
        fprintf(VAR38, "", *VAR4);
        while (VAR36 < VAR2 + *VAR4)
        {
            fprintf(VAR38, "", (long)VAR36);
            VAR37 = FUN9((unsigned long)VAR36, &VAR15);
            fprintf(VAR38, "");
            VAR36 += VAR37;
        }
        fprintf(VAR38, "");
        FUN14(VAR38);
    }
    return 0;
}