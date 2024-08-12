static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR8;
    vlan_bd_t VAR13 = FUN3(VAR8, VAR12->VAR14 + VAR15);
    vlan_bd_t VAR16;
    int VAR17 = VAR12->VAR18;
    uint64_t VAR19;
    uint8_t VAR20;
    FUN4("", VAR8->VAR21.VAR22, VAR12->VAR23);
    if (!VAR12->VAR24)
    {
        return -1;
    }
    if (!VAR12->VAR23)
    {
        return -1;
    }
    do
    {
        VAR17 += 8;
        if (VAR17 >= VAR25)
        {
            VAR17 = VAR26;
        }
        VAR16 = FUN3(VAR8, VAR12->VAR14 + VAR17);
        FUN4("", VAR17, (unsigned long long)VAR16);
    } while ((!(VAR16 & VAR27) || (FUN5(VAR16) < (VAR6 + 8))) && (VAR17 != VAR12->VAR18));
    if (!(VAR16 & VAR27) || (FUN5(VAR16) < (VAR6 + 8)))
    {
        return -1;
    }
    VAR12->VAR23--;
    VAR12->VAR18 = VAR17;
    FUN6(VAR8, VAR12->VAR14 + VAR12->VAR18, 0);
    FUN4("", VAR12->VAR18, VAR12->VAR23);
    if (FUN7(VAR8, FUN8(VAR16) + 8, VAR5, VAR6) < 0)
    {
        return -1;
    }
    FUN4("");
    VAR20 = VAR28 | VAR29;
    if (VAR13 & VAR30)
    {
        VAR20 ^= VAR28;
    }
    VAR19 = FUN3(VAR8, FUN8(VAR16));
    FUN6(VAR8, FUN8(VAR13) + VAR12->VAR31 + 8, VAR19);
    FUN9(VAR8, FUN8(VAR13) + VAR12->VAR31 + 4, VAR6);
    FUN10(VAR8, FUN8(VAR13) + VAR12->VAR31 + 2, 8);
    FUN11(VAR8, FUN8(VAR13) + VAR12->VAR31, VAR20);
    FUN4("", (unsigned long long)VAR12->VAR31, (unsigned long long)FUN3(VAR8, FUN8(VAR13) + VAR12->VAR31), (unsigned long long)FUN3(VAR8, FUN8(VAR13) + VAR12->VAR31 + 8));
    VAR12->VAR31 += 16;
    if (VAR12->VAR31 >= FUN5(VAR13))
    {
        VAR12->VAR31 = 0;
        FUN6(VAR8, VAR12->VAR14 + VAR15, VAR13 ^ VAR30);
    }
    if (VAR8->VAR32 & 1)
    {
        FUN12(FUN13(VAR8));
    }
    return VAR6;
}