static void FUN1(VAR1 *VAR2)
{
    PXAFrameDescriptor VAR3;
    target_phys_addr_t VAR4;
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR2->VAR7[VAR5].VAR8 = 0;
        if (!VAR2->VAR7[VAR5].VAR9)
            continue;
        if (VAR2->VAR7[VAR5].VAR10 & VAR11)
        {
            VAR4 = VAR2->VAR7[VAR5].VAR10 & VAR12;
            if (VAR2->VAR7[VAR5].VAR10 & VAR13)
                FUN2(VAR2, VAR5);
            VAR2->VAR7[VAR5].VAR10 &= ~VAR11;
        }
        else
            VAR4 = VAR2->VAR7[VAR5].VAR14;
        if (!((VAR4 >= VAR15 && VAR4 + sizeof(VAR3) <= VAR15 + VAR16) || (VAR4 >= VAR17 && VAR4 + sizeof(VAR3) <= VAR17 + VAR18)))
        {
            continue;
        }
        FUN3(VAR4, (void *)&VAR3, sizeof(VAR3));
        VAR2->VAR7[VAR5].VAR14 = FUN4(VAR3.VAR19);
        VAR2->VAR7[VAR5].VAR8 = FUN4(VAR3.VAR20);
        VAR2->VAR7[VAR5].VAR21 = FUN4(VAR3.VAR22);
        VAR2->VAR7[VAR5].VAR23 = FUN4(VAR3.VAR24);
    }
}