static void FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
unsigned int VAR5 = FUN2(VAR4->VAR6);
unsigned int VAR7 = 0, VAR8 = VAR2->VAR9;
const unsigned int VAR10 = VAR11;
struct VAR3 *VAR12;

FUN3(!FUN4(VAR10));

if (FUN5(VAR2->VAR9, VAR10)) { 
struct VAR3 *VAR13;

VAR13 = FUN6(FUN7(VAR2->VAR9 + 1, VAR10), sizeof(*VAR4),
VAR14);
if (!VAR13) {
FUN8("");
return;
}

if (VAR2->VAR13) {
memcpy(VAR13, VAR2->VAR13, sizeof(*VAR4) * VAR2->VAR9);
FUN9(VAR2->VAR13);
}

VAR2->VAR13 = VAR13;
}

while (VAR7 < VAR8) {
unsigned int VAR15 = VAR7 + (VAR8 - VAR7) / 2;

if (FUN2(VAR2->VAR13[VAR15].VAR6) < VAR5) {
VAR7 = VAR15 + 1;
} else if (FUN2(VAR2->VAR13[VAR15].VAR6) > VAR5) {
VAR8 = VAR15;
} else {
VAR12 = &VAR2->VAR13[VAR15];

if ((VAR4->VAR16 | VAR12->VAR16) && !(VAR4->VAR16 & ~VAR12->VAR16)) {
FUN8("",
FUN2(VAR12->VAR6),
VAR12->VAR16, VAR12->VAR17);

VAR12->VAR17 &= ~VAR4->VAR16;
}

VAR2->VAR18++;
VAR12->VAR17 |= VAR4->VAR17;
VAR12->VAR16 |= VAR4->VAR16;
VAR12->read |= VAR4->read;
return;
}
}

VAR2->VAR18++;
VAR12 = &VAR2->VAR13[VAR2->VAR9++];
*VAR12 = *VAR4;

while (VAR12-- > VAR2->VAR13) {
FUN3(FUN2(VAR12[0].VAR6) ==
FUN2(VAR12[1].VAR6));
if (FUN2(VAR12[1].VAR6) >
FUN2(VAR12[0].VAR6))
break;

FUN10(VAR12[1], VAR12[0]);
}
}