static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *cin = VAR2->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    cin->VAR19.VAR20 = VAR21 | VAR22 | VAR23;
    if (VAR2->FUN2(VAR2, &cin->VAR19))
    {
        FUN3(cin->VAR2, VAR24, "");
        return -1;
    }
    VAR15 = VAR8[0];
    VAR16 = FUN4(VAR8 + 1);
    VAR17 = VAR8[3];
    VAR8 += 4;
    VAR18 = VAR9 - 4;
    if (VAR15 == 0)
    {
        for (VAR13 = 0; VAR13 < VAR16; ++VAR13)
        {
            cin->VAR25[VAR13] = FUN5(&VAR8);
            VAR18 -= 3;
        }
    }
    else
    {
        for (VAR13 = 0; VAR13 < VAR16; ++VAR13)
        {
            cin->VAR25[VAR8[0]] = FUN6(VAR8 + 1);
            VAR8 += 4;
            VAR18 -= 4;
        }
    }
    memcpy(cin->VAR19.VAR3[1], cin->VAR25, sizeof(cin->VAR25));
    cin->VAR19.VAR26 = 1;
    switch (VAR17)
    {
    case 9:
        FUN7(VAR8, VAR18, cin->VAR27[VAR28], cin->VAR29);
        break;
    case 34:
        FUN7(VAR8, VAR18, cin->VAR27[VAR28], cin->VAR29);
        FUN8(cin->VAR27[VAR30], cin->VAR27[VAR28], cin->VAR29);
        break;
    case 35:
        FUN9(VAR8, VAR18, cin->VAR27[VAR31], cin->VAR29);
        FUN7(cin->VAR27[VAR31], VAR18, cin->VAR27[VAR28], cin->VAR29);
        break;
    case 36:
        VAR18 = FUN9(VAR8, VAR18, cin->VAR27[VAR31], cin->VAR29);
        FUN7(cin->VAR27[VAR31], VAR18, cin->VAR27[VAR28], cin->VAR29);
        FUN8(cin->VAR27[VAR30], cin->VAR27[VAR28], cin->VAR29);
        break;
    case 37:
        FUN9(VAR8, VAR18, cin->VAR27[VAR28], cin->VAR29);
        break;
    case 38:
        FUN10(VAR8, VAR18, cin->VAR27[VAR28], cin->VAR29);
        break;
    case 39:
        FUN10(VAR8, VAR18, cin->VAR27[VAR28], cin->VAR29);
        FUN8(cin->VAR27[VAR30], cin->VAR27[VAR28], cin->VAR29);
        break;
    }
    for (VAR14 = 0; VAR14 < cin->VAR2->VAR32; ++VAR14)
        memcpy(cin->VAR19.VAR3[0] + (cin->VAR2->VAR32 - 1 - VAR14) * cin->VAR19.VAR33[0], cin->VAR27[VAR28] + VAR14 * cin->VAR2->VAR34, cin->VAR2->VAR34);
    FUN11(VAR7 *, cin->VAR27[VAR28], cin->VAR27[VAR30]);
    *VAR4 = sizeof(VAR35);
    *(VAR35 *)VAR3 = cin->VAR19;
    return VAR9;