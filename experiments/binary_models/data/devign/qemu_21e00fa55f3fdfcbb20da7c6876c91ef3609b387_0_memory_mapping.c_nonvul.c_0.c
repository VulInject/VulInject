static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    uint64_t VAR7;
    hwaddr VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    if (!FUN2(VAR4->VAR14) || FUN3(VAR4->VAR14))
    {
        return;
    }
    VAR6 = FUN4(VAR2, VAR5, VAR2);
    VAR7 = FUN5(VAR4->VAR15);
    VAR8 = VAR4->VAR16;
    VAR9 = VAR8 + VAR7;
    VAR11 = FUN6(VAR4->VAR14) + VAR4->VAR17;
    VAR13 = NULL;
    if (!FUN7(&VAR6->VAR18->VAR19))
    {
        hwaddr VAR20;
        VAR13 = FUN8(&VAR6->VAR18->VAR19, VAR21);
        VAR20 = VAR13->VAR9 - VAR13->VAR8;
        FUN9(VAR13->VAR9 <= VAR8);
        if (VAR13->VAR9 < VAR8 || VAR13->VAR11 + VAR20 != VAR11)
        {
            VAR13 = NULL;
        }
    }
    if (VAR13 == NULL)
    {
        VAR12 *VAR22 = FUN10(sizeof *VAR22);
        VAR22->VAR8 = VAR8;
        VAR22->VAR9 = VAR9;
        VAR22->VAR11 = VAR11;
        VAR22->VAR14 = VAR4->VAR14;
        FUN11(VAR4->VAR14);
        FUN12(&VAR6->VAR18->VAR19, VAR22, VAR23);
        ++VAR6->VAR18->VAR24;
    }
    else
    {
        VAR13->VAR9 = VAR9;
    }
    fprintf(VAR25, "" VAR26 "" VAR26 "", VAR27, VAR8, VAR9, VAR13 ? "" : "", VAR6->VAR18->VAR24);
}