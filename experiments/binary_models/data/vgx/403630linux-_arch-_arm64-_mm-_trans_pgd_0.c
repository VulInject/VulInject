static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
VAR3 *VAR5, unsigned long VAR6,
unsigned long VAR7)
{
VAR8 *VAR9;
VAR8 *VAR10;
unsigned long VAR11;
unsigned long VAR12 = VAR6;

VAR9 = FUN2(VAR4, VAR6);
VAR10 = FUN2(VAR5, VAR6);
do {
VAR11 = FUN3(VAR12, VAR7);
if (FUN4(FUN5(*VAR10)))
continue;
if (FUN6(VAR2, VAR9, VAR10, VAR12, VAR11))
return -VAR13;
} while (VAR9++, VAR10++, VAR12 = VAR11, VAR12 != VAR7);

return 0;
}