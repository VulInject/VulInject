int
FUN1(devmap_cookie_t VAR1, VAR2 *VAR3,
struct VAR4 *VAR5, ddi_umem_cookie_t VAR6,
offset_t VAR7, size_t VAR8, uint_t VAR9, uint_t VAR10,
VAR11 *VAR12)
{
VAR13 *VAR14 = (VAR13 *)VAR1;
struct VAR15 *VAR16 = (struct VAR15 *)VAR6;

VAR3 = VAR3;

FUN2(VAR17, VAR18,
"",
(void *)VAR14, VAR7, VAR6, VAR8);
FUN3(2, (VAR19, ""
"", (void *)VAR14, VAR7, (void *)VAR6, VAR8));

if (VAR6 == NULL)
return (VAR20);


if ((VAR7 + VAR8) > VAR16->VAR21)
return (VAR20);


if (FUN4(VAR10) == VAR22)
return (VAR20);


if (VAR14->VAR23 & VAR24)
return (VAR20);

if ((VAR14->VAR25 & VAR14->VAR26 & VAR9) != VAR14->VAR25)
return (VAR20);

if (VAR10 & VAR27) {

if (!(VAR10 & VAR28)) {
return (VAR20);
}
} else {
VAR14->VAR29 = VAR6;
VAR14->VAR30 = FUN5(FUN6(VAR7));
VAR14->VAR31 = VAR16->VAR32 + VAR14->VAR30;

FUN7(VAR10, &VAR14->VAR33);

FUN8(VAR12, &VAR14->VAR33);
}




VAR14->VAR23 |= (VAR10 & VAR34);

VAR14->VAR35 = FUN5(FUN9(VAR8));
VAR14->VAR36 = VAR9 & VAR14->VAR26;
FUN10((VAR14->VAR25 & VAR14->VAR26 & VAR9) == VAR14->VAR25);

if (VAR5 != NULL) {
bcopy(VAR5, &VAR14->VAR37,
sizeof (struct VAR4));
}

if (VAR14->VAR23 & VAR28) {
FUN11(&VAR14->VAR38, NULL, VAR39, NULL);
VAR14->VAR23 |= VAR40;
}

VAR14->VAR23 |= VAR24;

return (VAR41);
}