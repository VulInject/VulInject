static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, uint32_t VAR7)
{
    struct VAR8 *VAR9 = &VAR4->VAR10->VAR11;
    struct VAR8 *VAR12 = VAR4->VAR13;
    int VAR14 = 0;
    uint32_t VAR15, VAR16 = 0;
    FUN2("", VAR7, (unsigned long long)VAR9->VAR17, VAR9->VAR7);
    while (VAR7)
    {
        if (VAR12 && VAR12->VAR7 == 0)
        {
            if (VAR4->VAR18)
            {
                VAR12 = ++VAR4->VAR13;
                --VAR4->VAR18;
                --VAR4->VAR19;
                VAR9->VAR17 += sizeof(struct VAR8);
            }
            else
            {
                VAR12 = VAR4->VAR13 = NULL;
            }
        }
        if (!VAR12)
        {
            if (!VAR4->VAR19)
            {
                FUN2("");
                break;
            }
            VAR12 = VAR4->VAR13 = &VAR4->VAR20;
            FUN2("", (unsigned long long)VAR9->VAR17);
            VAR14 = FUN3(&VAR2->VAR21, VAR9->VAR17, VAR12, sizeof(struct VAR8));
            if (VAR14)
            {
                FUN2("", VAR14);
                break;
            }
            FUN4(VAR12);
            VAR9->VAR17 += sizeof(struct VAR8);
            --VAR4->VAR19;
        }
        FUN2("", (unsigned long long)VAR12->VAR17, VAR12->VAR7, VAR7);
        VAR15 = FUN5(VAR7, VAR12->VAR7);
        if (VAR4->VAR22)
        {
            VAR14 = FUN3(&VAR2->VAR21, VAR12->VAR17, VAR6, VAR15);
        }
        else
        {
            VAR14 = FUN6(&VAR2->VAR21, VAR12->VAR17, VAR6, VAR15);
        }
        if (VAR14)
        {
            FUN2("", VAR4->VAR22, VAR14);
            break;
        }
        FUN2("", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
        VAR7 -= VAR15;
        VAR6 += VAR15;
        VAR16 += VAR15;
        VAR12->VAR17 += VAR15;
        VAR12->VAR7 -= VAR15;
    }
    return VAR14 ? -1 : VAR16;
}