int
FUN1(int VAR1, enum sensor_type VAR2, int VAR3, struct VAR4 **VAR5)
{
struct VAR4 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
int VAR11;

VAR11 = FUN2(VAR1, &VAR8);
if (VAR11)
return (VAR11);

VAR10 = &VAR8->VAR12;
FUN3(VAR6, VAR10, VAR13)
if (VAR6->VAR2 == VAR2 && VAR6->VAR3 == VAR3) {
*VAR5 = VAR6;
return (0);
}

return (VAR14);
}