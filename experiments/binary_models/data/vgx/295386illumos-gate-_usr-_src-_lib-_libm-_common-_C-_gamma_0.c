double
FUN1(double VAR1) {
double	VAR2;

if (!FUN2(VAR1))
return (VAR1 * VAR1);

VAR2 = FUN3(VAR1);
if (VAR1 == VAR2 && VAR1 <= 0.0) {
VAR3 = 1;
return (FUN4(VAR1, VAR1, 41));
}

VAR2 = FUN5(VAR1, &VAR3);
if (!FUN2(VAR2))
VAR2 = FUN4(VAR1, VAR1, 40);
return (VAR2);
}