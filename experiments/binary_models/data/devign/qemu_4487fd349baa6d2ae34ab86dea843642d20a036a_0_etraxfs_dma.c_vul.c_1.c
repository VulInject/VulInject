static void FUN1(struct VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    uint32_t VAR5;
    unsigned char VAR6[2 * 1024];
    if (VAR2->VAR7[VAR3].VAR8 == 1)
        return;
    VAR5 = FUN2(VAR2, VAR3, VAR9);
    FUN3(fprintf(VAR10, "", VAR3, (VAR11)VAR2->VAR7[VAR3].VAR12.VAR6, (VAR11)VAR2->VAR7[VAR3].VAR12.VAR13, VAR5));
    VAR4 = (VAR11)(unsigned long)VAR2->VAR7[VAR3].VAR12.VAR13;
    VAR4 -= VAR5;
    if (VAR4 > sizeof VAR6)
        VAR4 = sizeof VAR6;
    FUN4(VAR5, VAR6, VAR4);
    FUN3(FUN5("", VAR3, VAR5, VAR4));
    if (VAR2->VAR7[VAR3].VAR14->VAR14.VAR15)
        VAR2->VAR7[VAR3].VAR14->VAR14.FUN6(VAR2->VAR7[VAR3].VAR14->VAR14.VAR16, VAR6, VAR4);
    else
        FUN5("", VAR3);
    VAR5 += VAR4;
    if (VAR5 == (VAR11)(unsigned long)VAR2->VAR7[VAR3].VAR12.VAR13)
    {
        if (VAR2->VAR7[VAR3].VAR12.VAR17)
        {
            FUN3(FUN5(""));
        }
        if (VAR2->VAR7[VAR3].VAR12.VAR18)
        {
            FUN3(FUN5(""));
            VAR2->VAR7[VAR3].VAR19[VAR20] |= (1 << 2);
            FUN7(VAR2, VAR3);
        }
        if (VAR2->VAR7[VAR3].VAR12.VAR8)
        {
            FUN3(FUN5("", VAR3));
            VAR2->VAR7[VAR3].VAR8 = 1;
            VAR2->VAR7[VAR3].VAR21.VAR22 = 1;
            FUN8(VAR2, VAR3);
            FUN9(VAR2, VAR3);
        }
        else
        {
            VAR2->VAR7[VAR3].VAR19[VAR23] = (VAR11)(unsigned long)VAR2->VAR7[VAR3].VAR12.VAR24;
            FUN10(VAR2, VAR3);
            VAR5 = (VAR11)(unsigned long)VAR2->VAR7[VAR3].VAR12.VAR6;
        }
        FUN11(VAR2, VAR3);
        VAR2->VAR7[VAR3].VAR19[VAR9] = VAR5;
        FUN3(FUN12(VAR3, &VAR2->VAR7[VAR3].VAR12));
    }
    VAR2->VAR7[VAR3].VAR19[VAR9] = VAR5;
}