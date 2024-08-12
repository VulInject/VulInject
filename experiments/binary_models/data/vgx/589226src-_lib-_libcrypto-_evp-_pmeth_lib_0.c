int
FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5,
int VAR6, void *VAR7)
{
int VAR8;

if (!VAR2 || !VAR2->VAR9 || !VAR2->VAR9->VAR10) {
FUN2(VAR11);
return -2;
}
if ((VAR3 != -1) && (VAR2->VAR9->VAR12 != VAR3))
return -1;

if (VAR2->VAR13 == VAR14) {
FUN2(VAR15);
return -1;
}

if ((VAR4 != -1) && !(VAR2->VAR13 & VAR4)) {
FUN2(VAR16);
return -1;
}

VAR8 = VAR2->VAR9->FUN3(VAR2, VAR5, VAR6, VAR7);

if (VAR8 == -2)
FUN2(VAR11);

return VAR8;

}