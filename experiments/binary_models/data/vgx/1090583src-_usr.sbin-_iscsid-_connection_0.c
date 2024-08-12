void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
FUN2(&VAR4->VAR5);
FUN2(&VAR4->VAR6);

if (VAR2) {
FUN3(&VAR2->VAR7, VAR4, VAR8);
if (!FUN4(&VAR2->VAR7))
FUN5(VAR2);
else
FUN6(VAR2->VAR9);
}
}

do {								\
if (!strcmp((VAR10)->VAR11, #VAR12)) {				\
(VAR13)->VAR14.VAR12 = FUN7((VAR10)->VAR15, (VAR16), (VAR17), &VAR18); \
if (VAR18) {					\
FUN8("",	\
(VAR10)->VAR11, (VAR10)->VAR15, VAR18);		\
VAR19++;				\
}						\
FUN9("", #VAR12, (VAR20)(VAR13)->VAR14.VAR12);	\
}							\
} while (0)