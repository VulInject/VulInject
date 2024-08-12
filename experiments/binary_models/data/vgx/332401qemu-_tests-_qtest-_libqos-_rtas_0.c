int FUN1(VAR1 *VAR2, VAR3 *VAR4,
struct VAR5 *VAR5, VAR6 *VAR7)
{
int VAR8;
uint32_t VAR9[8];

VAR8 = FUN2(VAR2, VAR4, "", 0, NULL, 8, VAR9);
if (VAR8 != 0) {
return VAR8;
}

VAR8 = VAR9[0];
memset(VAR5, 0, sizeof(*VAR5));
VAR5->VAR10 = VAR9[1] - 1900;
VAR5->VAR11 = VAR9[2] - 1;
VAR5->VAR12 = VAR9[3];
VAR5->VAR13 = VAR9[4];
VAR5->VAR14 = VAR9[5];
VAR5->VAR15 = VAR9[6];
*VAR7 = VAR9[7];

return VAR8;
}