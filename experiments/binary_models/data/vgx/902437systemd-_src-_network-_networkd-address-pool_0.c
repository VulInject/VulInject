int FUN1(VAR1 *VAR2) {
int VAR3;

assert(VAR2);


VAR3 = FUN2(VAR2, VAR4, "", 8);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN2(VAR2, VAR5, "", 16);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN2(VAR2, VAR5, "", 12);
if (VAR3 < 0)
return VAR3;

VAR3 = FUN2(VAR2, VAR5, "", 8);
if (VAR3 < 0)
return VAR3;

return 0;
}