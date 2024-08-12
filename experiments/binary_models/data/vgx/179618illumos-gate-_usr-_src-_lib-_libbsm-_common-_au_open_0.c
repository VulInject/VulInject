int
FUN1(int VAR1, VAR2 *VAR3)
{
VAR2 *VAR4;

if (VAR1 < 0)
return (-1);
if (VAR3 == (VAR2 *)0)
return (-1);
(void) FUN2(&VAR5);
if ((VAR1 >= VAR6) || (VAR7[VAR1] == (VAR2 *)0)) {
(void) FUN3(&VAR5);
return (-1);
} else if (VAR7[VAR1] == (VAR2 *)&VAR7) {
VAR7[VAR1] = VAR3;
(void) FUN3(&VAR5);
return (0);
}
for (VAR4 = VAR7[VAR1]; VAR4->VAR8 != (VAR2 *)0; VAR4 = VAR4->VAR8)
;
VAR4->VAR8 = VAR3;
(void) FUN3(&VAR5);
return (0);
}