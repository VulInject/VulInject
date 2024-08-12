main ()
{
long int VAR1;

for (VAR1 = 0; VAR1 < 1000; VAR1++)
{
unsigned long VAR2, VAR3;
VAR2 = FUN1 ();
VAR3 = FUN1 ();

if (sizeof (int) == sizeof (long))
goto VAR4;

{ unsigned long VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if (VAR6 == 0) continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (VAR8 >= VAR6 || VAR7 * VAR6 + VAR8 != VAR5)
FUN2 ();
}
{ signed long VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if ((unsigned long) VAR5 << 1 == 0 && VAR6 == -1)
continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (FUN3 (VAR8) >= (unsigned long) FUN3 (VAR6) || (signed long) (VAR7 * VAR6 + VAR8) != VAR5)
FUN2 ();
}
VAR4:
{ unsigned int VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if (VAR6 == 0) continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (VAR8 >= VAR6 || VAR7 * VAR6 + VAR8 != VAR5)
FUN2 ();
}
{ signed int VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if ((unsigned int) VAR5 << 1 == 0 && VAR6 == -1)
continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (FUN3 (VAR8) >= (unsigned int) FUN3 (VAR6) || (signed int) (VAR7 * VAR6 + VAR8) != VAR5)
FUN2 ();
}
{ unsigned short VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if (VAR6 == 0) continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (VAR8 >= VAR6 || VAR7 * VAR6 + VAR8 != VAR5)
FUN2 ();
}
{ signed short VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (FUN3 (VAR8) >= (unsigned short) FUN3 (VAR6) || (signed short) (VAR7 * VAR6 + VAR8) != VAR5)
FUN2 ();
}
{ unsigned char VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
if (VAR6 == 0) continue;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (VAR8 >= VAR6 || VAR7 * VAR6 + VAR8 != VAR5)
FUN2 ();
}
{ signed char VAR5 = VAR2, VAR6 = VAR3, VAR7, VAR8;
VAR7 = VAR5 / VAR6;
VAR8 = VAR5 % VAR6;
if (FUN3 (VAR8) >= (unsigned char) FUN3 (VAR6) || (signed char) (VAR7 * VAR6 + VAR8) != VAR5)
FUN2 ();
}
}

FUN4 (0);
}