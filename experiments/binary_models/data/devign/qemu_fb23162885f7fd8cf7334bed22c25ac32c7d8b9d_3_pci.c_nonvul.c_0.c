static VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6, VAR7 *VAR8, VAR9 *VAR10, uint8_t VAR11)
{
    if (VAR6 < 0)
    {
        for (VAR6 = VAR4->VAR12; VAR6 < 256; VAR6 += 8)
        {
            if (!VAR4->VAR13[VAR6])
                goto VAR14;
        }
        return NULL;
    VAR14:;
    }
    else if (VAR4->VAR13[VAR6])
    {
        return NULL;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR6 = VAR6;
    FUN2(VAR2->VAR5, sizeof(VAR2->VAR5), VAR5);
    memset(VAR2->VAR15, 0, sizeof(VAR2->VAR15));
    FUN3(VAR2);
    VAR11 &= ~VAR16;
    if (VAR11 == VAR17)
    {
        FUN4(VAR2);
    }
    FUN5(VAR2);
    FUN6(VAR2);
    if (VAR11 == VAR18)
    {
        FUN7(VAR2);
    }
    if (!VAR8)
        VAR8 = VAR19;
    if (!VAR10)
        VAR10 = VAR20;
    VAR2->VAR8 = VAR8;
    VAR2->VAR10 = VAR10;
    VAR4->VAR13[VAR6] = VAR2;
    VAR2->VAR21 = FUN8(VAR22, VAR2, VAR23);
    VAR2->VAR24 = 2;
    return VAR2;
}