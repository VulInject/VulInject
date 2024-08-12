void
FUN1(
const struct VAR1     *VAR2,
const struct VAR3 **VAR4,
const uint32_t VAR5)
{
struct ia_css_ref_configuration VAR6;
unsigned VAR7;

for (VAR7 = 0; VAR7 < VAR8; VAR7++)
VAR6.VAR4[VAR7] = VAR4[VAR7];
VAR6.VAR5 = VAR5;
FUN2(VAR2, &VAR6);
}