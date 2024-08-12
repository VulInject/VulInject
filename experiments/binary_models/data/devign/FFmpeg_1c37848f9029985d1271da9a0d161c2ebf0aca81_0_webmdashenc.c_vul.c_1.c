static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    double VAR4 = 0.0;
    VAR5 *VAR6 = VAR2->VAR7;
    FUN2(VAR2);
    FUN3(VAR2);
    FUN4(VAR2->VAR8, ""0\"");
    FUN4(VAR2->VAR8, ""VAR9%VAR10\"", VAR4);
    if (!VAR6->VAR11)
    {
        FUN4(VAR2->VAR8, ""VAR9%VAR10\"", FUN5(VAR2));
    }
    FUN4(VAR2->VAR8, "");
    for (VAR3 = 0; VAR3 < VAR6->VAR12; VAR3++)
    {
        if (FUN6(VAR2, VAR3) < 0)
            return -1;
    }
    FUN4(VAR2->VAR8, "");
    FUN7(VAR2);
    return 0;
}