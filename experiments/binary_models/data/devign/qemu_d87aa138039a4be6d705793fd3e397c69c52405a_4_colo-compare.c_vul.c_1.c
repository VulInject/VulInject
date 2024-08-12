static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    FUN2("");
    if (FUN3(VAR4))
    {
        char VAR5[20], VAR6[20], VAR7[20], VAR8[20];
        strcpy(VAR5, FUN4(VAR3->VAR9->VAR10));
        strcpy(VAR6, FUN4(VAR3->VAR9->VAR11));
        strcpy(VAR7, FUN4(VAR2->VAR9->VAR10));
        strcpy(VAR8, FUN4(VAR2->VAR9->VAR11));
        FUN5(VAR3->VAR12, VAR5, VAR6, VAR2->VAR12, VAR7, VAR8);
    }
    return FUN6(VAR3, VAR2, 0);
}