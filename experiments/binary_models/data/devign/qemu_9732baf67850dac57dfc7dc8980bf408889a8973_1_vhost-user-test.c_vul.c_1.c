static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2(VAR2->VAR4);
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        close(VAR2->VAR6[VAR3]);
    }
    if (VAR2->VAR7 != -1)
    {
        close(VAR2->VAR7);
    }
    unlink(VAR2->VAR8);
    FUN3(VAR2->VAR8);
    FUN3(VAR2->VAR9);
    FUN3(VAR2);
}