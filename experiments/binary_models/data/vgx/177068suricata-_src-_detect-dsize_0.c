int FUN1(const VAR1 *VAR2)
{
FUN2();

if (!(VAR2->VAR3 & VAR4)) {
FUN3(-1);
}

const int VAR5 = FUN4(VAR2);
if (VAR5 < 0) {

FUN3(-1);
}

int VAR6, VAR7;
FUN5(VAR2, VAR5, VAR8, &VAR6, &VAR7);
FUN6("", VAR5, VAR6, VAR7, VAR2->VAR9);

if (VAR6 > VAR5) {
FUN6("", VAR6, VAR5);
return VAR6;
}

if ((VAR6 + VAR7) > VAR5) {
FUN6("", VAR6 + VAR7, VAR5);
return VAR6 + VAR7;
}

FUN3(-1);
}