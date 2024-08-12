static inline VAR1 *FUN1(struct VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR1 *VAR6, VAR7;
    int VAR8;
    if (VAR5 > 255)
    {
        fprintf(VAR9, "", VAR10, VAR5);
        FUN2(-1);
    }
    VAR8 = (VAR4 - 1) >> 3;
    VAR7 = 1 << ((VAR4 - 1) & 3);
    if (VAR7 & VAR11[VAR8] & ~VAR3->VAR12[VAR8])
        return NULL;
    VAR6 = VAR3->FUN3(VAR3->VAR13);
    VAR6[0] = VAR4;
    VAR6[1] = VAR5;
    return &VAR6[2];
}