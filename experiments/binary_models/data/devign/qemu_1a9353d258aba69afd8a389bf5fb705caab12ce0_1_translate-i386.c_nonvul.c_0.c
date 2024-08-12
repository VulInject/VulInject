int FUN1(VAR1 *VAR2, int VAR3, int *VAR4, VAR1 *VAR5, int VAR6)
{
    DisasContext VAR7, *VAR8 = &VAR7;
    VAR1 *VAR9, *VAR10;
    long VAR11;
    struct disassemble_info VAR12;
    VAR8->VAR13 = (VAR6 >> VAR14) & 1;
    VAR8->VAR15 = (VAR6 >> VAR16) & 1;
    VAR8->VAR17 = (VAR6 >> VAR18) & 7;
    VAR8->VAR19 = VAR20;
    VAR21 = VAR2;
    VAR9 = VAR2 + VAR3 - 4096;
    FUN2();
    VAR8->VAR22 = 0;
    VAR10 = VAR5;
    do
    {
        VAR11 = FUN3(VAR8, VAR10);
        if (VAR11 == -1)
        {
            FUN4("", VAR10, VAR10[0], VAR10[1], VAR10[2]);
            FUN5();
        }
        VAR10 = (void *)VAR11;
    } while (!VAR8->VAR22 && VAR21 < VAR9);
    if (VAR8->VAR19 != VAR20)
        FUN6(VAR8->VAR19);
    if (VAR8->VAR22 != 1)
    {
        FUN7(VAR11);
    }
    FUN8();
    *VAR4 = VAR21 - VAR2;
    if (VAR23)
    {
        VAR1 *VAR24;
        int VAR25;
        FUN9(VAR12, VAR26, fprintf);
        VAR12.VAR27 = FUN10(VAR28);
        VAR12.VAR29 = FUN11(VAR28);
        VAR12.VAR30 = FUN12(VAR28);
        VAR12.VAR31 = VAR32;
        VAR12.VAR31 = VAR33;
        fprintf(VAR26, "");
        VAR12.VAR34 = VAR5;
        VAR12.VAR35 = (unsigned long)VAR5;
        VAR12.VAR36 = VAR10 - VAR5;
        VAR24 = VAR5;
        while (VAR24 < VAR10)
        {
            fprintf(VAR26, "", (long)VAR24);
            VAR25 = FUN13((unsigned long)VAR24, &VAR12);
            fprintf(VAR26, "");
            VAR24 += VAR25;
        }
        fprintf(VAR26, "");
        VAR24 = VAR2;
        VAR12.VAR34 = VAR24;
        VAR12.VAR35 = (unsigned long)VAR24;
        VAR12.VAR36 = *VAR4;
        fprintf(VAR26, "", *VAR4);
        while (VAR24 < VAR21)
        {
            fprintf(VAR26, "", (long)VAR24);
            VAR25 = FUN13((unsigned long)VAR24, &VAR12);
            fprintf(VAR26, "");
            VAR24 += VAR25;
        }
        fprintf(VAR26, "");
    }
    return 0;
}