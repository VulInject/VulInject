static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 1, VAR6;
    int64_t VAR7, VAR8 = 0;
    int VAR9;
    for (VAR6 = 0; VAR6 < VAR4->VAR10; VAR6++)
    {
        if (VAR4->VAR11[VAR6].VAR12 > 0 && VAR4->VAR11[VAR6].VAR13)
        {
            VAR7 = FUN2(VAR4->VAR11[VAR6].VAR14, VAR15, VAR4->VAR11[VAR6].VAR13, VAR16);
            if (VAR8 < VAR7)
                VAR8 = VAR7;
            if (VAR5 < VAR4->VAR11[VAR6].VAR17)
                VAR5 = VAR4->VAR11[VAR6].VAR17;
        }
    }
    VAR9 = VAR8 < VAR18 ? 0 : 1;
    (VAR9 == 1) ? FUN3(VAR2, 120) : FUN3(VAR2, 108);
    FUN4(VAR2, "");
    FUN5(VAR2, VAR9);
    FUN6(VAR2, 0);
    if (VAR9 == 1)
    {
        FUN7(VAR2, VAR4->VAR19);
        FUN7(VAR2, VAR4->VAR19);
    }
    else
    {
        FUN3(VAR2, VAR4->VAR19);
        FUN3(VAR2, VAR4->VAR19);
    }
    FUN3(VAR2, VAR15);
    (VAR9 == 1) ? FUN7(VAR2, VAR8) : FUN3(VAR2, VAR8);
    FUN3(VAR2, 0x00010000);
    FUN8(VAR2, 0x0100);
    FUN8(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0x00010000);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x00010000);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x0);
    FUN3(VAR2, 0x40000000);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, 0);
    FUN3(VAR2, VAR5 + 1);
    return 0x6c;
}