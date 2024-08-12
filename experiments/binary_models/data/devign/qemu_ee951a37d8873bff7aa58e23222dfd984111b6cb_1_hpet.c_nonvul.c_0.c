static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2);
    int VAR5, VAR6;
    VAR7 *VAR8;
    if (VAR9.VAR10 == VAR11)
    {
        VAR9.VAR10 = 0;
    }
    if (VAR9.VAR10 == 8)
    {
        fprintf(VAR12, "");
        return -1;
    }
    VAR4->VAR13 = VAR9.VAR10++;
    for (VAR5 = 0; VAR5 < VAR14; VAR5++)
    {
        FUN3(VAR2, &VAR4->VAR15[VAR5]);
    }
    if (VAR4->VAR16 < VAR17)
    {
        VAR4->VAR16 = VAR17;
    }
    else if (VAR4->VAR16 > VAR18)
    {
        VAR4->VAR16 = VAR18;
    }
    for (VAR5 = 0; VAR5 < VAR18; VAR5++)
    {
        VAR8 = &VAR4->VAR8[VAR5];
        VAR8->VAR19 = FUN4(VAR20, VAR21, VAR8);
        VAR8->VAR22 = VAR5;
        VAR8->VAR23 = VAR4;
    }
    VAR4->VAR24 = 0x8086a001ULL;
    VAR4->VAR24 |= (VAR4->VAR16 - 1) << VAR25;
    VAR4->VAR24 |= ((VAR26) << 32);
    FUN5(&VAR2->VAR27, VAR28, 1);
    VAR6 = FUN6(VAR29, VAR30, VAR4, VAR31);
    FUN7(VAR2, 0x400, VAR6);
    return 0;
}