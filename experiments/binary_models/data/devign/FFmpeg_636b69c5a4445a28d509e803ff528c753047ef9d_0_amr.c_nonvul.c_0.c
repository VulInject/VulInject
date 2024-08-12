static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR5 *VAR11 = VAR6;
    int VAR12 = 0;
    UWord8 VAR13, VAR14, VAR15;
    Word16 VAR16[VAR17];
    VAR18 *VAR19;
    VAR20 *VAR21;
    static Word16 VAR22[16] = {12, 13, 15, 17, 19, 20, 26, 31, 5, 0, 0, 0, 0, 0, 0, 0};
    int VAR23;
    VAR19 = VAR3;
    VAR13 = VAR11[VAR12];
    VAR14 = (VAR13 >> 2) & 0x01;
    VAR15 = (VAR13 >> 3) & 0x0F;
    VAR12++;
    VAR21 = VAR11 + VAR12;
    VAR12 += VAR22[VAR15];
    VAR9->VAR24 = FUN2(VAR14, VAR15, VAR21, &VAR9->VAR25, &VAR16[1]);
    VAR9->VAR26++;
    if (VAR9->VAR24 == VAR27)
    {
        VAR9->VAR25 = VAR9->VAR28->VAR29;
    }
    else
    {
        VAR9->VAR28->VAR29 = VAR9->VAR25;
    }
    if (VAR9->VAR30 == 1)
    {
        VAR9->VAR31 = FUN3(&VAR16[1], VAR9->VAR25);
    }
    if ((VAR9->VAR31 != 0) && (VAR9->VAR30 != 0))
    {
        for (VAR23 = 0; VAR23 < VAR32; VAR23++)
        {
            VAR19[VAR23] = VAR33;
        }
    }
    else
    {
        FUN4(VAR9->VAR28, VAR9->VAR25, &VAR16[1], VAR9->VAR24, VAR19);
    }
    *VAR4 += 160 * 2;
    VAR19 += 160;
    if (VAR9->VAR30 == 0)
    {
        VAR9->VAR31 = FUN5(&VAR16[1], VAR9->VAR25);
    }
    if (VAR9->VAR31 != 0)
    {
        FUN6(VAR9->VAR28);
    }
    VAR9->VAR30 = VAR9->VAR31;
    return VAR12;
}