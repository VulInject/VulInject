VAR1 FUN1(struct VAR2 *VAR3)
{
u16 VAR4, VAR5;

if (VAR3->VAR6->VAR7 == 0)
return 0;


VAR4 = FUN2(VAR3, VAR8);

VAR5 = FUN2(VAR3, VAR9);


if (VAR5 <= VAR4)
return 0;
else
return VAR5 - VAR4;
}