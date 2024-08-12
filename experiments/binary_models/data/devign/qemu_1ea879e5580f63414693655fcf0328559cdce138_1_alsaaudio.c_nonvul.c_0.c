static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    int VAR5, VAR6, VAR7;
    int VAR8;
    VAR9 *VAR10;
    struct VAR11 *VAR12;
    snd_pcm_sframes_t VAR13;
    VAR6 = FUN2(VAR2);
    if (!VAR6)
    {
        return 0;
    }
    VAR13 = FUN3(VAR4->VAR14);
    if (VAR13 < 0)
    {
        FUN4("");
        return 0;
    }
    VAR7 = FUN5(VAR6, VAR13);
    VAR8 = VAR7;
    VAR5 = VAR2->VAR5;
    while (VAR8)
    {
        int VAR15 = VAR2->VAR8 - VAR5;
        int VAR16 = FUN5(VAR8, VAR15);
        snd_pcm_sframes_t VAR17;
        VAR12 = VAR2->VAR18 + VAR5;
        VAR10 = FUN6(VAR4->VAR19, VAR5 << VAR2->VAR20.VAR21);
        VAR2->FUN7(VAR10, VAR12, VAR16);
        while (VAR16)
        {
            VAR17 = FUN8(VAR4->VAR14, VAR10, VAR16);
            if (VAR17 <= 0)
            {
                switch (VAR17)
                {
                case 0:
                    if (VAR22.VAR23)
                    {
                        FUN4("", VAR16);
                    }
                    goto VAR24;
                case -VAR25:
                    if (FUN9(VAR4->VAR14))
                    {
                        FUN10(VAR17, "", VAR16);
                        goto VAR24;
                    }
                    if (VAR22.VAR23)
                    {
                        FUN4("");
                    }
                    continue;
                case -VAR26:
                    goto VAR24;
                default:
                    FUN10(VAR17, "", VAR16, VAR10);
                    goto VAR24;
                }
            }
            VAR5 = (VAR5 + VAR17) % VAR2->VAR8;
            VAR8 -= VAR17;
            VAR16 -= VAR17;
            VAR10 = FUN6(VAR10, VAR17 << VAR2->VAR20.VAR21);
            VAR12 += VAR17;
        }
    }
VAR24:
    VAR2->VAR5 = VAR5;
    return VAR7;
}