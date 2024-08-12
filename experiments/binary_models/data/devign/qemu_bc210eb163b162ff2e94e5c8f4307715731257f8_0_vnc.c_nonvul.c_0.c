static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2->VAR4.VAR5);
    int VAR6 = FUN3(VAR2->VAR4.VAR5);
    int VAR7;
    VAR8 *VAR9;
    VAR8 *VAR10;
    int VAR11;
    VAR12 *VAR13;
    int VAR14 = 0;
    VAR15 *VAR16 = NULL;
    struct timeval VAR17 = {0, 0};
    if (!VAR2->VAR18)
    {
        FUN4(&VAR17, NULL);
        VAR14 = FUN5(VAR2, &VAR17);
    }
    VAR11 = 64;
    if (VAR11 > FUN6(VAR2))
    {
        VAR11 = FUN6(VAR2);
    }
    if (VAR2->VAR4.VAR19 != VAR20)
    {
        int VAR3 = FUN2(VAR2->VAR21);
        VAR16 = FUN7(VAR20, VAR3);
    }
    VAR9 = (VAR8 *)FUN8(VAR2->VAR4.VAR5);
    VAR10 = (VAR8 *)FUN8(VAR2->VAR21);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        if (!FUN9(VAR2->VAR4.VAR22[VAR7], VAR23))
        {
            int VAR24;
            VAR8 *VAR25;
            VAR8 *VAR26;
            if (VAR2->VAR4.VAR19 != VAR20)
            {
                FUN10(VAR16, VAR2->VAR4.VAR5, VAR3, 0, VAR7);
                VAR25 = (VAR8 *)FUN8(VAR16);
            }
            else
            {
                VAR25 = VAR9;
            }
            VAR26 = VAR10;
            for (VAR24 = 0; VAR24 + 15 < VAR3; VAR24 += 16, VAR25 += VAR11, VAR26 += VAR11)
            {
                if (!FUN11((VAR24 / 16), VAR2->VAR4.VAR22[VAR7]))
                    continue;
                if (memcmp(VAR26, VAR25, VAR11) == 0)
                    continue;
                memcpy(VAR26, VAR25, VAR11);
                if (!VAR2->VAR18)
                    FUN12(VAR2, VAR24, VAR7, &VAR17);
                FUN13(VAR13, &VAR2->VAR27, VAR28) { FUN14((VAR24 / 16), VAR13->VAR22[VAR7]); }
                VAR14++;
            }
        }
        VAR9 += FUN15(VAR2->VAR4.VAR5);
        VAR10 += FUN15(VAR2->VAR21);
    }
    FUN16(VAR16);
    return VAR14;
}