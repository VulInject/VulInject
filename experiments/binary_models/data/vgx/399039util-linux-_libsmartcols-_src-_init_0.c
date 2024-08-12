void FUN1(int VAR1)
{
if (VAR2)
return;

FUN2(VAR3, VAR4, VAR1, VAR5);

if (VAR2 != VAR6
&& VAR2 != (VAR7|VAR6)) {
const char *VAR8 = NULL;

FUN3(&VAR8);

FUN4(VAR9, FUN5("", VAR2));
FUN4(VAR9, FUN5("", VAR8));
}
FUN6(VAR10, FUN7("",
FUN8(VAR3)));
}