static void FUN1(void)
{
    char VAR1[16384];
    int VAR2;
    VAR3 **VAR4;
    for (VAR2 = 0; VAR2 < VAR5; VAR2++)
    {
        if (!VAR6[VAR2]->VAR7)
            return;
    }
    VAR4 = FUN2(sizeof(*VAR4) * VAR5);
    if (!VAR4)
        FUN3(1);
    for (VAR2 = 0; VAR2 < VAR5; VAR2++)
        VAR4[VAR2] = VAR6[VAR2]->VAR8;
    FUN4(VAR4, VAR5, VAR1, sizeof(VAR1));
    FUN5("", VAR1);
    FUN6(VAR9);
    FUN7(&VAR4);
}