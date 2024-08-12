static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR5 *VAR10 = VAR2->VAR11[VAR12]->VAR13[VAR4] + VAR2->VAR14[VAR3];
    VAR5 *VAR15;
    int VAR16;
    int VAR17 = 0;
    int VAR18 = VAR2->VAR19[VAR3] - 1;
    int VAR20 = VAR2->VAR20;
    int VAR21;
    int VAR22;
    if (VAR2->VAR23->VAR24 >= VAR25 || (VAR2->VAR23->VAR24 >= VAR26 && !VAR2->VAR11[VAR12]->VAR27))
        VAR20 = 0;
    VAR21 = VAR2->VAR28[VAR3].VAR8 / VAR2->VAR19[VAR3];
    VAR22 = VAR2->VAR28[VAR3].VAR9 / VAR2->VAR19[VAR3];
    if (VAR3 >= 4)
    {
        VAR8 /= 2;
        VAR9 /= 2;
    }
    VAR8 += VAR21 - 2;
    VAR9 += VAR22 - 2;
    if (VAR8 < 0 || VAR8 + 12 >= VAR2->VAR29[VAR4] || VAR9 < 0 || VAR9 + 12 >= VAR2->VAR30[VAR4])
    {
        VAR2->VAR31.FUN2(VAR2->VAR32, VAR6 + VAR2->VAR14[VAR3] + (VAR22 - 2) * VAR7 + (VAR21 - 2), VAR7, 12, 12, VAR8, VAR9, VAR2->VAR29[VAR4], VAR2->VAR30[VAR4]);
        VAR15 = VAR2->VAR32;
        VAR16 = 2 + 2 * VAR7;
    }
    else if (VAR20)
    {
        VAR2->VAR33.VAR34[0][0](VAR2->VAR32, VAR6 + VAR2->VAR14[VAR3] + (VAR22 - 2) * VAR7 + (VAR21 - 2), VAR7, 12);
        VAR15 = VAR2->VAR32;
        VAR16 = 2 + 2 * VAR7;
    }
    else
    {
        VAR15 = VAR6;
        VAR16 = VAR2->VAR14[VAR3] + VAR22 * VAR7 + VAR21;
    }
    if (VAR20)
        FUN3(VAR2, VAR15, VAR7, VAR21 & 7, VAR22 & 7);
    if (VAR2->VAR28[VAR3].VAR8 & VAR18)
        VAR17 += (VAR2->VAR28[VAR3].VAR8 > 0) ? 1 : -1;
    if (VAR2->VAR28[VAR3].VAR9 & VAR18)
        VAR17 += (VAR2->VAR28[VAR3].VAR9 > 0) ? VAR7 : -VAR7;
    if (VAR17)
    {
        if (VAR2->VAR35)
            VAR2->FUN4(VAR2, VAR10, VAR15, VAR16, VAR16 + VAR17, VAR7, VAR2->VAR28[VAR3], VAR18, VAR2->VAR36, VAR3 < 4);
        else
            VAR2->VAR37.FUN5(VAR10, VAR15 + VAR16, VAR15 + VAR16 + VAR17, VAR7, 8);
    }
    else
    {
        VAR2->VAR33.VAR34[1][0](VAR10, VAR15 + VAR16, VAR7, 8);
    }
}