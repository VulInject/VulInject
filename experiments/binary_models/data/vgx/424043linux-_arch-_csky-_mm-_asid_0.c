static bool FUN1(struct VAR1 *VAR2, u64 VAR3,
u64 VAR4)
{
int VAR5;
bool VAR6 = false;


FUN2(VAR5) {
if (FUN3(VAR2, VAR5) == VAR3) {
VAR6 = true;
FUN3(VAR2, VAR5) = VAR4;
}
}

return VAR6;
}