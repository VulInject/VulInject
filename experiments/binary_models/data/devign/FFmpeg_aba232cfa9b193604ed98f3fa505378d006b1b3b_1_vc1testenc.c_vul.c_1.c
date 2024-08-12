static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5[0]->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    if (VAR4->VAR9 != VAR10)
    {
        FUN2(VAR2, VAR11, "");
        return -1;
    }
    FUN3(VAR8, 0);
    FUN4(VAR8, 0xC5);
    FUN5(VAR8, 4);
    FUN6(VAR8, VAR4->VAR12, 4);
    FUN5(VAR8, VAR4->VAR13);
    FUN5(VAR8, VAR4->VAR14);
    FUN5(VAR8, 0xC);
    FUN3(VAR8, 0);
    FUN4(VAR8, 0x80);
    FUN5(VAR8, 0);
    if (VAR2->VAR5[0]->VAR15.VAR16 && VAR2->VAR5[0]->VAR15.VAR17 == 1)
        FUN5(VAR8, VAR2->VAR5[0]->VAR15.VAR16);
    else
        FUN5(VAR8, 0xFFFFFFFF);
    FUN7(VAR2->VAR5[0], 32, 1, 1000);
    return 0;
}