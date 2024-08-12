const char *
FUN1(struct VAR1 *VAR2)
{
const char *VAR3 = NULL;

if (VAR2->VAR4)
return VAR2->VAR4;

if (VAR2->VAR5)
VAR3 = FUN2(VAR2->VAR5);
if (!VAR3 && VAR2->VAR6) {
const char *VAR7;
size_t VAR8;

VAR3 = FUN3(VAR2->VAR6, "");

if (VAR3) {
VAR7 = VAR3 + strlen(VAR3) - 1;
while (VAR7 > VAR3 && FUN4(*VAR7))
--VAR7;
if (VAR7 > VAR3 && *VAR7 == '') {
VAR8 = VAR7 - VAR3;
VAR2->VAR4 = FUN5(VAR8 + 1);
if (!VAR2->VAR4) {
FUN6("", VAR9);
return NULL;
}
memcpy(VAR2->VAR4, VAR3, VAR8);
VAR2->VAR4[VAR8] = '';
VAR3 = VAR2->VAR4;
}
}
}

return VAR3;
}