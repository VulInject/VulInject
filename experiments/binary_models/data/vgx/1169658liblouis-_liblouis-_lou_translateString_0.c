static int
FUN1(const VAR1 *VAR2, const VAR3 **VAR4,
VAR5 *VAR6, int VAR7, int VAR8,
const VAR9 *VAR10, int VAR11, int VAR12,
VAR13 *VAR14, widechar VAR15) {
widechar VAR16 = VAR14->VAR17[2 * VAR8];
widechar VAR18 = VAR14->VAR17[2 * VAR8 + 1];
int VAR19;
int VAR20 = 0;
TranslationTableOffset VAR21 =
VAR10[VAR11 + 1] << 16 | (VAR10[VAR11 + 2] & 0xff);
VAR13 *VAR22 =
(VAR13 *)&VAR2->VAR23[VAR21];
widechar VAR24 = VAR22->VAR17[2 * VAR8];
widechar VAR25 = VAR22->VAR17[2 * VAR8 + 1];
if (VAR15 == VAR26) {
for (VAR19 = VAR12 + 1; VAR19 < (*VAR4)->VAR27; VAR19++) {
if ((*VAR4)->VAR28[VAR19] == VAR16) VAR20--;
if ((*VAR4)->VAR28[VAR19] == VAR18) VAR20++;
if (VAR20 == 1) break;
}
if (VAR19 == (*VAR4)->VAR27)
return 0;
else {



int VAR29 = FUN2((*VAR4)->VAR27);
VAR9 *VAR28 = VAR30->VAR31[VAR29];
memcpy(VAR28, (*VAR4)->VAR28, (*VAR4)->VAR27 * sizeof(VAR9));
VAR28[VAR12] = VAR24;
VAR28[VAR19] = VAR25;
static InString VAR32;
VAR32 = (VAR3){
.VAR28 = VAR28, .VAR27 = (*VAR4)->VAR27, .VAR33 = VAR29
};
*VAR4 = &VAR32;
}
} else {
if (VAR7 == VAR34) {
VAR16 = VAR14->VAR17[2];
VAR18 = VAR14->VAR17[3];
VAR24 = VAR22->VAR17[2];
VAR25 = VAR22->VAR17[3];
}
VAR6->VAR28[VAR6->VAR27] = VAR25;
for (VAR19 = VAR6->VAR27 - 1; VAR19 >= 0; VAR19--) {
if (VAR6->VAR28[VAR19] == VAR18) VAR20--;
if (VAR6->VAR28[VAR19] == VAR16) VAR20++;
if (VAR20 == 1) break;
}
if (VAR19 < 0) return 0;
VAR6->VAR28[VAR19] = VAR24;
VAR6->VAR27++;
}
return 1;
}