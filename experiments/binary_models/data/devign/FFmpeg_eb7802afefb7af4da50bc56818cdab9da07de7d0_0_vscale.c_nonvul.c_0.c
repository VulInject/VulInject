static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR4->VAR9;
    int VAR10 = VAR4->VAR11->VAR12;
    int VAR13 = VAR5 >> VAR4->VAR11->VAR14;
    int VAR15 = VAR8[0].VAR16;
    int VAR17 = VAR8[1].VAR16;
    VAR18 *VAR19 = VAR8[0].VAR20[0];
    VAR18 *VAR21 = VAR8[1].VAR20[0];
    int VAR22 = FUN2(1 - VAR15, VAR8[0].VAR23[VAR13]);
    int VAR24 = FUN2(1 - VAR17, VAR8[1].VAR23[VAR13]);
    int VAR25 = VAR22 - VAR4->VAR26->VAR27[0].VAR5;
    int VAR28 = VAR24 - VAR4->VAR26->VAR27[1].VAR5;
    int VAR29 = VAR24 - VAR4->VAR26->VAR27[2].VAR5;
    int VAR30 = VAR22 - VAR4->VAR26->VAR27[3].VAR5;
    int VAR31 = VAR5 - VAR4->VAR11->VAR27[0].VAR5;
    VAR32 **VAR33 = VAR4->VAR26->VAR27[0].VAR34 + VAR25;
    VAR32 **VAR35 = VAR4->VAR26->VAR27[1].VAR34 + VAR28;
    VAR32 **VAR36 = VAR4->VAR26->VAR27[2].VAR34 + VAR29;
    VAR32 **VAR37 = VAR4->VAR38 ? VAR4->VAR26->VAR27[3].VAR34 + VAR30 : NULL;
    VAR32 **VAR11 = VAR4->VAR11->VAR27[0].VAR34 + VAR31;
    if (VAR2->VAR39 && VAR15 == 1 && VAR17 == 1)
    {
        ((VAR40)VAR8->VAR41)(VAR2, (const VAR42 *)*VAR33, (const VAR42 **)VAR35, (const VAR42 **)VAR36, (const VAR42 *)(VAR4->VAR38 ? *VAR37 : NULL), *VAR11, VAR10, 0, VAR5);
    }
    else if (VAR2->VAR39 && VAR15 == 1 && VAR17 == 2 && VAR21[2 * VAR5 + 1] + VAR21[2 * VAR13] == 4096 && VAR21[2 * VAR5 + 1] <= 4096U)
    {
        int VAR43 = VAR21[2 * VAR5 + 1];
        ((VAR40)VAR8->VAR41)(VAR2, (const VAR42 *)*VAR33, (const VAR42 **)VAR35, (const VAR42 **)VAR36, (const VAR42 *)(VAR4->VAR38 ? *VAR37 : NULL), *VAR11, VAR10, VAR43, VAR5);
    }
    else if (VAR2->VAR44 && VAR15 == 2 && VAR17 == 2 && VAR19[2 * VAR5 + 1] + VAR19[2 * VAR5] == 4096 && VAR19[2 * VAR5 + 1] <= 4096U && VAR21[2 * VAR13 + 1] + VAR21[2 * VAR13] == 4096 && VAR21[2 * VAR13 + 1] <= 4096U)
    {
        int VAR45 = VAR19[2 * VAR5 + 1];
        int VAR43 = VAR21[2 * VAR5 + 1];
        VAR2->VAR46[2] = VAR2->VAR46[3] = VAR19[2 * VAR5] * 0x10001;
        VAR2->VAR47[2] = VAR2->VAR47[3] = VAR21[2 * VAR13] * 0x10001;
        ((VAR48)VAR8->VAR41)(VAR2, (const VAR42 **)VAR33, (const VAR42 **)VAR35, (const VAR42 **)VAR36, (const VAR42 **)VAR37, *VAR11, VAR10, VAR45, VAR43, VAR5);
    }
    else
    {
        if ((VAR2->VAR39 && VAR15 == 1 && VAR17 == 2) || (VAR2->VAR44 && VAR15 == 2 && VAR17 == 2))
        {
            if (!VAR2->VAR49)
                FUN3(VAR2, VAR50, "");
            VAR2->VAR49 = 1;
        }
        VAR8->FUN4(VAR2, VAR19 + VAR5 * VAR15, (const VAR42 **)VAR33, VAR15, VAR21 + VAR5 * VAR17, (const VAR42 **)VAR35, (const VAR42 **)VAR36, VAR17, (const VAR42 **)VAR37, *VAR11, VAR10, VAR5);
    }
    return 1;
}