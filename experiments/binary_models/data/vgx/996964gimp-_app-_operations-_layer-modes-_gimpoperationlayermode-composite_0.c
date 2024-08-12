FUN1 (const VAR1 *VAR2,
const VAR1 *VAR3,
const VAR1 *VAR4,
const VAR1 *VAR5,
gfloat        VAR6,
VAR1       *VAR7,
gint          VAR8)
{
while (VAR8--)
{
gfloat VAR9 = VAR3[VAR10] * VAR6;
gfloat VAR11  = VAR4[VAR10];
gfloat VAR12;

if (VAR5)
VAR9 *= *VAR5;

VAR11 *= VAR9;

VAR12 = 1.0f - VAR9 + VAR11;

if (VAR2[VAR10] == 0.0f || VAR11 == 0.0f)
{
VAR7[VAR13]   = VAR2[VAR13];
VAR7[VAR14] = VAR2[VAR14];
VAR7[VAR15]  = VAR2[VAR15];
}
else
{
gfloat VAR16 = VAR11 / VAR12;
gint   VAR17;

for (VAR17 = VAR13; VAR17 < VAR10; VAR17++)
VAR7[VAR17] = VAR4[VAR17] * VAR16 + VAR2[VAR17] * (1.0f - VAR16);
}

VAR12 *= VAR2[VAR10];

VAR7[VAR10] = VAR12;

VAR2    += 4;
VAR3 += 4;
VAR4  += 4;
VAR7   += 4;

if (VAR5)
VAR5++;
}
}