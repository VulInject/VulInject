int
FUN1(attr_t VAR1, short VAR2, void *VAR3, int (*VAR4)(int))
{
FUN2("", VAR1, VAR2, VAR3, VAR4);

if (VAR5 != (char *) 0 && VAR6 != VAR1) {

(void) FUN3(
FUN4(
VAR5,
(long) FUN5(VAR1, VAR7),
(long) FUN5(VAR1, VAR8),
(long) FUN5(VAR1, VAR9),
(long) FUN5(VAR1, VAR10),
(long) FUN5(VAR1, VAR11),
(long) FUN5(VAR1, VAR12),
(long) FUN5(VAR1, VAR13),
(long) FUN5(VAR1, VAR14),
(long) FUN5(VAR1, VAR15)
),
1, VAR4
);

VAR6 &= ~VAR16;
VAR6 |= VAR1 & VAR16;


if (VAR17 != (char *) 0 && (VAR1 & VAR18)) {
(void) FUN3(
FUN4(
VAR17,
(long) FUN5(VAR1, VAR19),
(long) FUN5(VAR1, VAR20),
(long) FUN5(VAR1, VAR21),
(long) FUN5(VAR1, VAR22),
(long) FUN5(VAR1, VAR23),
(long) FUN5(VAR1, VAR24),
0L, 0L, 0L
),
1, VAR4
);

VAR6 &= ~VAR18;
VAR6 |= VAR1 & VAR18;
}
} else if (VAR6 != VAR1) {

(void) FUN6(VAR4, VAR6);


VAR6 = FUN7(VAR4, VAR1);
}


if (VAR1 == VAR25) {
if (VAR26 != (char *) 0)
(void) FUN3(VAR26, 1, VAR4);

VAR2 = 0;
} else if (VAR2 != VAR27->VAR28 && 0 < VAR29) {
short VAR30, VAR31;

if (VAR32 != (char *) 0) {
(void) FUN3(
FUN4(
VAR32, (long) VAR2,
0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L
),
1, VAR4
);
} else if (FUN8(VAR2, &VAR30, &VAR31) == VAR33) {
if (VAR34 != (char *) 0) {
(void) FUN3(
FUN4(VAR34, (long) VAR30,
0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L
),
1, VAR4
);
} else if (VAR35 != (char *) 0) {
(void) FUN3(
FUN4(
VAR35, (long) VAR30,
0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L
),
1, VAR4
);
}

if (VAR36 != (char *) 0) {
(void) FUN3(
FUN4(VAR36, (long) VAR31,
0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L
),
1, VAR4
);
} else if (VAR37 != (char *) 0) {
(void) FUN3(
FUN4(
VAR37, (long) VAR31,
0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L
),
1, VAR4
);
}
}
}


VAR6 = VAR1;
VAR27->VAR28 = VAR2;

return FUN9("", VAR33);
}