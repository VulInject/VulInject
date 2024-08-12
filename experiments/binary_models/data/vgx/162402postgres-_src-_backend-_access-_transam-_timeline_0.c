void
FUN1(TimeLineID VAR1, TimeLineID VAR2)
{
char		VAR3[VAR4];
char		VAR5[VAR6];
TimeLineID	VAR7;

for (VAR7 = VAR1; VAR7 < VAR2; VAR7++)
{
if (VAR7 == 1)
continue;

FUN2(VAR5, VAR7);
if (FUN3(VAR3, VAR5, "", 0, false))
FUN4(VAR3, VAR5);
}
}