static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR3 *VAR9 = VAR4 + VAR5;
    int VAR10, VAR11;
    int av_unused VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19;
    if (VAR5 < 10)
        VAR10 = *VAR4++;
    VAR14 = FUN2(VAR7, VAR10);
    if (!VAR14)
    {
        VAR14 = FUN3(sizeof(VAR13));
        VAR14->VAR20 = VAR10;
        VAR14->VAR12 = -1;
        VAR14->VAR21 = VAR7->VAR22;
        VAR7->VAR22 = VAR14;
    }
    VAR12 = ((*VAR4) >> 4) & 15;
    VAR19 = ((*VAR4++) >> 3) & 1;
    VAR14->VAR23 = FUN4(VAR4);
    VAR4 += 2;
    VAR14->VAR24 = FUN4(VAR4);
    VAR4 += 2;
    if (VAR14->VAR23 * VAR14->VAR24 != VAR14->VAR5)
    {
        FUN5(VAR14->VAR25);
        VAR14->VAR5 = VAR14->VAR23 * VAR14->VAR24;
        VAR14->VAR25 = FUN6(VAR14->VAR5);
        VAR19 = 1;
        VAR14->VAR26 = 0;
    }
    VAR14->VAR27 = 1 << (((*VAR4++) >> 2) & 7);
    if (VAR14->VAR27 < 2 || VAR14->VAR27 > 8)
    {
        FUN7(VAR2, VAR28, "", VAR14->VAR27);
        VAR14->VAR27 = 4;
    }
    VAR14->VAR29 = *VAR4++;
    if (VAR14->VAR27 == 8)
    {
        VAR14->VAR30 = *VAR4++;
        VAR4 += 1;
    }
    else
    {
        VAR4 += 1;
        if (VAR14->VAR27 == 4)
            VAR14->VAR30 = (((*VAR4++) >> 4) & 15);
        else
            VAR14->VAR30 = (((*VAR4++) >> 2) & 3);
    }
    FUN8(VAR2, "", VAR10, VAR14->VAR23, VAR14->VAR24);
    if (VAR19)
    {
        memset(VAR14->VAR25, VAR14->VAR30, VAR14->VAR5);
        FUN8(VAR2, "", VAR14->VAR30);
    }
    FUN9(VAR7, VAR14);
    while (VAR4 + 5 < VAR9)
    {
        VAR11 = FUN4(VAR4);
        VAR4 += 2;
        VAR16 = FUN10(VAR7, VAR11);
        if (!VAR16)
        {
            VAR16 = FUN3(sizeof(VAR15));
            VAR16->VAR20 = VAR11;
            VAR16->VAR21 = VAR7->VAR31;
            VAR7->VAR31 = VAR16;
        }
        VAR16->VAR32 = (*VAR4) >> 6;
        VAR18 = FUN3(sizeof(VAR17));
        VAR18->VAR11 = VAR11;
        VAR18->VAR10 = VAR10;
        VAR18->VAR33 = FUN4(VAR4) & 0xfff;
        VAR4 += 2;
        VAR18->VAR34 = FUN4(VAR4) & 0xfff;
        VAR4 += 2;
        if ((VAR16->VAR32 == 1 || VAR16->VAR32 == 2) && VAR4 + 1 < VAR9)
        {
            VAR18->VAR35 = *VAR4++;
            VAR18->VAR30 = *VAR4++;
        }
        VAR18->VAR36 = VAR14->VAR37;
        VAR14->VAR37 = VAR18;
        VAR18->VAR38 = VAR16->VAR37;
        VAR16->VAR37 = VAR18;
    }