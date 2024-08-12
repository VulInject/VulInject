static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7 = 0;
    char VAR8[16] = {0};
    do
    {
        VAR5 = FUN2(VAR2);
        VAR6 = FUN2(VAR2);
        FUN3(NULL, "", VAR5);
        if (VAR7 < 16)
        {
            VAR8[VAR7++] = VAR5;
            VAR8[VAR7++] = VAR6;
        }
    } while (VAR5 != 0);
    FUN4(VAR8, &VAR4->VAR9);
}