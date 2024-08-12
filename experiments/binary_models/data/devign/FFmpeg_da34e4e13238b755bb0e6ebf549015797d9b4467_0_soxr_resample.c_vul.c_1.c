static struct VAR1 *FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, double VAR8, enum AVSampleFormat VAR9, enum SwrFilterType VAR10, double VAR11, double VAR12, int VAR13, int VAR14)
{
    soxr_error_t VAR15;
    soxr_datatype_t VAR16 = VAR9 == VAR17 ? VAR18 : VAR9 == VAR19 ? VAR20
                                                                     : VAR9 == VAR21  ? VAR22
                                                                     : VAR9 == VAR23   ? VAR24
                                                                     : VAR9 == VAR25  ? VAR26
                                                                     : VAR9 == VAR27   ? VAR28
                                                                     : VAR9 == VAR29  ? VAR30
                                                                     : VAR9 == VAR31   ? VAR32
                                                                                                     : (VAR33)-1;
    soxr_io_spec_t VAR34 = FUN2(VAR16, VAR16);
    soxr_quality_spec_t VAR35 = FUN3((int)((VAR12 - 2) / 4), (VAR36 | VAR37) * !!VAR13);
    VAR35.VAR12 = VAR7 ? 0 : VAR12;
    VAR35.VAR38 = VAR8 ? FUN4(FUN5(VAR8, .995), .8) * 100 : VAR35.VAR38;
    VAR35.VAR39 = VAR8 ? FUN4(FUN5(VAR8, .995), .8) : VAR35.VAR39;
    FUN6((VAR40)VAR2);
    VAR2 = (struct VAR1 *)FUN7(VAR4, VAR3, 0, &VAR15, &VAR34, &VAR35, 0);
    if (!VAR2)
        FUN8(NULL, VAR41, "", VAR15);
    return VAR2;
}