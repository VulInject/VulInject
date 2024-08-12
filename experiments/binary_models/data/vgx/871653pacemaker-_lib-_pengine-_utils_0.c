VAR1
FUN1(gconstpointer VAR2, gconstpointer VAR3)
{
const VAR4 *VAR5 = (const VAR4 *)VAR2;
const VAR4 *VAR6 = (const VAR4 *)VAR3;

if (VAR2 == NULL && VAR3 == NULL) {
return 0;
}
if (VAR2 == NULL) {
return 1;
}
if (VAR3 == NULL) {
return -1;
}

if (VAR5->VAR7 > VAR6->VAR7) {
return -1;
}

if (VAR5->VAR7 < VAR6->VAR7) {
return 1;
}

return 0;
}