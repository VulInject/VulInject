int FUN1(struct VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4;
    if (VAR2->VAR5 == 1)
    {
        if (VAR2->VAR6 & (1 << 14))
        {
            if (VAR7->VAR8)
                VAR3 = 1;
        }
        else
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
                if (VAR2->VAR6 & (1 << VAR4))
                    switch ((VAR2->VAR9 >> (16 + VAR4 * 4)) & 0x3)
                    {
                    case 0x0:
                        VAR3 = 1;
                        break;
                    case 0x1:
                        VAR3 = 1;
                        VAR7->VAR10 = &VAR11;
                        VAR11.VAR12 = VAR13[VAR4].VAR14;
                        VAR11.VAR15 = VAR16;
                        break;
                    case 0x3:
                        VAR3 = 1;
                        VAR7->VAR10 = &VAR11;
                        VAR11.VAR12 = VAR13[VAR4].VAR14;
                        VAR11.VAR15 = VAR17;
                        break;
                    }
        }
    }
    else if (FUN2(VAR7, VAR2->VAR18))
        VAR3 = 1;
    if (!VAR3)
        FUN3(VAR7, (VAR2->VAR5 == 1) ? VAR19 : VAR20);
    return VAR3;
}