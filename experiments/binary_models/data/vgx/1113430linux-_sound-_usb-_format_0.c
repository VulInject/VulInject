static bool FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
__le64 VAR7 = 0;
u64 VAR8;
int VAR9;


if (FUN2(VAR4 >= 64 - 8))
return false;

VAR9 = FUN3(VAR6, FUN4(VAR6, 0), VAR10,
VAR11 | VAR12 | VAR13,
VAR14 << 8,
VAR3, &VAR7, sizeof(VAR7));
if (VAR9 < 0)
return false;

VAR8 = FUN5(VAR7);

if ((VAR8 & 0xff) * 8 < VAR4)
return false;
if (VAR8 & (1ULL << (VAR4 + 8)))
return true;

return false;
}