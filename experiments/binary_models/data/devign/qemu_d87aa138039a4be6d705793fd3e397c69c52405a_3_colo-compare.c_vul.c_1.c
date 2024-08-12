static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    if (FUN2(VAR5))
    {
        char VAR6[20], VAR7[20], VAR8[20], VAR9[20];
        strcpy(VAR6, FUN3(VAR2->VAR10->VAR11));
        strcpy(VAR7, FUN3(VAR2->VAR10->VAR12));
        strcpy(VAR8, FUN3(VAR3->VAR10->VAR11));
        strcpy(VAR9, FUN3(VAR3->VAR10->VAR12));
        FUN4(VAR2->VAR13, VAR6, VAR7, VAR3->VAR13, VAR8, VAR9);
    }
    VAR4 = VAR2->VAR14 + VAR4;
    if (VAR2->VAR13 == VAR3->VAR13)
    {
        return memcmp(VAR2->VAR15 + VAR4, VAR3->VAR15 + VAR4, VAR3->VAR13 - VAR4);
    }
    else
    {
        FUN5("");
        return -1;
    }
}