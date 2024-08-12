static int FUN1(struct VAR1 *VAR2,
int VAR3, VAR4 *VAR5)
{
int VAR6;

VAR6 = FUN2(VAR2, VAR3);
if (VAR6 < 0) {
FUN3(&VAR2->VAR7, "", VAR3);
return VAR6;
}

*VAR5 = (VAR4)VAR6;
return 0;
}