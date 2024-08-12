static int FUN1(const char *VAR1)
{
bool VAR2;
int VAR3 = 0;

if (FUN2(VAR1))
return FUN3(VAR4);

if (FUN4(VAR1, "", FUN5("")) == 0) {
VAR2 = true;
VAR1 += FUN5("");
} else if (FUN4(VAR1, "", FUN5("")) == 0) {
VAR2 = false;
VAR1 += FUN5("");
} else {
return FUN3(VAR4);
}

if (FUN2(VAR1) || !FUN6(*VAR1))
return FUN3(VAR4);

VAR3 = FUN7(VAR1);
if (VAR3 < 0 || VAR3 > VAR5 - VAR6)
return FUN3(VAR4);

if (VAR2)
VAR3 = VAR5 - VAR3;
else
VAR3 = VAR6 + VAR3;

return VAR3;
}