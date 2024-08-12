static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    unsigned char *VAR11;
    const unsigned char *VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    const char *VAR20;
    if (VAR7->VAR21 >= VAR7->VAR22->VAR23)
        return VAR24;
    VAR13 = VAR7->VAR21++;
    if (VAR5)
        return 0;
    VAR4->VAR25 = VAR13;
    VAR4->VAR26 = VAR13;
    VAR4->VAR27 = 1;
    if (FUN2(VAR7->VAR22))
    {
        VAR19 = 24;
    }
    else if (FUN3(VAR7->VAR22))
    {
        VAR19 = 16;
    }
    else if (FUN4(VAR7->VAR22))
    {
        VAR19 = 12;
    }
    else if (FUN5(VAR7->VAR22))
    {
        VAR19 = 8;
        VAR19 = FUN6(VAR7->VAR22);
        VAR4->VAR28 = (((VAR29)VAR7->VAR22->VAR30 * (VAR29)VAR7->VAR22->VAR31) * VAR19) / 8;
        if (!VAR4->VAR28)
            VAR4->VAR32 = FUN7(VAR4->VAR28);
        if (!VAR4->VAR32)
            VAR10 = VAR33->FUN8(VAR7->VAR34, VAR13);
        VAR20 = VAR33->FUN9(VAR7->VAR34);
        if (VAR20)
        {
            FUN10(VAR2, VAR35, "", VAR20);
            VAR11 = VAR4->VAR32;
            for (VAR14 = 0; VAR14 < VAR7->VAR36; VAR14++)
            {
                VAR15 = VAR7->VAR37[VAR14];
                VAR12 = FUN11(VAR10, VAR15);
                VAR16 = FUN12(VAR10, VAR15);
                VAR17 = FUN13(VAR10, VAR15);
                VAR18 = FUN14(VAR10, VAR15);
                if (FUN15(VAR7->VAR22) || FUN16(VAR7->VAR22))
                {
                    VAR12 = VAR12 + (VAR17 - 1) * VAR18;
                    VAR18 = -VAR18;
                    VAR11 += VAR16 * VAR17;
                    VAR33->FUN17(VAR10);
                    return 0;