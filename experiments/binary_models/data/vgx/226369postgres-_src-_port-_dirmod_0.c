int
FUN1(const char *VAR1)
{
bool		VAR2;
int			VAR3 = 0;
struct stat VAR4;


if (unlink(VAR1) == 0)
return 0;
if (VAR5 != VAR6)
return -1;


if (FUN2(VAR1, &VAR4) < 0)
{
if (FUN3())
VAR2 = false;
else
return -1;
}
else
VAR2 = FUN4(VAR4.VAR7);


while ((VAR2 ? FUN5(VAR1) : unlink(VAR1)) < 0)
{
if (VAR5 != VAR6)
return -1;
if (++VAR3 > 100)		
return -1;
FUN6(100000);		
}
return 0;
}