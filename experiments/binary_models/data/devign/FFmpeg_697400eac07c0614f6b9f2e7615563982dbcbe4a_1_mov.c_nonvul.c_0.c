static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    unsigned VAR6, VAR7;
    void *VAR8;
    VAR7 = VAR5.VAR9 / 4;
    if (!(VAR8 = FUN2(VAR7, sizeof(int))))
        return FUN3(VAR10);
    FUN4(VAR2->VAR11);
    VAR2->VAR11 = VAR8;
    VAR2->VAR12 = VAR7;
    for (VAR6 = 0; VAR6 < VAR7 && !VAR4->VAR13; VAR6++)
        VAR2->VAR11[VAR6] = FUN5(VAR4);
    return 0;
}