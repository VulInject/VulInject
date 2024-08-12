void
FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4;
struct VAR5 *VAR6;
const char *VAR7;
char VAR8[512];
int VAR9;
unsigned int VAR10, VAR11;
int VAR12;

VAR9 = strlen(VAR2->VAR13);

if (!FUN2(VAR2) && VAR9 < 9)
VAR9 = 9;


VAR9 += strlen(VAR14.VAR13) + 1 + strlen(FUN3(VAR15));

VAR10 = VAR9, VAR11 = 0, VAR8[0] = '';
FUN4(VAR4, VAR16.VAR17)
{
VAR6 = VAR4->VAR18;
VAR7 = (*VAR6->VAR19)(VAR6->VAR20);
if (VAR7 == NULL)
continue;
VAR12 = strlen(VAR6->VAR13) + (FUN5(VAR7) ? 0 : 1 + strlen(VAR7));
if (VAR10 + VAR12 + (VAR11 > 0) >= sizeof VAR8 || VAR11 + 1 > 12)
{
FUN6(VAR2, VAR15, FUN3(VAR15), VAR8);
VAR10 = VAR9, VAR11 = 0, VAR8[0] = '';
}
if (VAR11 > 0)
FUN7(VAR8, "", sizeof VAR8), VAR10++;
FUN7(VAR8, VAR6->VAR13, sizeof VAR8);
if (!FUN5(VAR7))
{
FUN7(VAR8, "", sizeof VAR8);
FUN7(VAR8, VAR7, sizeof VAR8);
}
VAR10 += VAR12;
VAR11++;
}
if (VAR11 > 0)
FUN6(VAR2, VAR15, FUN3(VAR15), VAR8);
}