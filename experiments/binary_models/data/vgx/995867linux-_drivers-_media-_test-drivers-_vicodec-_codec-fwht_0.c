static int FUN1(const VAR1 *VAR2)
{
int32_t VAR3 = 0;
int32_t VAR4 = 0;
const VAR1 *VAR5 = VAR2;
int VAR6;

for (VAR6 = 0; VAR6 < 8 * 8; VAR6++, VAR5++)
VAR3 += *VAR5;
VAR3 /= 64;
VAR5 = VAR2;
for (VAR6 = 0; VAR6 < 8 * 8; VAR6++, VAR5++)
VAR4 += (*VAR5 - VAR3) < 0 ? -(*VAR5 - VAR3) : (*VAR5 - VAR3);
return VAR4;
}