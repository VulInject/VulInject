bool FUN1(const VAR1 *VAR2, chunk_t VAR3,
int *VAR4)
{

if (VAR2 == NULL) {
*VAR4 = 0;
return true;
}

*VAR4 = VAR5 + 1;

while (VAR2 != NULL) {
int VAR6;

if (FUN2(FUN3(VAR3), FUN3(VAR2->VAR7), &VAR6) &&
VAR6 < *VAR4)
*VAR4 = VAR6;
VAR2 = VAR2->VAR8;
}

return *VAR4 <= VAR5;
}