struct VAR1 FUN1(const s64 VAR2)
{
struct timespec VAR3;
s32 VAR4;

if (!VAR2)
return (struct VAR1) {0, 0};

VAR3.VAR5 = FUN2(VAR2, VAR6, &VAR4);
if (FUN3(VAR4 < 0)) {
VAR3.VAR5--;
VAR4 += VAR6;
}
VAR3.VAR7 = VAR4;

return VAR3;
}