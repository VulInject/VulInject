void
FUN1(int VAR1)
{
int VAR2;
int VAR3 = VAR4;
pid_t VAR5;

while ((VAR5 = FUN2((VAR6)-1, &VAR2, VAR7)) > 0) {
VAR8 *VAR9, *VAR10;

if (FUN3(VAR2))
FUN4(VAR11, "",
(long)VAR5, FUN5(VAR2));
else
FUN6("",
(long)VAR5, FUN7(VAR2));

for (VAR9 = FUN8(VAR8, &VAR12);
VAR10 = FUN9(VAR8, VAR9), VAR9 != FUN10(VAR8, &VAR12);
VAR9 = VAR10) {
if (VAR9->VAR5 == VAR5) {
VAR9->VAR2 = VAR2;
FUN11(VAR9);
break;
}
}

if (VAR9 == NULL)
FUN6("", (long)VAR5);
}

if (VAR13)
FUN12(VAR14, VAR1);
VAR4 = VAR3;
}