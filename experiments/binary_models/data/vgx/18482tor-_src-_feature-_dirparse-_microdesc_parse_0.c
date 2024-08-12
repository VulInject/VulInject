VAR1 *
FUN1(const char *VAR2, const char *VAR3,
int VAR4,
saved_location_t VAR5,
VAR1 *VAR6)
{
VAR1 *VAR7;
VAR8 *VAR9 = NULL;
VAR10 *VAR11;
const char *VAR12 = VAR2;
const char *VAR13;

if (!VAR3)
VAR3 = VAR2 + strlen(VAR2);

VAR2 = FUN2(VAR2, VAR3);
VAR11 = FUN3();
VAR7 = FUN4();

while (VAR2 < VAR3) {
bool VAR14 = false;

VAR13 = FUN5(VAR2, VAR3);
if (!VAR13)
VAR13 = VAR3;

VAR9 = FUN6(sizeof(VAR8));
uint8_t VAR15[VAR16];
{
const bool VAR17 =
FUN7(VAR9, VAR12, VAR2,
VAR13,
VAR5) < 0;

memcpy(VAR15, VAR9->VAR18, VAR16);
if (VAR17) {
FUN8(VAR19, VAR20, "");
goto VAR21;
}
}

if (FUN9(VAR9, VAR11, VAR2, VAR13,
VAR4, VAR5) == 0) {
FUN10(VAR7, VAR9);
VAR9 = NULL; 
VAR14 = true;
}

VAR21:
if (! VAR14 && VAR6) {
FUN10(VAR6,
FUN11(VAR15, VAR16));
}
FUN12(VAR9);
VAR9 = NULL;
VAR2 = VAR13;
}

FUN13(VAR11);

return VAR7;
}