void
FUN1(void *VAR1)
{
VAR2	*VAR3 = VAR1;

for (;;) {
VAR4	*VAR5;
boolean_t	VAR6;
sda_err_t	VAR7;

FUN2(&VAR3->VAR8);


if ((VAR5 = FUN3(&VAR3->VAR9)) != NULL) {
FUN4(&VAR3->VAR9, VAR5);
FUN5(&VAR3->VAR8);

FUN6(VAR5, VAR10 | VAR11,
VAR12);
continue;
}

if (VAR3->VAR13) {

break;
}

if ((VAR3->VAR14) && (VAR3->VAR15 == NULL)) {

break;
}

if (VAR3->VAR16) {
VAR3->VAR16 = VAR17;
FUN5(&VAR3->VAR8);

FUN7(VAR3);
continue;
}

if (VAR3->VAR18) {
sda_err_t	VAR19;

VAR19 = VAR3->VAR20;
VAR3->VAR20 = VAR12;
VAR3->VAR18 = VAR17;
FUN5(&VAR3->VAR8);

FUN8(VAR3, VAR19);
continue;
}

if (VAR3->VAR21 != VAR22) {
sda_fault_t	VAR23;

VAR23 = VAR3->VAR21;
VAR3->VAR21 = VAR22;
FUN5(&VAR3->VAR8);

FUN9(VAR3, VAR23);
continue;
}

if ((VAR3->VAR15 != NULL) && (FUN10() > VAR3->VAR24)) {

FUN5(&VAR3->VAR8);
FUN8(VAR3, VAR25);
FUN11(VAR3, VAR26);
continue;
}


if ((VAR3->VAR14) || (!VAR3->VAR27)) {



if ((VAR3->VAR15 != NULL) || (VAR3->VAR28)) {

(void) FUN12(&VAR3->VAR29,
&VAR3->VAR8, FUN13(3000000),
VAR30);
} else {
(void) FUN14(&VAR3->VAR29, &VAR3->VAR8);
}

FUN5(&VAR3->VAR8);
continue;
}

VAR3->VAR27 = VAR17;

FUN5(&VAR3->VAR8);


FUN15(VAR3);



if ((VAR5 = FUN3(&VAR3->VAR31)) == NULL) {
FUN16(VAR3);
continue;
}


if (VAR3->VAR32 && !(VAR5->VAR33 & VAR34)) {
FUN16(VAR3);
continue;
}

VAR6 = ((VAR5->VAR33 & VAR11) != 0);

if (VAR6) {

if (VAR3->VAR15 != NULL) {
FUN16(VAR3);
continue;
}


if (VAR5->VAR35 != VAR36) {
VAR3->VAR15 = VAR5;

VAR3->VAR24 = FUN10() +
5000000000ULL;
(void) FUN17(VAR3, VAR37, 1);
}
}


FUN4(&VAR3->VAR31, VAR5);


FUN18(VAR3);


if ((!VAR3->VAR38) && (VAR5->VAR33 & VAR39)) {
VAR7 = VAR40;
} else {
VAR7 = VAR3->VAR41.FUN19(VAR3->VAR42, VAR5);
}
if (VAR7 == VAR12)
VAR7 = FUN20(VAR5);

if (VAR7 == VAR12) {

if (VAR5->VAR35 == VAR36) {
if ((VAR5->VAR43[0] & VAR44) == 0) {
FUN21(VAR3, "");
}
FUN22(VAR3, VAR5);
FUN16(VAR3);

continue;
}

} else if (VAR6) {

(void) FUN17(VAR3, VAR37, 0);
VAR3->VAR15 = NULL;
VAR3->VAR24 = 0;


FUN16(VAR3);
FUN6(VAR5, VAR10 | VAR11, VAR7);
continue;
}


FUN16(VAR3);
FUN6(VAR5, VAR10, VAR7);
}

FUN5(&VAR3->VAR8);
}