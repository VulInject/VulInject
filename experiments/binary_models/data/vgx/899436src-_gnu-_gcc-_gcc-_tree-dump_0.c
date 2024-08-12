FUN1 (const char *VAR1)
{
size_t VAR2;
int VAR3 = 0;

for (VAR2 = VAR4 + 1; VAR2 != VAR5; VAR2++)
VAR3 |= FUN2 (VAR1, &VAR6[VAR2], false);


if (!VAR3)
for (VAR2 = VAR4 + 1; VAR2 != VAR5; VAR2++)
VAR3 |= FUN2 (VAR1, &VAR6[VAR2], true);

for (VAR2 = 0; VAR2 < VAR7; VAR2++)
VAR3 |= FUN2 (VAR1, &VAR8[VAR2], false);

if (!VAR3)
for (VAR2 = 0; VAR2 < VAR7; VAR2++)
VAR3 |= FUN2 (VAR1, &VAR8[VAR2], true);


return VAR3;
}