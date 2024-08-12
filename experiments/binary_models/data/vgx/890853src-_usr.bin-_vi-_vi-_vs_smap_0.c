static int
FUN1(VAR1 *VAR2, recno_t VAR3)
{
VAR4 *VAR5, *VAR6;
size_t VAR7;


for (VAR5 = VAR8; VAR5->VAR3 != VAR3; ++VAR5);
if (FUN2(VAR2, VAR9))
VAR7 = 1;
else
for (VAR7 = 1, VAR6 = VAR5 + 1;
VAR6 <= VAR10 && VAR6->VAR3 == VAR3; ++VAR7, ++VAR6);

FUN3(VAR7);


(void)VAR2->VAR11->FUN4(VAR2, VAR5 - VAR8, 0);
if (FUN5(VAR2, VAR7))
return (1);


memmove(VAR5, VAR5 + VAR7, (((VAR10 - VAR5) - VAR7) + 1) * sizeof(VAR4));


for (VAR6 = VAR10 - VAR7; VAR5 <= VAR6; ++VAR5)
--VAR5->VAR3;


for (VAR5 = VAR10 - VAR7;;) {
if (VAR5 < VAR10 && FUN6(VAR2, VAR5, VAR5 + 1))
return (1);

if (FUN7(VAR2, ++VAR5, NULL, NULL))
return (1);
if (VAR5 == VAR10)
break;
}
return (0);
}