const char *FUN1(struct VAR1 *VAR2, const char *VAR3,
const char *VAR4)
{
int VAR5;

for (VAR5 = 0 ; VAR5 < VAR2->VAR6 ; VAR5++) {
if (!strcmp(VAR3, VAR2->VAR7[VAR5].VAR3))
return VAR2->VAR7[VAR5].VAR8;
}
return VAR4;
}