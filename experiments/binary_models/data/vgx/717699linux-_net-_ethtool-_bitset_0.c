int FUN1(unsigned long *VAR1, unsigned long *VAR2,
unsigned int VAR3, const struct VAR4 *VAR5,
ethnl_string_array_t VAR6,
struct VAR7 *VAR8)
{
struct VAR4 *VAR9[FUN2(VAR10)];
const struct VAR4 *VAR11;
bool VAR12;
int VAR13;
int VAR14;

if (!VAR5)
return 0;
VAR14 = FUN3(VAR9, FUN2(VAR10) - 1, VAR5,
VAR10, VAR8);
if (VAR14 < 0)
return VAR14;
VAR12 = VAR9[VAR15];

if (!VAR9[VAR16]) {
unsigned int VAR17;

VAR14 = FUN4(VAR3, VAR5, VAR9, VAR8);
if (VAR14 < 0)
return VAR14;

VAR17 = FUN5(VAR9[VAR18]);
if (VAR17 > VAR3)
VAR17 = VAR3;
FUN6(VAR1, FUN7(VAR9[VAR19]),
VAR17);
if (VAR17 < VAR3)
FUN8(VAR1, VAR17, VAR3 - VAR17);
if (VAR12) {
FUN9(VAR2, VAR3);
} else {
FUN6(VAR2,
FUN7(VAR9[VAR20]),
VAR17);
if (VAR17 < VAR3)
FUN8(VAR2, VAR17,
VAR3 - VAR17);
}

return 0;
}

if (VAR9[VAR19]) {
FUN10(VAR8, VAR9[VAR19],
"");
return -VAR21;
}
if (VAR9[VAR20]) {
FUN10(VAR8, VAR9[VAR20],
"");
return -VAR21;
}

FUN11(VAR1, VAR3);
if (VAR12)
FUN9(VAR2, VAR3);
else
FUN11(VAR2, VAR3);

FUN12(VAR11, VAR9[VAR16], VAR13) {
unsigned int VAR22;
bool VAR23;

VAR14 = FUN13(&VAR22, &VAR23, VAR3, VAR11, VAR12,
VAR6, VAR8);
if (VAR14 < 0)
return VAR14;
if (VAR23)
FUN14(VAR22, VAR1);
if (!VAR12)
FUN14(VAR22, VAR2);
}

return 0;
}