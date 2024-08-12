static unsigned int FUN1(unsigned int *VAR1, unsigned int *VAR2)
{
struct VAR3 *VAR4;
const char *VAR5;
unsigned int VAR6;
unsigned int VAR7;


VAR4 = FUN2(NULL, "");
if (!VAR4)
return 0;

VAR5 = FUN3(VAR4, "", NULL);
if (!VAR5)

VAR5 = VAR4->VAR8;


if ((sscanf(VAR5, "", &VAR7) != 1) || !VAR7)
return 0;


VAR6 = FUN4(VAR9);
*VAR1 = (VAR6 >> 4) & 0xf;
*VAR2 = VAR6 & 0xf;

return VAR7;
}