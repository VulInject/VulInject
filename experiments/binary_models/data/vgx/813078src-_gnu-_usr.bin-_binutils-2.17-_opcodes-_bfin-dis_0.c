FUN1 (TIword VAR1, VAR2 *VAR3)
{

int VAR4  = ((VAR1 >> VAR5) & VAR6);
int VAR7 = ((VAR1 >> VAR8) & VAR9);

if (VAR7 == 0 && VAR4 == 0)
FUN2 (VAR3, "");
else if (VAR7 == 1 && VAR4 == 0)
FUN2 (VAR3, "");
else if (VAR7 == 1 && VAR4 == 1)
FUN2 (VAR3, "");
else if (VAR7 == 1 && VAR4 == 2)
FUN2 (VAR3, "");
else if (VAR7 == 1 && VAR4 == 3)
FUN2 (VAR3, "");
else if (VAR7 == 1 && VAR4 == 4)
FUN2 (VAR3, "");
else if (VAR7 == 2 && VAR4 == 0)
FUN2 (VAR3, "");
else if (VAR7 == 2 && VAR4 == 3)
FUN2 (VAR3, "");
else if (VAR7 == 2 && VAR4 == 4)
FUN2 (VAR3, "");
else if (VAR7 == 2 && VAR4 == 5)
FUN2 (VAR3, "");
else if (VAR7 == 3)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN3 (VAR4));
}
else if (VAR7 == 4)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN3 (VAR4));
}
else if (VAR7 == 5)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN4 (VAR4));
FUN2 (VAR3, "");
}
else if (VAR7 == 6)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN4 (VAR4));
FUN2 (VAR3, "");
}
else if (VAR7 == 7)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN4 (VAR4));
FUN2 (VAR3, "");
}
else if (VAR7 == 8)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN4 (VAR4));
FUN2 (VAR3, "");
}
else if (VAR7 == 9)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN5 (VAR4));
}
else if (VAR7 == 10)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN5 (VAR4));
}
else if (VAR7 == 11)
{
FUN2 (VAR3, "");
FUN2 (VAR3, FUN4 (VAR4));
FUN2 (VAR3, "");
}
else
return 0;
return 2;
}