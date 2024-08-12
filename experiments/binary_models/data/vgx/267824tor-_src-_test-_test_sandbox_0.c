static int
FUN1(const struct VAR1 *VAR2, void *VAR3)
{
VAR4 *VAR5 = VAR3;

(void)VAR2;

FUN2(VAR5->VAR6);
FUN2(VAR5->VAR7);
FUN2(VAR5->VAR8);
FUN2(VAR5->VAR9);
FUN2(VAR5->VAR10);

FUN2(VAR5);

return 1;
}