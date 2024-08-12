static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int32_t VAR6;
    int VAR7, VAR8;
    VAR6 = FUN2(VAR4->VAR9);
    VAR7 = FUN3(VAR4->VAR9);
    VAR8 = FUN4(VAR4->VAR9);
    switch (VAR5)
    {
    case VAR10:
        FUN5(VAR11[VAR8], VAR11[VAR7], VAR6);
        break;
    case VAR12:
        FUN5(VAR11[VAR8], VAR11[VAR7], VAR6 << 16);
        break;
    case VAR13:
        FUN6(VAR14[VAR8], VAR14[VAR7], VAR6 << 16);
        break;
    case VAR15:
        VAR6 = FUN7(VAR4->VAR9);
        FUN8(VAR2, VAR11[VAR8], VAR6);
        break;
    case VAR16:
        FUN9(VAR11[VAR8], VAR6);
        break;
    case VAR17:
        if (FUN10(VAR2, VAR18))
        {
            if ((VAR8 & 0x1) != 0)
            {
            }
            FUN9(VAR11[VAR8], VAR6);
            FUN9(VAR11[VAR8 + 1], VAR6 >> 15);
        }
        else
        {
        }
        break;
    case VAR19:
        VAR6 = FUN7(VAR4->VAR9);
        FUN9(VAR11[VAR8], VAR6);
        break;
    case VAR20:
        FUN9(VAR11[VAR8], VAR6 << 16);
        break;
    case VAR21:
        FUN9(VAR14[VAR8], VAR6 << 16);
        break;
    case VAR22:
        VAR6 = FUN7(VAR4->VAR9);
        FUN11(VAR2, VAR4, VAR11[VAR7], VAR6);
        break;
    }
}