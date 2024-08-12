static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR12;
    VAR13 *VAR14 = FUN2(VAR4->VAR11.VAR12);
    VAR1 *VAR15;
    VAR16 *VAR17;
    VAR15 = FUN3(VAR14, VAR8);
    if (!VAR15)
    {
        return NULL;
    }
    VAR17 = FUN4(sizeof(*VAR17));
    VAR17->VAR18 = VAR10->VAR19 ? VAR10->VAR18 : 65536;
    if (VAR17->VAR18 & (VAR17->VAR18 - 1))
    {
        FUN5(VAR8, "");
        goto VAR20;
    }
    VAR17->VAR21 = 0;
    VAR17->VAR22 = 0;
    VAR17->VAR23 = FUN6(VAR17->VAR18);
    VAR15->VAR24 = VAR17;
    VAR15->VAR25 = VAR26;
    VAR15->VAR27 = VAR28;
    return VAR15;
VAR20:
    FUN7(VAR17);
    FUN8(VAR15);
    return NULL;
}