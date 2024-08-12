static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6;
    VAR7 *VAR8;
    if (VAR2->VAR9)
    {
        FUN2(VAR4, VAR10);
        FUN3(VAR4, 16, 16);
        FUN4(VAR4, "");
        FUN3(VAR4, 16, 0x0201);
        FUN3(VAR4, 8, 0);
        FUN3(VAR4, 16, VAR2->VAR11->VAR12.VAR13);
        FUN3(VAR4, 16, VAR2->VAR11->VAR12.VAR14);
        FUN3(VAR4, 8, 0);
        FUN3(VAR4, 8, 0);
    }
    if (!(VAR2->VAR15 & VAR16))
    {
        FUN2(VAR4, VAR17);
        FUN5(VAR4);
        VAR8 = FUN6(VAR4);
        FUN3(VAR4, 16, 0);
        FUN4(VAR4, VAR18);
        VAR6 = strlen(VAR18) + 3;
        VAR8[0] = VAR6 >> 8;
        VAR8[1] = VAR6;
    }
}