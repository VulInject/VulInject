void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR2->VAR5 = VAR4->VAR6;
    VAR2->VAR7 = VAR4->VAR6 + 4;
    FUN3(VAR2, VAR4->VAR8 >> 32);
    VAR2->VAR9 = (VAR4->VAR8 >> 24) & 0xff;
    FUN4(VAR2, (VAR4->VAR8 >> 8) & 0xf3f);
    FUN5(VAR2, VAR4->VAR8 & 0xff);
    if (FUN6(VAR2))
    {
        uint32_t VAR10 = (VAR4->VAR8 >> 40) & 7;
        VAR2->VAR11 = VAR2->VAR12[VAR2->VAR13];
        FUN7(VAR2, VAR10);
        VAR2->VAR14 = VAR10;
    }
    VAR2->VAR13--;
    FUN8(VAR2->VAR13);
    if (FUN9(VAR2))
    {
        FUN10(VAR2);
    }