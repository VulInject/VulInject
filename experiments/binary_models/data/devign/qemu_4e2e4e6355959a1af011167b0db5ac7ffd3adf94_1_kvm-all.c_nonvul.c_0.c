static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR3 = FUN2(VAR2, VAR4);
    if (VAR3 > 0)
    {
        unsigned int VAR5, VAR6;
        VAR5 = FUN3(VAR3, 32);
        VAR2->VAR7 = FUN4(VAR5 / 8);
        VAR2->VAR3 = VAR3;
        for (VAR6 = VAR3; VAR6 < VAR5; VAR6++)
        {
            FUN5(VAR2, VAR6);
        }
    }
    VAR2->VAR8 = FUN4(sizeof(*VAR2->VAR8));
    VAR2->VAR9 = 0;
    FUN6(VAR2);
}