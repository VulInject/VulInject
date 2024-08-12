FUN1 (struct VAR1 *VAR1, const char *VAR2, enum type_code VAR3)
{
if (FUN2 (VAR1))
{
LONGEST VAR4 = FUN3 (VAR2, FUN4 (VAR1));
if (VAR3 == VAR5)
{
if (VAR4 == VAR6)
return 0;
else
return 1;
}
switch (7 & (int) VAR4)
{
case 2:
case 6:		
return VAR4 >> 2;
case 4:		
if (FUN5 (VAR4))	
return FUN6 (VAR4);
else if (FUN7 (VAR4))
{
switch ((int) VAR4)
{
case VAR7:
case VAR6:
return 0;
case VAR8:
return 1;
}
}
FUN8 ("");
default:
return VAR4;
}
}
else
return FUN9 (VAR1, VAR2);
}