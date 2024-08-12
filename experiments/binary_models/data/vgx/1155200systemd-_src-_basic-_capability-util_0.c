int FUN1(uint64_t VAR1) {
int VAR2;

VAR2 = FUN2("", VAR1);
if (VAR2 < 0)
return VAR2;

VAR2 = FUN2("", VAR1);
if (VAR2 < 0)
return VAR2;

return VAR2;
}