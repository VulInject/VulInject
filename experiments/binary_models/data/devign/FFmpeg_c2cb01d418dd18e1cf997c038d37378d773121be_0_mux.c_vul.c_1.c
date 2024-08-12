int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (;;)
    {
        AVPacket VAR5;
        VAR3 = FUN2(VAR2, &VAR5, NULL, 1);
        if (VAR3 < 0)
            goto VAR6;
        if (!VAR3)
            break;
        VAR3 = VAR2->VAR7->FUN3(VAR2, &VAR5);
        if (VAR3 >= 0)
            VAR2->VAR8[VAR5.VAR9]->VAR10++;
        FUN4(&VAR5);
        if (VAR3 < 0)
            goto VAR6;
    }
    if (VAR2->VAR7->VAR11)
        VAR3 = VAR2->VAR7->FUN5(VAR2);
    if (!(VAR2->VAR7->VAR12 & VAR13))
        FUN6(VAR2->VAR14);
VAR6:
    for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
    {
        FUN7(&VAR2->VAR8[VAR4]->VAR16);
        FUN7(&VAR2->VAR8[VAR4]->VAR17);
    }
    if (VAR2->VAR7->VAR18)
        FUN8(VAR2->VAR16);
    FUN7(&VAR2->VAR16);
    return VAR3;
}