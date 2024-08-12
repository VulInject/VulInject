void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    FUN2(*VAR7, VAR8);
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        FUN2(*(VAR2), VAR9);
        FUN3(*(VAR2 + 4), VAR9);
        VAR2 += 8;
        FUN4(VAR8, VAR9);
        FUN5(VAR9, *VAR4);
        VAR4 += VAR5;
    }
}