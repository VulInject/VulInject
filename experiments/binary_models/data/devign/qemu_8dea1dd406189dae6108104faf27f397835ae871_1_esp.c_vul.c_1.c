static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    uint32_t VAR6;
    int VAR7;
    VAR6 = VAR3->VAR8[VAR9] | (VAR3->VAR8[VAR10] << 8);
    VAR7 = VAR3->VAR11[VAR12] & 7;
    FUN2("", VAR6, VAR7);
    if (VAR3->VAR13)
    {
        VAR3->FUN3(VAR3->VAR14, VAR5, VAR6);
    }
    else
    {
        VAR5[0] = 0;
        memcpy(&VAR5[1], VAR3->VAR15, VAR6);
        VAR6++;
    }
    VAR3->VAR16 = 0;
    VAR3->VAR17 = 0;
    VAR3->VAR18 = 0;
    if (VAR3->VAR19)
    {
        VAR3->VAR19->FUN4(VAR3->VAR19, 0);
        VAR3->VAR20 = 0;
    }
    if (VAR7 >= VAR21 || !VAR3->VAR22[VAR7])
    {
        VAR3->VAR8[VAR23] = 0;
        VAR3->VAR8[VAR24] = VAR25;
        VAR3->VAR8[VAR26] = VAR27;
        FUN5(VAR3);
        return 0;
    }
    VAR3->VAR19 = VAR3->VAR22[VAR7];
    return VAR6;
}