void
FUN1(struct VAR1 *VAR2)
{
struct mbuf_list VAR3 = FUN2();
struct VAR4 *VAR5 = &VAR2->VAR6.VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
uint16_t VAR12;

FUN3((""));

for (;;) {
VAR9 = &VAR2->VAR13[VAR2->VAR14];
if (VAR9->VAR15 == 0)
break;

FUN3(("", VAR2->VAR14,
VAR9->VAR16, VAR9->VAR17));
VAR2->VAR14 = (VAR2->VAR14 + 1) % VAR18;
VAR9->VAR15 = 0;
if (!(VAR9->VAR17 & VAR19)) {
++VAR5->VAR20;
continue;
}

FUN4(VAR11, VAR21, VAR22);
if (VAR11 == NULL) {
++VAR5->VAR20;
continue;
}
VAR12 = VAR9->VAR16 - VAR23;
if (VAR12 > VAR24) {
FUN5(VAR11, VAR21);
if ((VAR11->VAR25 & VAR26) == 0) {
FUN6(VAR11);
++VAR5->VAR20;
continue;
}
}


VAR11->VAR27.VAR28 = VAR11->VAR29 = VAR12;
memcpy(FUN7(VAR11, void *), &VAR9->VAR30[0], VAR12);

FUN8(&VAR3, VAR11);
}

FUN9(VAR5, &VAR3);

FUN10(VAR2, VAR31, VAR2->VAR14);
}