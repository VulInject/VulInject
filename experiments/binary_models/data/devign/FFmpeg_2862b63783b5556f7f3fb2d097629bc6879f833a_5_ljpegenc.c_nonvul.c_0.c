static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const int VAR10 = VAR6->VAR10;
    const int VAR11 = VAR6->VAR11;
    const int VAR12 = VAR6->VAR12[0];
    FUN2(*VAR13)[4] = VAR8->VAR14;
    int VAR15[3], VAR16[3], VAR17[3];
    int VAR18, VAR19, VAR20;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR21) VAR8->VAR22 = VAR2->VAR21 + 1;
    FF_ENABLE_DEPRECATION_WARNINGS for (VAR20 = 0; VAR20 < 3; VAR20++) VAR13[0][VAR20] = 1 << (9 - 1);
    for (VAR19 = 0; VAR19 < VAR11; VAR19++)
    {
        const int VAR23 = VAR19 ? VAR8->VAR22 : 1;
        VAR24 *VAR25 = VAR6->VAR26[0] + (VAR12 * VAR19);
        if (VAR4->VAR27 - VAR4->VAR28 - (FUN3(VAR4) >> 3) < VAR10 * 3 * 3)
        {
            FUN4(VAR2, VAR29, "");
            return -1;
        }
        for (VAR20 = 0; VAR20 < 3; VAR20++)
            VAR16[VAR20] = VAR15[VAR20] = VAR17[VAR20] = VAR13[0][VAR20];
        for (VAR18 = 0; VAR18 < VAR10; VAR18++)
        {
            VAR13[VAR18][1] = VAR25[3 * VAR18 + 0] - VAR25[3 * VAR18 + 1] + 0x100;
            VAR13[VAR18][2] = VAR25[3 * VAR18 + 2] - VAR25[3 * VAR18 + 1] + 0x100;
            VAR13[VAR18][0] = (VAR25[3 * VAR18 + 0] + 2 * VAR25[3 * VAR18 + 1] + VAR25[3 * VAR18 + 2]) >> 2;
            for (VAR20 = 0; VAR20 < 3; VAR20++)
            {
                int VAR22, VAR30;
                FUN5(VAR22, VAR17[VAR20], VAR16[VAR20], VAR15[VAR20], VAR23);
                VAR17[VAR20] = VAR16[VAR20];
                VAR16[VAR20] = VAR13[VAR18 + 1][VAR20];
                VAR15[VAR20] = VAR13[VAR18][VAR20];
                VAR30 = ((VAR15[VAR20] - VAR22 + 0x100) & 0x1FF) - 0x100;
                if (VAR20 == 0)
                    FUN6(VAR4, VAR30, VAR8->VAR31, VAR8->VAR32);
                else
                    FUN6(VAR4, VAR30, VAR8->VAR33, VAR8->VAR34);
            }
        }
    }
    return 0;
}