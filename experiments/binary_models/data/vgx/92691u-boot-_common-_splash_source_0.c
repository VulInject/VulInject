static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5;
int VAR6;
size_t VAR7, VAR8 = sizeof(struct VAR4);

if (VAR3 + VAR8 >= VAR9->VAR10)
goto VAR11;

VAR6 = FUN2(VAR2, VAR3, VAR8);
if (VAR6 < 0)
return VAR6;

VAR5 = (struct VAR4 *)(VAR12)VAR3;
VAR7 = FUN3(VAR5->VAR13);

if (VAR3 + VAR7 >= VAR9->VAR10)
goto VAR11;

return FUN2(VAR2, VAR3, VAR7);

VAR11:
FUN4("");

return -VAR14;
}