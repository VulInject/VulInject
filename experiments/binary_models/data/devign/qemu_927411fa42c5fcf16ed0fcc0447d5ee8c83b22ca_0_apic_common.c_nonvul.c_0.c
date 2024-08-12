void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    if (!VAR2)
    {
        return;
    }
    VAR4 = FUN2(VAR2);
    VAR4->VAR8 = 0;
    VAR4->VAR9 = 0xff;
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0xf;
    memset(VAR4->VAR12, 0, sizeof(VAR4->VAR12));
    memset(VAR4->VAR13, 0, sizeof(VAR4->VAR13));
    memset(VAR4->VAR14, 0, sizeof(VAR4->VAR14));
    for (VAR7 = 0; VAR7 < VAR15; VAR7++)
    {
        VAR4->VAR16[VAR7] = VAR17;
    }
    VAR4->VAR18 = 0;
    memset(VAR4->VAR19, 0, sizeof(VAR4->VAR19));
    VAR4->VAR20 = 0;
    VAR4->VAR21 = 0;
    VAR4->VAR22 = 0;
    VAR4->VAR23 = 0;
    VAR4->VAR24 = 0;
    VAR4->VAR25 = !FUN3(VAR4->VAR26);
    if (VAR4->VAR27)
    {
        FUN4(VAR4->VAR27);
    }
    VAR4->VAR28 = -1;
    VAR6 = FUN5(VAR4);
    if (VAR6->VAR29)
    {
        VAR6->FUN6(VAR4);
    }
}