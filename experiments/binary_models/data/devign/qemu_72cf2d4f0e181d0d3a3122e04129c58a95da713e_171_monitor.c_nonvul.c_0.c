static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    int VAR6 = FUN2(VAR4, "");
    VAR7 *VAR8;
    for (VAR8 = VAR9.VAR10, VAR5 = 0; VAR8; VAR8 = VAR8->VAR11.VAR12, ++VAR5)
    {
        if (VAR5 == VAR6)
        {
            VAR8->VAR13.FUN3(VAR8->VAR14);
            FUN4(VAR8, VAR11);
            FUN5(VAR8);
            return;
        }
    }
}