struct VAR1 * FUN1(struct VAR1 **VAR2, const flag_t VAR3, const flag_t VAR4)
{
struct VAR1 *VAR5;
struct VAR1 *VAR6, *VAR7;
VAR6 = VAR7 = NULL;

if (VAR2) {

for (VAR7=*VAR2; VAR7!=NULL; VAR7=VAR7->VAR8) {
if ((VAR7->VAR3 == VAR3) && (VAR7->VAR4 == VAR4)) return VAR7;
}


for (VAR7=*VAR2; VAR7!=NULL; VAR7=VAR7->VAR8) {
if (VAR7->VAR4 < VAR4) break;
VAR6=VAR7;
}
}

if ((VAR5 = FUN2(sizeof(struct VAR1))) == NULL) {
VAR9;
return NULL;
}
memset(VAR5, 0, sizeof(struct VAR1));

VAR5->VAR3=VAR3;
VAR5->VAR4=VAR4;
VAR5->VAR8=VAR7;

if (VAR6) {
VAR6->VAR8 = VAR5;
}
else {
if (VAR2) *VAR2=VAR5;
}

return VAR5;
}