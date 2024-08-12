static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = VAR4->VAR9.VAR10.VAR11.VAR8;
    int VAR12;
    VAR8[0] = 3;
    VAR8[1] = 0;
    VAR8[2] = 0;
    VAR8[3] = 0;
    VAR8[4] = 96;
    VAR8[5] = 0;
    VAR4->VAR13 = 1;
    VAR12 = VAR6->VAR14->FUN2(VAR6, VAR4->VAR15, VAR8, VAR4->VAR16);
    FUN3("", VAR4->VAR15);
    if (VAR12 < 0)
    {
        fprintf(VAR17, "");
        VAR6->VAR14->FUN4(VAR6, VAR4->VAR15);
        FUN5(VAR2, VAR4, VAR18, 0, 0);
        FUN6(VAR2, VAR4, VAR19, 0, 0);
        FUN7(VAR2, VAR4);
        return;
    }
    else if (VAR12 == 0)
    {
        return;
    }
    VAR6->VAR14->FUN8(VAR6, VAR4->VAR15);
}