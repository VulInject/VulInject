int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    enum pa_operation_state VAR11;
    PulseAudioDeviceList VAR12 = {0};
    int VAR13;
    VAR12.VAR4 = VAR4;
    VAR12.VAR2 = VAR2;
    if (!VAR2)
        return FUN2(VAR14);
    VAR2->VAR15 = 0;
    VAR2->VAR2 = NULL;
    if ((VAR12.VAR16 = FUN3(&VAR6, &VAR10, VAR3, "")) < 0)
        goto VAR17;
    if (VAR4)
        VAR8 = FUN4(VAR10, VAR18, &VAR12);
    else
        VAR8 = FUN5(VAR10, VAR19, &VAR12);
    while ((VAR11 = FUN6(VAR8)) == VAR20)
        FUN7(VAR6, 1, NULL);
    if (VAR11 != VAR21)
        VAR12.VAR16 = VAR22;
    FUN8(VAR8);
    if (VAR12.VAR16 < 0)
        goto VAR17;
    VAR8 = FUN9(VAR10, VAR23, &VAR12);
    while ((VAR11 = FUN6(VAR8)) == VAR20)
        FUN7(VAR6, 1, NULL);
    if (VAR11 != VAR21)
        VAR12.VAR16 = VAR22;
    FUN8(VAR8);
    if (VAR12.VAR16 < 0)
        goto VAR17;
    VAR2->VAR24 = -1;
    for (VAR13 = 0; VAR13 < VAR2->VAR15; VAR13++)
    {
        if (!strcmp(VAR2->VAR2[VAR13]->VAR25, VAR12.VAR24))
        {
            VAR2->VAR24 = VAR13;
            break;
        }
    }
VAR17:
    FUN10(VAR12.VAR24);
    FUN11(&VAR6, &VAR10);
    return VAR12.VAR16;
}