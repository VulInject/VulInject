void FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    int VAR5;
    FUN2(VAR2->VAR6, VAR7);
    VAR5 = FUN3(VAR2, VAR3, VAR4, -1);
    if (VAR5 < 0)
    {
        fprintf(VAR8, "", strerror(-VAR5));
        FUN4();
    }
}