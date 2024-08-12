static void FUN1(struct VAR1 *VAR2, int64_t VAR3)
{
    HANDLE VAR4 = VAR2->VAR5;
    int VAR6;
    BOOLEAN VAR7;
    VAR6 = (VAR3 + 999999) / 1000000;
    if (VAR6 < 1)
    {
        VAR6 = 1;
    }
    VAR7 = FUN2(NULL, VAR4, VAR6, 3600000);
    if (!VAR7)
    {
        fprintf(VAR8, "", FUN3());
        FUN4(-1);
    }
}