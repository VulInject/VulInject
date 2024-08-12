void FUN1(const VAR1 *VAR2[3], const int VAR3[3], VAR1 *VAR4[3], const int VAR5[3], int VAR6, int VAR7, const VAR8 *VAR9, int VAR10, VAR11 *VAR12, void *VAR13, int VAR14)
{
    int VAR15 = (VAR6 + 15) >> 4;
    int VAR16 = (VAR7 + 15) >> 4;
    VAR17 *VAR18 = VAR12;
    VAR19 *VAR20 = VAR13;
    int VAR21 = FUN2(FUN3(VAR3[0]), FUN3(VAR5[0]));
    int VAR22 = FUN3(VAR10);
    if (VAR20->VAR23 < VAR21 || VAR20->VAR24 < VAR22)
        FUN4(VAR20, VAR6, VAR7, FUN2(VAR21, VAR20->VAR23), FUN2(VAR20->VAR24, VAR22));
    if (!VAR9 || (VAR18->VAR25 & VAR26))
    {
        int VAR27;
        VAR9 = VAR20->VAR28;
        VAR22 = VAR10 = 0;
        if (VAR18->VAR25 & VAR26)
            for (VAR27 = 0; VAR27 < VAR15; VAR27++)
                VAR20->VAR28[VAR27] = VAR18->VAR29;
        else
            for (VAR27 = 0; VAR27 < VAR15; VAR27++)
                VAR20->VAR28[VAR27] = 1;
    }
    if (VAR14 & VAR30)
    {
        int VAR27;
        const int VAR31 = FUN2(VAR16 * VAR22, VAR15);
        for (VAR27 = 0; VAR27 < (VAR31 >> 2); VAR27++)
        {
            ((VAR32 *)VAR20->VAR33)[VAR27] = (((const VAR32 *)VAR9)[VAR27] >> 1) & 0x7F7F7F7F;
        }
        for (VAR27 <<= 2; VAR27 < VAR31; VAR27++)
        {
            VAR20->VAR33[VAR27] = VAR9[VAR27] >> 1;
        }
        VAR9 = VAR20->VAR33;
        VAR10 = VAR22;
    }
    if (0)
    {
        int VAR34, VAR35;
        for (VAR35 = 0; VAR35 < VAR16; VAR35++)
        {
            for (VAR34 = 0; VAR34 < VAR15; VAR34++)
            {
                FUN5(VAR20, VAR36, "", VAR9[VAR34 + VAR35 * VAR10]);
            }
            FUN5(VAR20, VAR36, "");
        }
        FUN5(VAR20, VAR36, "");
    }
    if ((VAR14 & 7) != 3)
    {
        if (VAR10 >= 0)
        {
            int VAR27;
            const int VAR31 = FUN2(VAR16 * VAR10, VAR15);
            for (VAR27 = 0; VAR27 < (VAR31 >> 2); VAR27++)
            {
                ((VAR32 *)VAR20->VAR37)[VAR27] = ((const VAR32 *)VAR9)[VAR27] & 0x3F3F3F3F;
            }
            for (VAR27 <<= 2; VAR27 < VAR31; VAR27++)
            {
                VAR20->VAR37[VAR27] = VAR9[VAR27] & 0x3F;
            }
        }
        else
        {
            int VAR27, VAR38;
            for (VAR27 = 0; VAR27 < VAR16; VAR27++)
            {
                for (VAR38 = 0; VAR38 < VAR22; VAR38++)
                {
                    VAR20->VAR37[VAR27 * VAR22 + VAR38] = VAR9[VAR27 * VAR10 + VAR38] & 0x3F;
                }
            }
        }
    }
    FUN5(VAR20, VAR39, "", VAR18->VAR25, VAR18->VAR40);
    FUN6(VAR2[0], VAR3[0], VAR4[0], VAR5[0], VAR6, VAR7, VAR9, VAR10, 0, VAR18, VAR20);
    if (!(VAR2[1] && VAR2[2] && VAR4[1] && VAR4[2]))
        return;
    VAR6 = (VAR6) >> VAR20->VAR41;
    VAR7 = (VAR7) >> VAR20->VAR42;
    if (VAR18->VAR40)
    {
        FUN6(VAR2[1], VAR3[1], VAR4[1], VAR5[1], VAR6, VAR7, VAR9, VAR10, 1, VAR18, VAR20);
        FUN6(VAR2[2], VAR3[2], VAR4[2], VAR5[2], VAR6, VAR7, VAR9, VAR10, 2, VAR18, VAR20);
    }
    else if (VAR3[1] == VAR5[1] && VAR3[2] == VAR5[2])
    {
        FUN7(VAR4[1], VAR2[1], VAR7, VAR3[1]);
        FUN7(VAR4[2], VAR2[2], VAR7, VAR3[2]);
    }
    else
    {
        int VAR35;
        for (VAR35 = 0; VAR35 < VAR7; VAR35++)
        {
            memcpy(&(VAR4[1][VAR35 * VAR5[1]]), &(VAR2[1][VAR35 * VAR3[1]]), VAR6);
            memcpy(&(VAR4[2][VAR35 * VAR5[2]]), &(VAR2[2][VAR35 * VAR3[2]]), VAR6);
        }
    }
}