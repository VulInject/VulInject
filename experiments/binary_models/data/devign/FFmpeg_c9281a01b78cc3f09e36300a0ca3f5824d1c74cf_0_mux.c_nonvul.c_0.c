int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 0;
    VAR5 = FUN2(VAR2, VAR4);
    if (VAR5 < 0)
        goto VAR7;
    if (VAR4)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR4->VAR11];
        FUN3(VAR2, "" VAR12 "" VAR12 "", VAR4->VAR13, VAR4->VAR14, VAR4->VAR15);
        if ((VAR5 = FUN4(VAR2, VAR9, VAR4)) < 0 && !(VAR2->VAR16->VAR17 & VAR18))
            goto VAR7;
        if (VAR4->VAR14 == VAR19 && !(VAR2->VAR16->VAR17 & VAR18))
        {
            VAR5 = FUN5(VAR20);
            goto VAR7;
        }
    }
    else
    {
        FUN3(VAR2, "");
        VAR6 = 1;
    }
    for (;;)
    {
        AVPacket VAR21;
        int VAR5 = FUN6(VAR2, &VAR21, VAR4, VAR6);
        if (VAR4)
        {
            memset(VAR4, 0, sizeof(*VAR4));
            FUN7(VAR4);
            VAR4 = NULL;
        }
        if (VAR5 <= 0)
            return VAR5;
        VAR5 = FUN8(VAR2, &VAR21);
        if (VAR5 >= 0)
            VAR2->VAR10[VAR21.VAR11]->VAR22++;
        FUN9(&VAR21);
        if (VAR5 < 0)
            return VAR5;
    }
VAR7:
    FUN10(VAR4);
    return VAR5;
}