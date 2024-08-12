static void FUN1(VAR1 *VAR2)
{
    struct vfio_region_info VAR3 = {.VAR4 = sizeof(VAR3), .VAR5 = VAR6};
    uint64_t VAR7;
    off_t VAR8 = 0;
    size_t VAR9;
    if (FUN2(VAR2->VAR10, VAR11, &VAR3))
    {
        FUN3("");
        return;
    }
    FUN4("", VAR2->VAR12.VAR13, VAR2->VAR12.VAR14, VAR2->VAR12.VAR15, VAR2->VAR12.VAR16);
    FUN4("", (unsigned long)VAR3.VAR7, (unsigned long)VAR3.VAR17, (unsigned long)VAR3.VAR18);
    VAR2->VAR19 = VAR7 = VAR3.VAR7;
    VAR2->VAR20 = VAR3.VAR17;
    if (!VAR2->VAR19)
    {
        FUN3(""
                     "",
                     VAR2->VAR12.VAR13, VAR2->VAR12.VAR14, VAR2->VAR12.VAR15, VAR2->VAR12.VAR16);
        FUN5(""
                     ""
                     "");
        return;
    }
    VAR2->VAR21 = FUN6(VAR7);
    memset(VAR2->VAR21, 0xff, VAR7);
    while (VAR7)
    {
        VAR9 = pread(VAR2->VAR10, VAR2->VAR21 + VAR8, VAR7, VAR2->VAR20 + VAR8);
        if (VAR9 == 0)
        {
            break;
        }
        else if (VAR9 > 0)
        {
            VAR8 += VAR9;
            VAR7 -= VAR9;
        }
        else
        {
            if (VAR22 == VAR23 || VAR22 == VAR24)
            {
                continue;
            }
            FUN3("");
            break;
        }
    }