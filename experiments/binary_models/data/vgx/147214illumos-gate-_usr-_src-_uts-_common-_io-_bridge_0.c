static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, boolean_t VAR5)
{
if (VAR4->VAR6 == VAR7) {
struct VAR8 *VAR9;
uint16_t VAR10;


VAR9 = (struct VAR8 *)VAR2->VAR11;
VAR4->VAR12 = VAR13;
VAR4->VAR14 = FUN2(VAR9->VAR15);
if (VAR5) {

VAR10 = FUN2(VAR9->VAR10);
VAR4->VAR16 = VAR10;
VAR4->VAR6 = (VAR10 > VAR17) ?
VAR10 : VAR18;
VAR2->VAR11 = (VAR19 *)(VAR9 + 1);
}
} else {
VAR4->VAR12 = VAR20;
VAR4->VAR14 = VAR21;
if (VAR5)
VAR2->VAR11 += sizeof (struct VAR22);
}
}