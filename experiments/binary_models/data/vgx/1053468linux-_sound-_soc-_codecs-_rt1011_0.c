static int FUN1(int VAR1, int VAR2)
{
int VAR3;
static const int VAR4[] = {1, 2, 3, 4, 6, 8, 12, 16};

if (VAR1 <= 0 || VAR2 <= 0)
return -VAR5;

VAR2 = VAR2 << 8;
for (VAR3 = 0; VAR3 < FUN2(VAR4); VAR3++)
if (VAR1 == VAR2 * VAR4[VAR3])
return VAR3;

return -VAR5;
}