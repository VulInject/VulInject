void
FUN1(
struct VAR1	*VAR2,
struct VAR3	*VAR4)
{
struct VAR5 *VAR6;

FUN2(VAR2->VAR7 == NULL);
VAR6 = VAR2->VAR7 = FUN3(VAR8, VAR9);

VAR6->VAR10 = VAR2;
FUN4(VAR4, &VAR6->VAR11, VAR12,
&VAR13);
}