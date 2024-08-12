VAR1 *FUN1(VAR2 *VAR3, bool VAR4, VAR2 *VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8;
    VAR2 *VAR9 = FUN2(sizeof(VAR2));
    VAR2 *VAR10 = FUN2(sizeof(VAR2));
    VAR9->VAR11 = strdup(VAR3->VAR11);
    VAR9->VAR12 = VAR3->VAR12;
    VAR10->VAR11 = strdup(VAR4 ? VAR5->VAR11 : "");
    VAR10->VAR12 = VAR4 ? VAR5->VAR12 : 0;
    VAR8 = FUN3(VAR1, 1);
    VAR8->VAR13 = strdup("");
    VAR8->VAR14 = FUN3(VAR15, 1);
    VAR8->VAR14->VAR16 = strdup("");
    VAR8->VAR14->VAR17 = FUN3(VAR18, 1);
    VAR8->VAR14->VAR17->VAR19 = VAR9;
    VAR8->VAR14->VAR17->VAR11 = strdup("");
    VAR8->VAR14->VAR20 = FUN3(VAR18, 1);
    VAR8->VAR14->VAR21 = true;
    VAR8->VAR14->VAR20->VAR19 = VAR10;
    VAR8->VAR14->VAR20->VAR11 = strdup("");
    return VAR8;
}