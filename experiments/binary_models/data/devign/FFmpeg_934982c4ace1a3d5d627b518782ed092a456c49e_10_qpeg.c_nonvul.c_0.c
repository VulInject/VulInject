static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *const VAR12 = (VAR11 *)&VAR9->VAR13;
    VAR5 *VAR14;
    int VAR15;
    if (VAR12->VAR3[0])
        VAR2->FUN2(VAR2, VAR12);
    VAR12->VAR16 = 0;
    if (VAR2->FUN3(VAR2, VAR12) < 0)
    {
        FUN4(VAR2, VAR17, "");
        return -1;
    }
    VAR14 = VAR9->VAR13.VAR3[0];
    if (VAR6[0x85] == 0x10)
    {
        FUN5(VAR6 + 0x86, VAR14, VAR7 - 0x86, VAR9->VAR13.VAR18[0], VAR2->VAR19, VAR2->VAR20);
    }
    else
    {
        VAR15 = VAR6[0x85];
        FUN6(VAR6 + 0x86, VAR14, VAR7 - 0x86, VAR9->VAR13.VAR18[0], VAR2->VAR19, VAR2->VAR20, VAR15, VAR6 + 4, VAR9->VAR21);
    }
    memcpy(VAR9->VAR13.VAR3[1], VAR9->VAR2->VAR22->VAR23, VAR24);
    if (VAR9->VAR2->VAR22->VAR25)
    {
        VAR9->VAR13.VAR26 = 1;
        VAR9->VAR2->VAR22->VAR25 = 0;
    }
    *VAR4 = sizeof(VAR11);
    *(VAR11 *)VAR3 = VAR9->VAR13;
    return VAR7;
}