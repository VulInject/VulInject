static void FUN1(void)
{
struct thread_stats VAR1 = {};
double VAR2;

FUN2(&VAR1, VAR3, VAR4);
FUN2(&VAR1, VAR5, VAR6);

FUN3("");

if (VAR7) {
FUN3("",
VAR1.VAR8, (double)VAR1.VAR8 / (VAR1.VAR8 + VAR1.VAR9) * 100, VAR1.VAR8 + VAR1.VAR9);
}

FUN3("",
(double)VAR1.VAR10 / 1e6,
(double)VAR1.VAR10 / (VAR1.VAR10 + VAR1.VAR11) * 100,
(double)(VAR1.VAR10 + VAR1.VAR11) / 1e6);
FUN3("",
(double)VAR1.VAR12 / 1e6,
(double)VAR1.VAR12 / (VAR1.VAR12 + VAR1.VAR13) * 100,
(double)(VAR1.VAR12 + VAR1.VAR13) / 1e6);
FUN3("",
(double)VAR1.VAR14 / 1e6,
(double)VAR1.VAR14 / (VAR1.VAR14 + VAR1.VAR15) * 100,
(double)(VAR1.VAR14 + VAR1.VAR15) / 1e6);

VAR2 = (VAR1.VAR10 + VAR1.VAR11 + VAR1.VAR12 + VAR1.VAR13 + VAR1.VAR14 + VAR1.VAR15) / 1e6 / VAR16;
FUN3("", VAR2);
FUN3("", VAR2 / VAR4);
}