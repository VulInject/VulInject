static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR2);
    VAR7 *VAR8 = VAR6->VAR8;
    hwaddr VAR9 = VAR4->VAR9 + VAR6->VAR10;
    bool VAR11;
    void *VAR12;
    int VAR13;
    FUN3(VAR4->VAR14 == VAR15 ? "" : "", VAR9, VAR9 + VAR4->VAR16);
    if (VAR4->VAR17 != &VAR18)
    {
        FUN4(""%VAR19\"", VAR4->VAR17->VAR20 ? VAR4->VAR17->VAR20 : "");
        return;
    }
    FUN5();
    if (!FUN6(VAR4, &VAR12, &VAR11))
    {
        goto VAR21;
    }
    if ((VAR4->VAR14 & VAR22) != VAR15)
    {
        VAR13 = FUN7(VAR8, VAR9, VAR4->VAR16 + 1, VAR12, VAR11);
        if (VAR13)
        {
            FUN4("" VAR23 ""
                         "" VAR23 "",
                         VAR8, VAR9, VAR4->VAR16 + 1, VAR12, VAR13);
        }
    }
    else
    {
        VAR13 = FUN8(VAR8, VAR9, VAR4->VAR16 + 1);
        if (VAR13)
        {
            FUN4("" VAR23 ""
                         "" VAR23 "",
                         VAR8, VAR9, VAR4->VAR16 + 1, VAR13);
        }
    }
VAR21:
    FUN9();
}