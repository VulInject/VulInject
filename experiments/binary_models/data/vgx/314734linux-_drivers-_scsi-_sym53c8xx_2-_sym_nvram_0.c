static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
static u_char VAR5[6] = {0xfe, 0xfe, 0, 0, 0, 0};
VAR6 *VAR7 = (VAR6 *) VAR4;
int VAR8  = sizeof(*VAR4);
u_short	VAR9;
int VAR10;


if (FUN2 (VAR2, VAR11, VAR7, VAR8))
return 1;


if (VAR4->VAR12 != 0 ||
memcmp(VAR4->VAR13, VAR5, 6) ||
VAR4->VAR14 != VAR8 - 12)
return 1;


for (VAR10 = 6, VAR9 = 0; VAR10 < VAR8 - 6; VAR10++)
VAR9 += VAR7[VAR10];
if (VAR9 != VAR4->VAR15)
return 1;

return 0;
}