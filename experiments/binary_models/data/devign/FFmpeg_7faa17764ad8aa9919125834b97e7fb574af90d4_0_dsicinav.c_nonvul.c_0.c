static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *cin = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19 = 0;
    VAR15 = VAR8[0];
    VAR16 = FUN2(VAR8 + 1);
    VAR17 = VAR8[3];
    VAR8 += 4;
    VAR18 = VAR9 - 4;
    if (VAR18 < VAR16 * (3 + (VAR15 != 0)))
        return VAR20;
    if (VAR15 == 0)
    {
        if (VAR16 > 256)
            return VAR20;
        for (VAR13 = 0; VAR13 < VAR16; ++VAR13)
        {
            cin->VAR21[VAR13] = 0xFFU << 24 | FUN3(&VAR8);
            VAR18 -= 3;
        }
    }
    else
    {
        for (VAR13 = 0; VAR13 < VAR16; ++VAR13)
        {
            cin->VAR21[VAR8[0]] = 0xFFU << 24 | FUN4(VAR8 + 1);
            VAR8 += 4;
            VAR18 -= 4;
        }
    }
    switch (VAR17)
    {
    case 9:
        FUN5(VAR8, VAR18, cin->VAR22[VAR23], cin->VAR24);
        break;
    case 34:
        FUN5(VAR8, VAR18, cin->VAR22[VAR23], cin->VAR24);
        FUN6(cin->VAR22[VAR25], cin->VAR22[VAR23], cin->VAR24);
        break;
    case 35:
        VAR18 = FUN7(VAR8, VAR18, cin->VAR22[VAR26], cin->VAR24);
        FUN5(cin->VAR22[VAR26], VAR18, cin->VAR22[VAR23], cin->VAR24);
        break;
    case 36:
        VAR18 = FUN7(VAR8, VAR18, cin->VAR22[VAR26], cin->VAR24);
        FUN5(cin->VAR22[VAR26], VAR18, cin->VAR22[VAR23], cin->VAR24);
        FUN6(cin->VAR22[VAR25], cin->VAR22[VAR23], cin->VAR24);
        break;
    case 37:
        FUN7(VAR8, VAR18, cin->VAR22[VAR23], cin->VAR24);
        break;
    case 38:
        VAR19 = FUN8(VAR8, VAR18, cin->VAR22[VAR23], cin->VAR24);
        if (VAR19 < 0)
            return VAR19;
        break;
    case 39:
        VAR19 = FUN8(VAR8, VAR18, cin->VAR22[VAR23], cin->VAR24);
        if (VAR19 < 0)
            return VAR19;
        FUN6(cin->VAR22[VAR25], cin->VAR22[VAR23], cin->VAR24);
        break;
    }
    cin->VAR27.VAR28 = VAR29 | VAR30 | VAR31;
    if ((VAR19 = VAR2->FUN9(VAR2, &cin->VAR27)))
    {
        FUN10(cin->VAR2, VAR32, "");
        return VAR19;
    }
    memcpy(cin->VAR27.VAR3[1], cin->VAR21, sizeof(cin->VAR21));
    cin->VAR27.VAR33 = 1;
    for (VAR14 = 0; VAR14 < cin->VAR2->VAR34; ++VAR14)
        memcpy(cin->VAR27.VAR3[0] + (cin->VAR2->VAR34 - 1 - VAR14) * cin->VAR27.VAR35[0], cin->VAR22[VAR23] + VAR14 * cin->VAR2->VAR36, cin->VAR2->VAR36);
    FUN11(VAR7 *, cin->VAR22[VAR23], cin->VAR22[VAR25]);
    *VAR4 = sizeof(VAR37);
    *(VAR37 *)VAR3 = cin->VAR27;
    return VAR9;
}