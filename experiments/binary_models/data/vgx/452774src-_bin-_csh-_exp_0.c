int
FUN1(VAR1 ***VAR2, bool VAR3)
{
int VAR4 = FUN2(VAR2, VAR3);

if (**VAR2 && FUN3(**VAR2, VAR5)) {
int VAR6;

(*VAR2)++;
VAR6 = FUN1(VAR2, (VAR3 & VAR7) || VAR4);
return (VAR4 || VAR6);
}
return (VAR4);
}