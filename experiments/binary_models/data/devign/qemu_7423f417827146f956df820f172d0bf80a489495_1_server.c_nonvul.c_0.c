VAR1 *FUN1(VAR2 *VAR3, off_t VAR4, off_t VAR5, uint16_t VAR6, void (*close)(VAR1 *), VAR7 **VAR8)
{
    VAR1 *VAR9 = FUN2(sizeof(VAR1));
    VAR9->VAR10 = 1;
    FUN3(&VAR9->VAR11);
    VAR9->VAR3 = VAR3;
    VAR9->VAR4 = VAR4;
    VAR9->VAR6 = VAR6;
    VAR9->VAR5 = VAR5 < 0 ? FUN4(VAR3) : VAR5;
    if (VAR9->VAR5 < 0)
    {
        FUN5(VAR8, -VAR9->VAR5, "");
        goto VAR12;
    }
    VAR9->VAR5 -= VAR9->VAR5 % VAR13;
    VAR9->close = close;
    VAR9->VAR14 = FUN6(VAR3);
    FUN7(VAR3);
    FUN8(VAR3, VAR15, VAR16, VAR9);
    VAR9->VAR17.VAR18 = VAR19;
    FUN9(VAR3, &VAR9->VAR17);
    FUN10(VAR9->VAR14);
    FUN11(VAR3, NULL);
    FUN12(VAR9->VAR14);
    return VAR9;
VAR12:
    FUN13(VAR9);
    return NULL;
}