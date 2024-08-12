int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5 = (int)VAR4->VAR4;
struct VAR1 *VAR6 = NULL;

if (VAR5 == VAR7[VAR8] ||
VAR5 == VAR7[VAR9] ||
VAR5 == (-VAR7[VAR8]) ||
VAR5 == (-VAR7[VAR9]))
FUN2("", VAR10, VAR4->VAR11,
(int)VAR5);

if (VAR4->VAR11 == -1)
VAR6 = VAR2;
else
VAR6 = FUN3(VAR2->VAR12, VAR4->VAR11);

if (VAR5 == 2 || VAR5 == 3 || VAR5 == 4 || VAR5 == 6) {
VAR13->FUN4(VAR6, VAR4);

} else if (VAR5 == -2 || VAR5 == -3 || VAR5 == -4 || VAR5 == -6) {
VAR13->FUN5(VAR6, VAR4);
} else {
FUN6("", VAR10,
VAR4->VAR11, VAR4->VAR4);
return -VAR14;
}

VAR6->VAR15.VAR16 = 0;

FUN7(&VAR6->VAR16);

return 0;
}