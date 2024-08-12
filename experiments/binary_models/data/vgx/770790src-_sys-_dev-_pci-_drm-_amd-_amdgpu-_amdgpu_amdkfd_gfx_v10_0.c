static bool FUN1(struct VAR1 *VAR2,
uint64_t VAR3, uint32_t VAR4,
uint32_t VAR5)
{
uint32_t VAR6;
bool VAR7 = false;
uint32_t VAR8, VAR9;

FUN2(VAR2, VAR4, VAR5);
VAR6 = FUN3(VAR10, 0, VAR11);
if (VAR6) {
VAR8 = FUN4(VAR3 >> 8);
VAR9 = FUN5(VAR3 >> 8);

if (VAR8 == FUN3(VAR10, 0, VAR12) &&
VAR9 == FUN3(VAR10, 0, VAR13))
VAR7 = true;
}
FUN6(VAR2);
return VAR7;
}