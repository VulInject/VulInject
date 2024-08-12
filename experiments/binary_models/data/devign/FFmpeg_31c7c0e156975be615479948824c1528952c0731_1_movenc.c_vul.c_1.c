static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    FUN2(VAR2, 24);
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    if (VAR4->VAR6->VAR7 == VAR8 || VAR4->VAR6->VAR7 == VAR9)
    {
        FUN2(VAR2, 1);
    }
    else
    {
        FUN2(VAR2, 2);
    }
    FUN2(VAR2, 0);
    FUN2(VAR2, 24);
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    FUN2(VAR2, 1);
    FUN2(VAR2, 0);
    FUN2(VAR2, 120);
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    FUN3(VAR2, "");
    FUN2(VAR2, FUN4(VAR4->VAR10 + 0x28));
    FUN2(VAR2, VAR4->VAR6->VAR11);
    if (VAR4->VAR10[5] & 2)
    {
        FUN2(VAR2, VAR4->VAR6->VAR12 / 2);
        FUN2(VAR2, 2);
        FUN2(VAR2, 0);
        FUN2(VAR2, 4);
    }
    else
    {
        FUN2(VAR2, VAR4->VAR6->VAR12);
        FUN2(VAR2, 1);
        FUN2(VAR2, 0);
        if (VAR4->VAR6->VAR12 == 1080)
            FUN2(VAR2, 5);
        else
            FUN2(VAR2, 6);
    }
    for (VAR5 = 0; VAR5 < 10; VAR5++)
        FUN5(VAR2, 0);
    FUN2(VAR2, 0);
    return 0;
}