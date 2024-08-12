static bool FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6 = VAR5->VAR7.VAR6;
VAR8 *VAR9 = VAR5->VAR7.VAR9;

if (!FUN3(&VAR9[VAR3 * 256]))
return false;
if ((VAR3 + 1) * 2 <= VAR6)
return FUN3(&VAR9[VAR3 * 256 + 128]);
return true;
}