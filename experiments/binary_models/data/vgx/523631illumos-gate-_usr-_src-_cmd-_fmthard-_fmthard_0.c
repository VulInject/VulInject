static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int		VAR5;
int		VAR6;
uint64_t	VAR7;
diskaddr_t	VAR8;
diskaddr_t	VAR9;
diskaddr_t	VAR10;
uint64_t	VAR11;
uint64_t	VAR12;
uint64_t	VAR13;

VAR13 = VAR2->VAR14 * VAR2->VAR15;

VAR7 = (VAR16)VAR2->VAR17 * VAR2->VAR14 * VAR2->VAR15;


VAR4->VAR18 = VAR19;
VAR4->VAR20 = VAR21;
VAR4->VAR22 = VAR23;
if (VAR4->VAR24 == 0)
VAR4->VAR24 = VAR25;

for (VAR5 = 0; VAR5 < VAR23; VAR5++) {
if (VAR4->VAR26[VAR5].VAR27 == VAR28) {
if (VAR4->VAR26[VAR5].VAR29 != VAR7) {
(void) fprintf(VAR30, "\
VAR31: VAR32 %d specifies the full disk and is not VAR33\VAR34\
full size of VAR35.  The full disk capacity VAR36 %llu VAR37.\VAR34", VAR5, VAR7);
FUN2(1);
}
}
if (VAR4->VAR26[VAR5].VAR29 == 0)
continue;	
if ((VAR4->VAR26[VAR5].VAR38 % VAR13) ||
(VAR4->VAR26[VAR5].VAR29 % VAR13)) {
(void) fprintf(VAR30, "\
VAR31: VAR32 %d not aligned on cylinder VAR39 \VAR34", VAR5);
FUN2(1);
}
if (VAR4->VAR26[VAR5].VAR38 > VAR7 ||
VAR4->VAR26[VAR5].VAR38 +
VAR4->VAR26[VAR5].VAR29 > VAR7) {
(void) fprintf(VAR30, "\
VAR31: VAR32 %d specified VAR40 %llu sectors starting VAR41 %VAR42\VAR34\
\tdoes not VAR43. The full disk VAR44 %llu VAR37.\VAR34",
VAR5, VAR4->VAR26[VAR5].VAR29,
VAR4->VAR26[VAR5].VAR38, VAR7);
FUN2(1);
}

if (VAR4->VAR26[VAR5].VAR27 != VAR28 &&
VAR4->VAR26[VAR5].VAR29 != VAR7) {
for (VAR6 = 0; VAR6 < VAR23; VAR6++) {
if (VAR4->VAR26[VAR6].VAR27 == VAR28)
continue;
if (VAR4->VAR26[VAR6].VAR29 == VAR7)
continue;
VAR11 = VAR4->VAR26[VAR5].VAR29;
VAR12 = VAR4->VAR26[VAR6].VAR29;
VAR9 = VAR4->VAR26[VAR5].VAR38;
VAR10 = VAR4->VAR26[VAR6].VAR38;
if ((VAR5 != VAR6) &&
(VAR11 != 0) && (VAR12 != 0)) {
VAR8 = VAR10 + VAR12 -1;
if ((VAR10 <= VAR9) &&
(VAR9 <= VAR8)) {
(void) fprintf(VAR30, "\
VAR31: VAR32 %d overlaps VAR45 %VAR46. Overlap is VAR47\VAR34\
\tonly on partition on the full disk VAR45).\VAR34",
VAR5, VAR6);
FUN2(1);
}
}
}
}
}
}