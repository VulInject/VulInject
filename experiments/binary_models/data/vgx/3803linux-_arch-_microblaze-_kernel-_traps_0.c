void FUN1(struct VAR1 *VAR2, unsigned long *VAR3, const char *VAR4)
{
unsigned long VAR5;
u32 VAR6 = (VAR7) VAR3;

if (VAR6 == 0) {
if (VAR2) {
VAR6 = ((struct VAR8 *)
(VAR2->VAR9))->VAR10.VAR11;
} else {

VAR6 = (VAR7)&VAR3 - 8;
}
}

VAR5 = (VAR12 - (VAR6 & (VAR12 - 1))) >> 2;
if (VAR13 && (VAR5 > VAR13))
VAR5 = VAR13;

FUN2("", VAR4);


if (VAR6 & 0xF) {
unsigned long VAR14 = (0x10 - (VAR6 & 0xF)) >> 2;
if (VAR14 < VAR5) {
FUN3(VAR15, "", VAR16, 32,
4, (void *)VAR6, VAR14 << 2, 0);
VAR6 += VAR14 << 2;
VAR5 -= VAR14;
}
}
FUN3(VAR4, "", VAR16, 32, 4, (void *)VAR6,
VAR5 << 2, 0);
FUN2("", VAR4);
FUN4(VAR2, NULL, VAR4);
FUN2("", VAR4);

if (!VAR2)
VAR2 = VAR17;

FUN5(VAR2);
}