static const struct VAR1 *
FUN1(VAR2 *VAR3, uint16_t VAR4)
{
const VAR5 *VAR6;
size_t VAR7;
int VAR8;

FUN2(VAR3->VAR9->VAR10.VAR11,
&VAR6, &VAR7);

for (VAR8 = 0; VAR8 < VAR7; VAR8++) {
if (VAR6[VAR8] == VAR4)
return FUN3(VAR4);
}

return NULL;
}