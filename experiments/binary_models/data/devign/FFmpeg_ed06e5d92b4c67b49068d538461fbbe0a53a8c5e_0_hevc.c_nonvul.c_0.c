static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    unsigned int VAR6 = 0, VAR7 = 0;
    FUN2(VAR2);
    VAR5 = FUN3(VAR2, VAR4);
    if (VAR5 < 0)
        goto VAR8;
    VAR2->VAR9->VAR10 = VAR4->VAR11;
    VAR2->VAR9->VAR12 = VAR4->VAR13;
    VAR2->VAR9->VAR11 = VAR4->VAR14;
    VAR2->VAR9->VAR13 = VAR4->VAR15;
    VAR2->VAR9->VAR16 = VAR4->VAR16;
    VAR2->VAR9->VAR17 = VAR4->VAR18.VAR19;
    VAR2->VAR9->VAR20 = VAR4->VAR21[VAR4->VAR22 - 1].VAR23;
    if (VAR4->VAR18.VAR24)
        VAR2->VAR9->VAR25 = VAR4->VAR18.VAR26 ? VAR27 : VAR28;
    else
        VAR2->VAR9->VAR25 = VAR28;
    if (VAR4->VAR18.VAR29)
    {
        VAR2->VAR9->VAR30 = VAR4->VAR18.VAR31;
        VAR2->VAR9->VAR32 = VAR4->VAR18.VAR33;
        VAR2->VAR9->VAR34 = VAR4->VAR18.VAR35;
    }
    else
    {
        VAR2->VAR9->VAR30 = VAR36;
        VAR2->VAR9->VAR32 = VAR37;
        VAR2->VAR9->VAR34 = VAR38;
    }
    FUN4(&VAR2->VAR39, VAR4->VAR40);
    FUN5(&VAR2->VAR41, VAR4->VAR40);
    FUN6(&VAR2->VAR42, VAR4->VAR40);
    if (VAR4->VAR43)
    {
        FUN7(VAR2->VAR44);
        VAR5 = FUN8(VAR2->VAR9, VAR2->VAR44, VAR45);
        if (VAR5 < 0)
            goto VAR8;
        VAR2->VAR46 = VAR2->VAR44;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR47 = (VAR48 *)VAR2->VAR49[VAR2->VAR4->VAR50]->VAR51;
    if (VAR2->VAR47->VAR52)
    {
        VAR6 = VAR2->VAR47->VAR53;
        VAR7 = VAR2->VAR47->VAR54;
    }
    else if (VAR4->VAR18.VAR55)
    {
        VAR6 = VAR4->VAR18.VAR56;
        VAR7 = VAR4->VAR18.VAR57;
    }
    if (VAR6 != 0 && VAR7 != 0)
        FUN9(&VAR2->VAR9->VAR58.VAR6, &VAR2->VAR9->VAR58.VAR7, VAR6, VAR7, 1 << 30);
    return 0;
VAR8:
    FUN2(VAR2);
    VAR2->VAR4 = NULL;
    return VAR5;
}