static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR4->VAR5 = 0x01000048;
    VAR4->VAR6 = 0x0007feff;
    VAR4->VAR7 = 0x00011122;
    if (VAR4->VAR8 >= 256)
    {
        VAR9[31] = 64;
        VAR4->VAR7 |= 0x10;
    }
    else if (VAR4->VAR8 >= 128)
    {
        VAR9[31] = 32;
        VAR4->VAR7 |= 0x0c;
    }
    else if (VAR4->VAR8 >= 64)
    {
        VAR9[31] = 16;
        VAR4->VAR7 |= 0x08;
    }
    else if (VAR4->VAR8 >= 32)
    {
        VAR9[31] = 4;
        VAR4->VAR7 |= 0x04;
    }
    else
    {
        VAR9[31] = 2;
    }
    memcpy(VAR9 + 73, "", 11);
    VAR4->VAR10 = 0x00000112;
    VAR4->VAR11 = FUN3(FUN4(VAR12), 24, 1000);
    FUN5(&VAR4->VAR13, FUN6(VAR4), "", 0x100000, &VAR14);
    FUN7(&VAR4->VAR13);
    FUN8(&VAR4->VAR15, FUN6(VAR4), &VAR16, VAR4, "", 0x00800000);
    FUN9(VAR2, &VAR4->VAR15);
    FUN10(VAR4);
    return 0;
}