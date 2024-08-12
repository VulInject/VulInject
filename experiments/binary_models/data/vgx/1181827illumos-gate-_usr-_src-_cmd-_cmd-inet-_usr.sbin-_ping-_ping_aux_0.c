extern VAR1 FUN1(VAR2, int, VAR2);
extern void FUN2();
void FUN3(int, union VAR3 *, int, struct VAR4 *,
struct VAR4 *);
extern void FUN4(struct VAR5 *, struct VAR5 *);


void
FUN3(int VAR6, union VAR3 *VAR7, int VAR8,
struct VAR4 *VAR9, struct VAR4 *VAR10)
{
int VAR11;
char VAR12[VAR13 + 1];
char *VAR14;
int VAR15 = VAR13;
struct VAR16 *VAR17;
struct VAR18 *VAR19;
int VAR20;

if (VAR21 || VAR22 || VAR8 > 0) {
FUN5(VAR12, sizeof (VAR12));
VAR14 = VAR12;

if (VAR8 > 0) {

VAR11 = 3 + (sizeof (struct VAR4)) * VAR8;

if (VAR15 < VAR11) {
FUN6(VAR23, "",
VAR24);
FUN7(VAR25);
}

VAR17 = (struct VAR16 *)VAR14;
VAR17->VAR26 = VAR27 ? VAR28 : VAR29;
VAR17->VAR30 = VAR11;
VAR17->VAR31 = VAR32;

for (VAR20 = 0; VAR20 < VAR8; VAR20++) {
bcopy((char *)&VAR7[VAR20].VAR33,
&VAR17->VAR34[VAR20],
sizeof (struct VAR4));
}
VAR15 -= VAR17->VAR30;
VAR14 += VAR17->VAR30;
}

if (VAR22) {
if (VAR15 < VAR32) {
FUN6(VAR23,
"",
VAR24);
FUN7(VAR25);
}

VAR19 = (struct VAR18 *)VAR14;
VAR19->VAR35 = VAR36;
VAR19->VAR37 = VAR15;
VAR19->VAR38 = VAR32 + 1;
VAR19->VAR39 = VAR40 & 0x0f;

if (VAR19->VAR39 > VAR41) {
VAR11 = VAR32 +
2 * sizeof (struct VAR42);

VAR11++;

if (VAR15 < VAR11) {
FUN6(VAR23, ""
"", VAR24);
FUN7(VAR25);
}

bcopy((char *)VAR10,
&VAR19->VAR43.VAR42[0].VAR44,
sizeof (struct VAR4));

bcopy((char *)VAR9,
&VAR19->VAR43.VAR42[1].VAR44,
sizeof (struct VAR4));
VAR19->VAR37 = VAR11;

}
VAR15 -= VAR19->VAR37;
VAR14 += VAR19->VAR37;
}

if (VAR21) {
if (VAR15 < VAR32) {
FUN6(VAR23,
"",
VAR24);
FUN7(VAR25);

}

VAR17 = (struct VAR16 *)VAR14;
VAR17->VAR26 = VAR45;
VAR17->VAR30 = VAR15;
VAR17->VAR31 = VAR32;

VAR15 -= VAR17->VAR30;
VAR14 += VAR17->VAR30;
}
VAR15 = VAR14 - VAR12;

if (VAR15 & 0x3)
VAR15 = (VAR15 & ~0x3) + 4;
if (FUN8(VAR6, VAR46, VAR47, VAR12, VAR15) <
0) {
FUN6(VAR23, "",
VAR24, strerror(VAR48));
FUN7(VAR25);
}
}
}