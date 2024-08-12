static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR9->VAR11 = FUN2(VAR6);
    if (!VAR9->VAR11 || VAR7 < VAR9->VAR11->VAR12)
        return -1;
    if (VAR9->VAR13.VAR3[0])
        VAR2->FUN3(VAR2, &VAR9->VAR13);
    VAR9->VAR13.VAR14 = 0;
    VAR2->VAR15 = VAR9->VAR11->VAR15;
    VAR2->VAR16 = VAR9->VAR11->VAR16;
    VAR2->VAR17 = VAR9->VAR11->VAR17;
    if (VAR2->FUN4(VAR2, &VAR9->VAR13) < 0)
    {
        FUN5(VAR2, VAR18, "");
        return -1;
    }
    VAR9->VAR13.VAR19 = 1;
    VAR9->VAR13.VAR20 = 0;
    VAR9->VAR6 = VAR6;
    VAR2->FUN6(VAR2, VAR21, (void **)&VAR22[0], NULL, VAR9->VAR11->VAR23 * 27);
    FUN7();
    *VAR4 = sizeof(VAR24);
    *(VAR24 *)VAR3 = VAR9->VAR13;
    return VAR9->VAR11->VAR12;
}