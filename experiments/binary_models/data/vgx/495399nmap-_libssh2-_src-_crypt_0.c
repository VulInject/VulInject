static int
FUN1(VAR1 * VAR2,
const VAR3 * VAR4,
unsigned char *VAR5, int *VAR6,
unsigned char *VAR7, int *VAR8,
int VAR9, void **VAR10)
{
int VAR11;

VAR11 = FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8,
VAR9, VAR10);
if(VAR11 == 0) {
struct VAR12 *VAR13 = *(struct VAR12 **) VAR10;
unsigned char VAR14[8];
size_t VAR15 = 1536;
for(; VAR15; VAR15 -= 8)
FUN3(&VAR13->VAR16, VAR13->VAR17, VAR13->VAR9, VAR14,
VAR4->VAR18);
}

return VAR11;
}