static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    int VAR5 = VAR2->VAR6.VAR7;
    int VAR8;
    int VAR9 = FUN2(VAR2);
    int VAR10 = VAR2->VAR11 - VAR9;
    int VAR12;
    struct
    {
        int VAR13;
        int VAR14;
    } VAR15[2] = {{VAR2->VAR16, 0}, {0, 0}};
    snd_pcm_sframes_t VAR17;
    snd_pcm_uframes_t VAR18 = 0;
    if (!VAR10)
    {
        return 0;
    }
    VAR17 = FUN3(VAR4->VAR19);
    if (VAR17 < 0)
    {
        FUN4("");
        return 0;
    }
    if (!VAR17 && (FUN5(VAR4->VAR19) == VAR20))
    {
        VAR17 = VAR2->VAR11;
    }
    VAR12 = FUN6(VAR10, VAR17);
    if (!VAR12)
    {
        return 0;
    }
    if (VAR2->VAR16 + VAR12 > VAR2->VAR11)
    {
        VAR15[0].VAR14 = (VAR2->VAR11 - VAR2->VAR16);
        VAR15[1].VAR14 = (VAR12 - (VAR2->VAR11 - VAR2->VAR16));
    }
    else
    {
        VAR15[0].VAR14 = VAR12;
    }
    for (VAR8 = 0; VAR8 < 2; ++VAR8)
    {
        void *VAR21;
        struct VAR22 *VAR23;
        snd_pcm_sframes_t VAR24;
        snd_pcm_uframes_t VAR14;
        VAR14 = VAR15[VAR8].VAR14;
        VAR21 = FUN7(VAR4->VAR25, VAR15[VAR8].VAR13 << VAR5);
        VAR23 = VAR2->VAR26 + VAR15[VAR8].VAR13;
        while (VAR14)
        {
            VAR24 = FUN8(VAR4->VAR19, VAR21, VAR14);
            if (VAR24 <= 0)
            {
                switch (VAR24)
                {
                case 0:
                    if (VAR27.VAR28)
                    {
                        FUN4("", VAR14);
                    }
                    goto VAR29;
                case -VAR30:
                    if (FUN9(VAR4->VAR19))
                    {
                        FUN10(VAR24, "", VAR14);
                        goto VAR29;
                    }
                    if (VAR27.VAR28)
                    {
                        FUN4("");
                    }
                    continue;
                case -VAR31:
                    goto VAR29;
                default:
                    FUN10(VAR24, "", VAR14, VAR21);
                    goto VAR29;
                }
            }
            VAR2->FUN11(VAR23, VAR21, VAR24, &VAR32);
            VAR21 = FUN7(VAR21, VAR24 << VAR5);
            VAR23 += VAR24;
            VAR18 += VAR24;
            VAR14 -= VAR24;
        }
    }
VAR29:
    VAR2->VAR16 = (VAR2->VAR16 + VAR18) % VAR2->VAR11;
    return VAR18;
}