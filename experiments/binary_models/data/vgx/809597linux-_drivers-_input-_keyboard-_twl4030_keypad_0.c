static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
u8 VAR6;
int VAR7;


VAR7 = FUN2(VAR5, &VAR6, VAR8, 1);


if (VAR7 >= 0 && (VAR6 & VAR9))
FUN3(VAR5, false);
else
FUN3(VAR5, true);

return VAR10;
}