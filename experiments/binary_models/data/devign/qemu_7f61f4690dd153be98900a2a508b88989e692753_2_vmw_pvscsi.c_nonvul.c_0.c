FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2("", VAR2->VAR4);
    FUN3("", VAR2->VAR5);
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        FUN2("", VAR2->VAR6[VAR3]);
    }
    FUN3("", VAR2->VAR7);
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        FUN2("", VAR2->VAR8[VAR3]);
    }
}