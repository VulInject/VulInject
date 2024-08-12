static void FUN1(struct VAR1 *VAR2)
{
    omap_clk VAR3 = FUN2(VAR2->VAR4, "");
    omap_clk VAR5 = FUN2(VAR2->VAR4, "");
    omap_clk VAR6 = FUN2(VAR2->VAR4, "");
    int VAR7 = (VAR2->VAR8[9] >> 0) & 3;
    int VAR9, VAR10;
    VAR9 = (VAR2->VAR11[5] >> 12) & 0x3ff;
    VAR10 = (VAR2->VAR11[5] >> 8) & 0xf;
    if (VAR9 == 0 || VAR9 == 1)
        VAR7 = 1;
    VAR2->VAR12 = 0;
    switch (VAR7)
    {
    case 0:
        fprintf(VAR13, "", VAR14);
        break;
    case 1:
    case 2:
        FUN3(VAR3, 1, 1);
        FUN3(VAR5, 1, 1);
        break;
    case 3:
        VAR2->VAR12 = 1;
        FUN3(VAR3, VAR10 + 1, VAR9);
        FUN3(VAR5, VAR10 + 1, VAR9 * 2);
        break;
    }
    switch ((VAR2->VAR11[6] >> 0) & 3)
    {
    case 0:
        FUN4(VAR6, FUN2(VAR2->VAR4, ""));
        break;
    case 1:
        FUN4(VAR6, VAR3);
        break;
    case 2:
        FUN4(VAR6, VAR5);
        break;
    case 3:
        fprintf(VAR13, "", VAR14);
        break;
    }
}