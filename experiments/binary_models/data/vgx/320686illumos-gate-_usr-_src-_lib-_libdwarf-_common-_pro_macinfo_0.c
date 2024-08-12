static int
FUN1(Dwarf_P_Debug VAR1, int VAR2,
size_t VAR3, int *VAR4)
{
unsigned char *VAR5;
struct VAR6 *VAR7 = VAR1->VAR8;

if (VAR7 == 0) {
struct VAR6 *VAR9;
size_t VAR10;


size_t VAR11 = VAR12;

if (VAR11 < VAR3) {
VAR11 = 2 * VAR3;
}
VAR10 = sizeof(struct VAR6) + VAR11;
VAR9 =
(struct VAR6 *) FUN2(VAR1, VAR10);
if (!VAR9) {
*VAR4 = VAR13;
return VAR14;
}
VAR9->VAR15 =
(char *) VAR9 + sizeof(struct VAR6);
VAR9->VAR16 = VAR11;
VAR9->VAR17 = 0;
VAR9->VAR18 = VAR11;
VAR1->VAR19 = VAR9;
VAR1->VAR8 = VAR9;
VAR7 = VAR9;
} else if (VAR7->VAR16 < VAR3) {
struct VAR6 *VAR9;
size_t VAR10;


size_t VAR11 =
VAR1->VAR8->VAR18 * 2;
if (VAR11 < VAR3) {
VAR11 = 2 * VAR3;
}
VAR10 = sizeof(struct VAR6) + VAR11;
VAR9 =
(struct VAR6 *) FUN2(VAR1, VAR10);
if (!VAR9) {
*VAR4 = VAR13;
return VAR14;
}
VAR9->VAR15 =
(char *) VAR9 + sizeof(struct VAR6);
VAR9->VAR16 = VAR11;
VAR9->VAR17 = 0;
VAR9->VAR18 = VAR11;
VAR1->VAR19->VAR20 = VAR9;
VAR1->VAR8 = VAR9;
VAR7 = VAR9;
}

VAR1->VAR21 = VAR7->VAR16;
VAR1->VAR22 = VAR7->VAR17;
VAR5 =
(unsigned char *) (VAR7->VAR15 + VAR1->VAR22);
*VAR5 = VAR2;
VAR1->VAR21--;
++VAR1->VAR22;
return VAR23;
}