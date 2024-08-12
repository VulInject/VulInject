FUN1 (int VAR1, const char *VAR2, const char *VAR3)
{
sb VAR4;
sb VAR5;

FUN2 (&VAR4);
if (!FUN3 (VAR2, VAR3, &VAR4, VAR6))
{
FUN4 (FUN5(""), VAR2, VAR3);
return;
}

FUN2 (&VAR5);
while (VAR1-- > 0)
FUN6 (&VAR5, &VAR4);

FUN7 (&VAR4);

FUN8 (&VAR5, VAR7, 1);
FUN7 (&VAR5);
VAR8 = FUN9 (&VAR7);
}



void
FUN10 (int VAR9)
{
FUN11 (VAR10);
while (VAR9-- >= 0)
VAR8 = FUN9 (&VAR7);
}