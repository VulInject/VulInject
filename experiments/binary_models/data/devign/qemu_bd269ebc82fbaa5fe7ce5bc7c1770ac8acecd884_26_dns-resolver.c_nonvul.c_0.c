static void FUN1(gpointer VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    size_t VAR4;
    FUN2(VAR3->VAR5);
    for (VAR4 = 0; VAR4 < VAR3->VAR6; VAR4++)
    {
        FUN2(VAR3->VAR7[VAR4]);
    }
    FUN3(VAR3->VAR7);
    FUN3(VAR3);
}