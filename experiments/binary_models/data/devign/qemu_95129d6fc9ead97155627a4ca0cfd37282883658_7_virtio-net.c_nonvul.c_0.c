static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6;
    FUN3(VAR5, FUN4(VAR3, VAR7));
    FUN5(VAR5, FUN4(VAR3, VAR8), FUN4(VAR3, VAR9));
    if (VAR5->VAR10)
    {
        VAR5->VAR11 = FUN6(VAR3);
        FUN7(VAR5);
    }
    for (VAR6 = 0; VAR6 < VAR5->VAR12; VAR6++)
    {
        VAR13 *VAR14 = FUN8(VAR5->VAR15, VAR6);
        if (!FUN9(VAR14->VAR16))
        {
            continue;
        }
        FUN10(FUN9(VAR14->VAR16), VAR3);
    }
    if (FUN4(VAR3, VAR17))
    {
        memset(VAR5->VAR18, 0, VAR19 >> 3);
    }
    else
    {
        memset(VAR5->VAR18, 0xff, VAR19 >> 3);
    }
}