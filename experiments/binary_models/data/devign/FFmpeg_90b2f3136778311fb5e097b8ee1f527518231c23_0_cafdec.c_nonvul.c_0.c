static void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    unsigned int VAR6;
    unsigned int VAR7 = FUN2(VAR5);
    for (VAR6 = 0; VAR6 < VAR7 && !FUN3(VAR5); VAR6++)
    {
        char VAR8[32];
        char VAR9[1024];
        FUN4(VAR5, VAR10, VAR8, sizeof(VAR8));
        FUN4(VAR5, VAR10, VAR9, sizeof(VAR9));
        FUN5(&VAR2->VAR11, VAR8, VAR9, 0);
    }
}