static int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
VAR3 *VAR4 = VAR1->VAR5;
struct VAR6 *VAR7 = VAR4->VAR8;
int VAR9;

if (!VAR7->VAR10.VAR11)
goto VAR12;

FUN2(&VAR7->VAR13);


VAR9 = FUN3(VAR4, &VAR7->VAR14, &VAR7->VAR15);
if (VAR9)
FUN4(VAR16, VAR4, 0x705c,
"", VAR9);

VAR7->VAR10.VAR11 = 0;

FUN5(&VAR7->VAR13);
VAR12:
return FUN6(VAR2, VAR17, VAR4);
}