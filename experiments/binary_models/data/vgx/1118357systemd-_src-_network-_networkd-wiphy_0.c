static int FUN1(VAR1 *VAR2) {
int VAR3;

assert(VAR2);


FUN2(VAR2);

VAR3 = FUN3(VAR2, "");
if (VAR3 < 0 && VAR3 != -VAR4)
return VAR3;
if (VAR3 > 0)
return VAR5;

VAR3 = FUN3(VAR2, "");
if (VAR3 < 0 && VAR3 != -VAR4)
return VAR3;
if (VAR3 > 0)
return VAR6;

return VAR7;
}