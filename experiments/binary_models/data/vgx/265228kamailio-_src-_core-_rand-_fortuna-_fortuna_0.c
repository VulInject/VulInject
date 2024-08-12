static void
FUN1(VAR1 *VAR2, unsigned VAR3, VAR4 *VAR5)
{
unsigned	VAR6;
unsigned	VAR7 = 0;


if (VAR2->VAR8 >= VAR9 || VAR2->VAR10 == 0)
if (FUN2(VAR2))
FUN3(VAR2);


if (!VAR2->VAR11)
FUN4(VAR2);

while (VAR3 > 0)
{

FUN5(VAR2, VAR2->VAR12);


if (VAR3 > VAR13)
VAR6 = VAR13;
else
VAR6 = VAR3;
memcpy(VAR5, VAR2->VAR12, VAR6);
VAR5 += VAR6;
VAR3 -= VAR6;


VAR7++;
if (VAR7 > (VAR14 / VAR13))
{
FUN6(VAR2);
VAR7 = 0;
}
}

FUN6(VAR2);
}



FState VAR15;
int	VAR16 = 0;

void
FUN7(const VAR4 *VAR17, unsigned VAR18)
{
if (!VAR16)
{
FUN8(&VAR15);
VAR16 = 1;
}
if (!VAR17 || !VAR18)
return;
FUN9(&VAR15, VAR17, VAR18);
}