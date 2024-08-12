VAR1
FUN1(VAR2 *VAR3, VAR4 **VAR5,
char **VAR6, VAR4 ***VAR7)
{
if ((VAR3 == NULL) || (VAR6 == NULL))
return (VAR8);

FUN2(VAR3, VAR5, VAR6, VAR7);


if (VAR3->VAR9->VAR10 != NULL) {
if ((FUN3(VAR3->VAR9->VAR10, "") == 0) ||
(FUN3(VAR3->VAR9->VAR10, "") == 0))
FUN4(VAR3, VAR5, VAR6,
VAR7);
else if (FUN3(VAR3->VAR9->VAR10, "") == 0)
FUN5(VAR3, VAR5, VAR6,
VAR7);

}

return (VAR11);
}