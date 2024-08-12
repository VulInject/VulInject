static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &(VAR2->VAR6[0]);
int VAR7, VAR8, VAR9 = VAR2->VAR10;

VAR7 = VAR6->VAR11;
VAR8 = FUN2(VAR4)->VAR12 + 2;

if (FUN3(FUN4(&VAR6->VAR13) < VAR8))
return -1;

FUN5(VAR8, &VAR6->VAR13);

VAR6->VAR11 = (VAR6->VAR11 + VAR8) & VAR9;

return VAR7;
}