void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const int VAR5 = VAR2->VAR6;
    const int VAR7 = 1 << VAR5;
    int VAR8 = VAR2->VAR8;
    int VAR9 = VAR2->VAR9;
    int VAR10 = VAR2->VAR11.VAR10;
    int VAR12 = VAR2->VAR11.VAR12;
    const VAR13 *VAR14 = VAR2->VAR15[0]->VAR16[0] + ((VAR4 << 4) * VAR2->VAR11.VAR10) + (VAR3 << VAR5 + 1);
    const VAR13 *VAR17 = VAR2->VAR15[0]->VAR16[1] + ((VAR4 << 4) * VAR2->VAR11.VAR12) + (VAR3 << VAR5 + VAR2->VAR18);
    const VAR13 *VAR19 = VAR2->VAR15[0]->VAR16[2] + ((VAR4 << 4) * VAR2->VAR11.VAR12) + (VAR3 << VAR5 + VAR2->VAR18);
    VAR20 *VAR21 = &VAR2->VAR11.VAR21;
    VAR22 *VAR23 = &VAR2->VAR11.VAR23;
    if (VAR2->VAR24 != 10 && VAR23->VAR25 && ((VAR3 << 4) + 16 > VAR2->VAR11.VAR26->VAR27 || (VAR4 << 4) + 16 > VAR2->VAR11.VAR26->VAR28))
    {
        int VAR29 = VAR2->VAR11.VAR26->VAR27 - (VAR3 << 4);
        int VAR30 = VAR2->VAR11.VAR26->VAR28 - (VAR4 << 4);
        int VAR31 = (VAR29 + 1) / 2;
        int VAR32 = VAR30;
        VAR10 = 16;
        VAR12 = 8;
        VAR23->FUN2(&VAR2->VAR33[0], VAR14, VAR10, VAR2->VAR11.VAR10, VAR10, 16, 0, 0, VAR29, VAR30);
        VAR23->FUN2(&VAR2->VAR34[0][0], VAR17, VAR12, VAR2->VAR11.VAR12, VAR12, 16, 0, 0, VAR31, VAR32);
        VAR23->FUN2(&VAR2->VAR34[1][0], VAR19, VAR12, VAR2->VAR11.VAR12, VAR12, 16, 0, 0, VAR31, VAR32);
        VAR8 = VAR7 * VAR10;
        VAR9 = VAR7 * VAR12;
        VAR14 = &VAR2->VAR33[0];
        VAR17 = &VAR2->VAR34[0][0];
        VAR19 = &VAR2->VAR34[1][0];
    }
    else if (VAR2->VAR24 == 10 && VAR23->VAR25 && ((VAR3 << 3) + 8 > VAR2->VAR11.VAR26->VAR27 || (VAR4 << 3) + 8 > VAR2->VAR11.VAR26->VAR28))
    {
        int VAR29 = VAR2->VAR11.VAR26->VAR27 - (VAR3 << 3);
        int VAR30 = VAR2->VAR11.VAR26->VAR28 - (VAR4 << 3);
        int VAR31 = VAR2->VAR18 ? VAR29 : (VAR29 + 1) / 2;
        int VAR32 = VAR30;
        VAR10 = 16;
        VAR12 = 8 + 8 * VAR2->VAR18;
        VAR23->FUN2(&VAR2->VAR33[0], VAR14, VAR10, VAR2->VAR11.VAR10, VAR10 / 2, 16, 0, 0, VAR29, VAR30);
        VAR23->FUN2(&VAR2->VAR34[0][0], VAR17, VAR12, VAR2->VAR11.VAR12, VAR12 / 2, 16, 0, 0, VAR31, VAR32);
        VAR23->FUN2(&VAR2->VAR34[1][0], VAR19, VAR12, VAR2->VAR11.VAR12, VAR12 / 2, 16, 0, 0, VAR31, VAR32);
        VAR8 = VAR7 * VAR10;
        VAR9 = VAR7 * VAR12;
        VAR14 = &VAR2->VAR33[0];
        VAR17 = &VAR2->VAR34[0][0];
        VAR19 = &VAR2->VAR34[1][0];
    }
    if (!VAR2->VAR18)
    {
        VAR21->FUN3(VAR2->VAR35[0], VAR14, VAR10);
        VAR21->FUN3(VAR2->VAR35[1], VAR14 + VAR7, VAR10);
        VAR21->FUN3(VAR2->VAR35[2], VAR17, VAR12);
        VAR21->FUN3(VAR2->VAR35[3], VAR19, VAR12);
        if (VAR4 + 1 == VAR2->VAR11.VAR36 && VAR2->VAR11.VAR26->VAR28 == 1080)
        {
            if (VAR2->VAR37)
            {
                VAR2->FUN4(VAR2->VAR35[4], VAR14 + VAR8, VAR10);
                VAR2->FUN4(VAR2->VAR35[5], VAR14 + VAR8 + VAR7, VAR10);
                VAR2->FUN4(VAR2->VAR35[6], VAR17 + VAR9, VAR12);
                VAR2->FUN4(VAR2->VAR35[7], VAR19 + VAR9, VAR12);
            }
            else
            {
                VAR2->VAR38.FUN5(VAR2->VAR35[4]);
                VAR2->VAR38.FUN5(VAR2->VAR35[5]);
                VAR2->VAR38.FUN5(VAR2->VAR35[6]);
                VAR2->VAR38.FUN5(VAR2->VAR35[7]);
            }
        }
        else
        {
            VAR21->FUN3(VAR2->VAR35[4], VAR14 + VAR8, VAR10);
            VAR21->FUN3(VAR2->VAR35[5], VAR14 + VAR8 + VAR7, VAR10);
            VAR21->FUN3(VAR2->VAR35[6], VAR17 + VAR9, VAR12);
            VAR21->FUN3(VAR2->VAR35[7], VAR19 + VAR9, VAR12);
        }
    }
    else
    {
        VAR21->FUN3(VAR2->VAR35[0], VAR14, VAR10);
        VAR21->FUN3(VAR2->VAR35[1], VAR14 + VAR7, VAR10);
        VAR21->FUN3(VAR2->VAR35[6], VAR14 + VAR8, VAR10);
        VAR21->FUN3(VAR2->VAR35[7], VAR14 + VAR8 + VAR7, VAR10);
        VAR21->FUN3(VAR2->VAR35[2], VAR17, VAR12);
        VAR21->FUN3(VAR2->VAR35[3], VAR17 + VAR7, VAR12);
        VAR21->FUN3(VAR2->VAR35[8], VAR17 + VAR9, VAR12);
        VAR21->FUN3(VAR2->VAR35[9], VAR17 + VAR9 + VAR7, VAR12);
        VAR21->FUN3(VAR2->VAR35[4], VAR19, VAR12);
        VAR21->FUN3(VAR2->VAR35[5], VAR19 + VAR7, VAR12);
        VAR21->FUN3(VAR2->VAR35[10], VAR19 + VAR9, VAR12);
        VAR21->FUN3(VAR2->VAR35[11], VAR19 + VAR9 + VAR7, VAR12);
    }
}