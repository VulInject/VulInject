static void FUN1(VAR1 *VAR2)
{
    struct vfio_region_info VAR3 = {.VAR4 = sizeof(VAR3), .VAR5 = VAR6};
    uint64_t VAR7;
    off_t VAR8 = 0;
    ssize_t VAR9;
    if (FUN2(VAR2->VAR10.VAR11, VAR12, &VAR3))
    {
        FUN3("");
        return;
    }
    FUN4(VAR2->VAR10.VAR13, (unsigned long)VAR3.VAR7, (unsigned long)VAR3.VAR14, (unsigned long)VAR3.VAR15);
    VAR2->VAR16 = VAR7 = VAR3.VAR7;
    VAR2->VAR17 = VAR3.VAR14;
    if (!VAR2->VAR16)
    {
        VAR2->VAR18 = true;
        FUN3(""
                     "",
                     VAR2->VAR10.VAR13);
        FUN5(""
                     ""
                     "");
        return;
    }
    VAR2->VAR19 = FUN6(VAR7);
    memset(VAR2->VAR19, 0xff, VAR7);
    while (VAR7)
    {
        VAR9 = pread(VAR2->VAR10.VAR11, VAR2->VAR19 + VAR8, VAR7, VAR2->VAR17 + VAR8);
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
            if (VAR20 == VAR21 || VAR20 == VAR22)
            {
                continue;
            }
            FUN3("");
            break;
        }
    }
}