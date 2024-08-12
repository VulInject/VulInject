static VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR3->VAR7;
    int VAR8 = VAR7->VAR9;
    ssize_t VAR10;
    VAR7->VAR11 = FUN2();
    if (FUN3(VAR8, VAR5) < 0)
    {
        VAR10 = -VAR12;
        goto VAR13;
    }
    if (VAR5->VAR14 > VAR15)
    {
        FUN4("", VAR5->VAR14, VAR15);
        VAR10 = -VAR16;
        goto VAR13;
    }
    if ((VAR5->VAR17 + VAR5->VAR14) < VAR5->VAR17)
    {
        FUN4(""
            "");
        VAR10 = -VAR16;
        goto VAR13;
    }
    FUN5("");
    if ((VAR5->VAR18 & VAR19) == VAR20)
    {
        FUN5("", VAR5->VAR14);
        if (FUN6(VAR8, VAR3->VAR21, VAR5->VAR14) != VAR5->VAR14)
        {
            FUN4("");
            VAR10 = -VAR12;
            goto VAR13;
        }
    }
    VAR10 = 0;
VAR13:
    VAR7->VAR11 = NULL;
    return VAR10;
}