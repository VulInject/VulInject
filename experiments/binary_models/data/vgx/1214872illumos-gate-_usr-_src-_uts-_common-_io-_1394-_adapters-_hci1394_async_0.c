static int
FUN1(hci1394_async_handle_t VAR1,
VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
VAR8 *VAR9;
VAR10 *VAR11;
uint32_t VAR12;


FUN2(VAR1 != NULL);
FUN2(VAR3 != NULL);
FUN2(VAR5 != NULL);
FUN2(VAR7 != NULL);


VAR11 = VAR5->VAR13;
VAR9 = VAR5->VAR14;
VAR11->VAR15 = VAR16;
*VAR7 = VAR17;


VAR12 = FUN3(VAR1->VAR18, &VAR3->VAR19);
VAR5->VAR20 = FUN4(VAR12);
VAR9->VAR21 = FUN5(VAR12);
VAR9->VAR22 = FUN6(VAR12);
VAR5->VAR23.VAR24 = FUN7(VAR1,
VAR9->VAR22);


if ((VAR5->VAR20 != VAR25) &&
(VAR5->VAR20 != VAR26)) {
return (VAR27);
}


VAR12 = FUN3(VAR1->VAR18, &VAR3->VAR28);
VAR5->VAR29 = FUN8(VAR12);
VAR5->VAR30.VAR31 = FUN9(VAR12);


VAR12 = FUN3(VAR1->VAR18, &VAR3->VAR32);
VAR11->VAR33 = FUN10(VAR12);
VAR11->VAR34 = FUN11(VAR12);
VAR12 = FUN3(VAR1->VAR18, &VAR3->VAR35);
VAR11->VAR34 |= FUN12(VAR12);
VAR12 = FUN3(VAR1->VAR18, &VAR3->VAR36);
VAR11->VAR37.VAR38.VAR39 = FUN13(VAR12);
VAR11->VAR37.VAR38.VAR40 = FUN14(VAR11->VAR37.VAR38.VAR39, 0);
if (VAR11->VAR37.VAR38.VAR40 == NULL) {
return (VAR27);
}
VAR5->VAR41 = VAR42;

return (VAR43);
}