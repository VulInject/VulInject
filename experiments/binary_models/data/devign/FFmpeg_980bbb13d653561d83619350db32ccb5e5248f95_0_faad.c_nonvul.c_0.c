static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2->VAR10;
    unsigned long VAR11;
    short *VAR12 = NULL;
    unsigned long VAR13;
    int VAR14;
    faacDecFrameInfo VAR15;
    void *VAR14;
    if (VAR7 == 0)
        return 0;
    VAR14 = VAR9->FUN2(VAR9->VAR16, (unsigned char *)VAR6, &VAR11, VAR3, &VAR13);
    VAR13 *= VAR9->VAR17;
    if (VAR4)
        *VAR4 = VAR13;
    return (VAR7 < (int)VAR11) ? VAR7 : (int)VAR11;
    if (!VAR9->VAR18)
    {
        unsigned long VAR19;
        unsigned char VAR20;
        int VAR21 = VAR9->FUN3(VAR9->VAR16, VAR6, VAR7, &VAR19, &VAR20);
        if (VAR21 < 0)
        {
            FUN4(VAR2, VAR22, "", VAR9->FUN5(VAR15.VAR23));
            return -1;
        }
        VAR2->VAR24 = VAR19;
        VAR2->VAR20 = VAR20;
        VAR9->VAR18 = 1;
    }
    VAR14 = VAR9->FUN2(VAR9->VAR16, &VAR15, (unsigned char *)VAR6, (unsigned long)VAR7);
    if (VAR15.VAR23 > 0)
    {
        FUN4(VAR2, VAR22, "", VAR9->FUN5(VAR15.VAR23));
        return -1;
    }
    VAR15.VAR13 *= VAR9->VAR17;
    memcpy(VAR3, VAR14, VAR15.VAR13);
    if (VAR4)
        *VAR4 = VAR15.VAR13;
    return (VAR7 < (int)VAR15.VAR11) ? VAR7 : (int)VAR15.VAR11;
}