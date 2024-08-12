void
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
size_t VAR5;

if (!VAR4 || VAR4[0] == '') {
return;
}

VAR5 = strlen(VAR4);
FUN2(VAR2, VAR5);

FUN3(FUN4(VAR2) >= VAR5 + 1);
memcpy(&VAR2->VAR4[VAR2->VAR6], VAR4, VAR5);
VAR2->VAR6 += VAR5;
VAR2->VAR4[VAR2->VAR6] = '';
}