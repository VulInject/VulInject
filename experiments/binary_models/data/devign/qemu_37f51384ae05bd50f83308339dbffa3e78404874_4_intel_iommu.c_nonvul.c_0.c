static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    IOMMUTLBEntry VAR5;
    hwaddr VAR6;
    hwaddr VAR7 = VAR4->VAR7;
    hwaddr VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    if (VAR8 > FUN2(VAR10->VAR12))
    {
        VAR8 = FUN2(VAR10->VAR12);
    }
    assert(VAR7 <= VAR8);
    VAR6 = VAR8 - VAR7;
    if (FUN3(VAR6) != 1)
    {
        int VAR4 = 64 - FUN4(VAR6);
        if (VAR4 > VAR10->VAR12)
        {
            VAR4 = VAR10->VAR12;
        }
        VAR6 = 1ULL << VAR4;
    }
    VAR5.VAR13 = &VAR14;
    VAR5.VAR15 = VAR4->VAR7 & ~(VAR6 - 1);
    VAR5.VAR16 = 0;
    VAR5.VAR17 = VAR18;
    VAR5.VAR19 = VAR6 - 1;
    FUN5(FUN6(VAR2->VAR20), FUN7(VAR2->VAR21), FUN8(VAR2->VAR21), VAR5.VAR15, VAR6);
    FUN9(VAR4, &VAR5);
}