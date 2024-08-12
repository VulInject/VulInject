int FUN1(VAR1 *VAR2, VAR3 *VAR4,
void *VAR5, uint32_t VAR6, uint64_t VAR7)
{
int VAR8 = 0;
VHDXLogSequence VAR9 = { .VAR10 = true,
.VAR11 = 1,
.VAR12 = { 0 } };



VAR8 = FUN2(VAR2);
if (VAR8 < 0) {
goto VAR13;
}

VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7);
if (VAR8 < 0) {
goto VAR13;
}
VAR9.VAR14 = VAR4->VAR14;


VAR8 = FUN2(VAR2);
if (VAR8 < 0) {
goto VAR13;
}

VAR8 = FUN4(VAR2, VAR4, &VAR9);
if (VAR8 < 0) {
goto VAR13;
}

VAR4->VAR14 = VAR9.VAR14;

VAR13:
return VAR8;
}