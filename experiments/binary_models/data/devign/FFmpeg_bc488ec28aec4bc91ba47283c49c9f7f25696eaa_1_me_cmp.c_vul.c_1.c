static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, ptrdiff_t VAR6, int VAR7)
{
    const VAR3 *VAR8 = VAR2->VAR9.VAR10;
    FUN2(VAR11, VAR12, [64]);
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    const int VAR19 = VAR2->VAR20;
    VAR3 *VAR21, *VAR22;
    FUN3(VAR7 == 8);
    VAR2->VAR23.FUN4(VAR12, VAR4, VAR5, VAR6);
    VAR2->VAR24[0] = VAR14 = VAR2->FUN5(VAR2, VAR12, 0, VAR2->VAR25, &VAR13);
    VAR16 = 0;
    if (VAR2->VAR26)
    {
        VAR18 = 1;
        VAR21 = VAR2->VAR27;
        VAR22 = VAR2->VAR28;
        VAR16 += VAR2->VAR29[VAR12[0] + 256];
    }
    else
    {
        VAR18 = 0;
        VAR21 = VAR2->VAR30;
        VAR22 = VAR2->VAR31;
    }
    if (VAR14 >= VAR18)
    {
        VAR15 = 0;
        for (VAR13 = VAR18; VAR13 < VAR14; VAR13++)
        {
            int VAR32 = VAR8[VAR13];
            VAR17 = VAR12[VAR32];
            if (VAR17)
            {
                VAR17 += 64;
                if ((VAR17 & (~127)) == 0)
                    VAR16 += VAR21[FUN6(VAR15, VAR17)];
                else
                    VAR16 += VAR19;
                VAR15 = 0;
            }
            else
                VAR15++;
        }
        VAR13 = VAR8[VAR14];
        VAR17 = VAR12[VAR13] + 64;
        FUN3(VAR17 - 64);
        if ((VAR17 & (~127)) == 0)
            VAR16 += VAR22[FUN6(VAR15, VAR17)];
        else
            VAR16 += VAR19;
    }
    return VAR16;
}