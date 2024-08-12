static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR7, VAR2, VAR2);
    VAR9 *VAR10;
    VAR3 *VAR11 = NULL;
    int VAR12;
    switch (VAR6->VAR13)
    {
    case 0x0003:
        VAR8->VAR14 = 2;
        break;
    case 0x0004:
        VAR8->VAR14 = 4;
        break;
    }
    assert(VAR8->VAR14 > 0);
    assert(VAR8->VAR14 <= VAR15);
    VAR8->VAR2.VAR16[VAR17] = VAR8->VAR18;
    VAR8->VAR2.VAR16[VAR19] = 0x01;
    FUN4(&VAR8->VAR20, FUN5(VAR8), "", 8 * VAR8->VAR14);
    FUN6(&VAR8->VAR2, 0, VAR21, &VAR8->VAR20);
    VAR8->VAR22 = FUN7(VAR23, VAR8, VAR8->VAR14);
    for (VAR12 = 0; VAR12 < VAR8->VAR14; VAR12++)
    {
        VAR10 = VAR8->VAR24 + VAR12;
        VAR10->VAR25 = 115200;
        FUN8(VAR10, &VAR11);
        if (VAR11 != NULL)
        {
            FUN9(VAR4, VAR11);
            return;
        }
        VAR10->VAR26 = VAR8->VAR22[VAR12];
        VAR8->VAR27[VAR12] = FUN10("", VAR12 + 1);
        FUN11(&VAR10->VAR28, FUN5(VAR8), &VAR29, VAR10, VAR8->VAR27[VAR12], 8);
        FUN12(&VAR8->VAR20, 8 * VAR12, &VAR10->VAR28);
    }
}