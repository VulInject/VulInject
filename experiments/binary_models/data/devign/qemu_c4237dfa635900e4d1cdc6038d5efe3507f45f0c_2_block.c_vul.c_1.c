static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int64_t VAR8 = VAR4->VAR8;
    int64_t VAR9;
    int VAR10;
    int VAR11 = -VAR12;
    for (VAR9 = VAR4->VAR13; VAR9 < VAR4->VAR8;)
    {
        FUN2();
        if (FUN3(VAR4, VAR9))
        {
            FUN4();
            FUN5();
        }
        else
        {
            FUN4();
        }
        if (FUN6(VAR4->VAR14, VAR4->VAR15, VAR9))
        {
            if (VAR8 - VAR9 < VAR16)
            {
                VAR10 = VAR8 - VAR9;
            }
            else
            {
                VAR10 = VAR16;
            }
            VAR7 = FUN7(VAR6, 1);
            VAR7->VAR17 = FUN8(VAR18);
            VAR7->VAR4 = VAR4;
            VAR7->VAR9 = VAR9;
            VAR7->VAR10 = VAR10;
            if (VAR5)
            {
                VAR7->VAR19.VAR20 = VAR7->VAR17;
                VAR7->VAR19.VAR21 = VAR10 * VAR22;
                FUN9(&VAR7->VAR23, &VAR7->VAR19, 1);
                VAR7->VAR24 = FUN10(VAR4->VAR14, VAR9, &VAR7->VAR23, VAR10, VAR25, VAR7);
                FUN2();
                VAR26.VAR27++;
                FUN11(VAR4, VAR9, VAR10, 1);
                FUN4();
            }
            else
            {
                VAR11 = FUN12(VAR4->VAR14, VAR9, VAR7->VAR17, VAR10);
                if (VAR11 < 0)
                {
                    goto VAR28;
                }
                FUN13(VAR2, VAR7);
                FUN14(VAR7->VAR17);
                FUN14(VAR7);
            }
            FUN15(VAR4->VAR14, VAR9, VAR10);
            break;
        }
        VAR9 += VAR16;
        VAR4->VAR13 = VAR9;
    }
    return (VAR4->VAR13 >= VAR4->VAR8);
VAR28:
    FUN16("" VAR29 "", VAR9);
    FUN14(VAR7->VAR17);
    FUN14(VAR7);
    return VAR11;
}