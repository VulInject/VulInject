void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    target_siginfo_t VAR5;
    while (1)
    {
        VAR3 = FUN2(VAR2);
        switch (VAR3)
        {
        case 0x160:
            VAR2->VAR6 += 2;
            VAR4 = FUN3(VAR2, VAR2->VAR7[3], VAR2->VAR7[4], VAR2->VAR7[5], VAR2->VAR7[6], VAR2->VAR7[7], VAR2->VAR7[0], VAR2->VAR7[1]);
            VAR2->VAR7[0] = VAR4;
            break;
        case VAR8:
            break;
        case VAR9:
        {
            int VAR10;
            VAR10 = FUN4(VAR2, VAR11);
            if (VAR10)
            {
                VAR5.VAR12 = VAR10;
                VAR5.VAR13 = 0;
                VAR5.VAR14 = VAR15;
                FUN5(VAR2, VAR5.VAR12, &VAR5);
            }
        }
        break;
        case 0xa0:
        case 0xc0:
            VAR5.VAR12 = VAR16;
            VAR5.VAR13 = 0;
            VAR5.VAR14 = VAR17;
            VAR5.VAR18.VAR19.VAR20 = VAR2->VAR21;
            FUN5(VAR2, VAR5.VAR12, &VAR5);
            break;
        default:
            FUN6("", VAR3);
            FUN7(VAR2, VAR22, fprintf, 0);
            FUN8(1);
        }
        FUN9(VAR2);
    }
}