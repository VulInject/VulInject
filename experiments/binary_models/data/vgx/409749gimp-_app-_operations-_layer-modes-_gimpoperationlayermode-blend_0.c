FUN1 (VAR1 *VAR2,
const VAR3  *VAR4,
const VAR3  *VAR5,
VAR3        *VAR6,
gint           VAR7)
{
while (VAR7--)
{
if (VAR4[VAR8] != 0.0f && VAR5[VAR8] != 0.0f)
{
gint VAR9;

for (VAR9 = 0; VAR9 < 3; VAR9++)
VAR6[VAR9] = VAR4[VAR9] + VAR5[VAR9];
}

VAR6[VAR8] = VAR5[VAR8];

VAR6  += 4;
VAR5 += 4;
VAR4    += 4;
}
}