static VAR1 FUN1(
const icmap_map_t VAR2,
const char *VAR3,
void **VAR4,
VAR5 *VAR6,
VAR7 *VAR8)
{
struct VAR9 *VAR10;

if (VAR3 == NULL) {
return (VAR11);
}

VAR10 = FUN2(VAR2->VAR12, VAR3);
if (VAR10 == NULL) {
return (VAR13);
}

if (VAR8 != NULL) {
*VAR8 = VAR10->VAR8;
}

if (VAR6 != NULL) {
*VAR6 = VAR10->VAR6;
}

if (VAR4 != NULL) {
*VAR4 = VAR10->VAR4;
}

return (VAR14);
}