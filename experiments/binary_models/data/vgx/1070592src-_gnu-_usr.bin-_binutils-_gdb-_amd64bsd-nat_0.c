FUN1 (int VAR1)
{
int VAR2;


VAR2 = FUN2 (VAR3);
if (VAR2 == 0)
VAR2 = FUN3 (VAR3);

if (VAR1 == -1 || FUN4 (VAR1))
{
struct reg VAR4;

if (FUN5 (VAR5, VAR2, (VAR6) &VAR4, 0) == -1)
FUN6 ("");

FUN7 (VAR7, &VAR4, VAR1);

if (FUN5 (VAR8, VAR2, (VAR6) &VAR4, 0) == -1)
FUN6 ("");

if (VAR1 != -1)
return;
}

if (VAR1 == -1 || !FUN4 (VAR1))
{
struct fpreg VAR9;

if (FUN5 (VAR10, VAR2, (VAR6) &VAR9, 0) == -1)
FUN6 ("");

FUN8 (VAR7, VAR1, &VAR9);

if (FUN5 (VAR11, VAR2, (VAR6) &VAR9, 0) == -1)
FUN6 ("");
}
}