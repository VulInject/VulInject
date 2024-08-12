static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR7 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    int64_t VAR12 = 0;
    int VAR13;
    VAR12 = FUN2(VAR4->VAR14->VAR4);
    if (VAR12 < 0)
    {
        FUN3(VAR8, -VAR12, "");
        return VAR12;
    }
    VAR11 = FUN4(&VAR15, NULL, 0, &VAR16);
    FUN5(VAR11, VAR2, &VAR9);
    if (VAR9)
    {
        FUN6(VAR8, VAR9);
        VAR13 = -VAR17;
        goto VAR18;
    }
    VAR6->VAR19 = FUN7(VAR11, "", 0);
    if (VAR6->VAR19 > VAR12)
    {
        FUN8(VAR8, "" VAR20 ""
                         "" VAR21 "",
                   VAR6->VAR19, VAR12);
        VAR13 = -VAR17;
        goto VAR18;
    }
    if (FUN9(VAR11, "") != NULL)
    {
        VAR6->VAR22 = FUN7(VAR11, "", 0);
        VAR6->VAR23 = true;
    }
    else
    {
        VAR6->VAR23 = false;
        VAR6->VAR22 = VAR12 - VAR6->VAR19;
    }
    if ((VAR12 - VAR6->VAR19) < VAR6->VAR22)
    {
        FUN8(VAR8, "" VAR20 ""
                         "" VAR20 ""
                         "" VAR21 "",
                   VAR6->VAR19, VAR6->VAR22, VAR12);
        VAR13 = -VAR17;
        goto VAR18;
    }
    if (!FUN10(VAR6->VAR22, VAR24))
    {
        FUN8(VAR8, "", VAR24);
        VAR13 = -VAR17;
        goto VAR18;
    }
    VAR13 = 0;
VAR18:
    FUN11(VAR11);
    return VAR13;
}