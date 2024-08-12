static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
char VAR3;
unsigned int VAR4 = (unsigned long)FUN2(FUN3(VAR2));
int VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;

VAR3 = VAR4 & VAR10 ? '' : '';
VAR4 &= ~VAR10;

if (!FUN4(VAR4))
return -VAR11;

VAR5 = FUN5(VAR2, &VAR12, sizeof(*VAR9));
if (VAR5)
return VAR5;
VAR7 = VAR2->VAR13;
VAR9 = VAR7->private;

VAR9->VAR14 = 0;
VAR9->VAR3 = VAR3;
FUN6(VAR9, VAR4);

return 0;
}