struct VAR1 *
FUN1(struct VAR2 *VAR3, struct VAR1 *VAR4)
{
struct VAR1 *VAR5;

VAR5 = VAR4;
while (VAR4[1].VAR6 != NULL)
VAR4++;
if (strcmp(VAR4[0].VAR6, VAR3->VAR7.VAR8.VAR9->VAR7.VAR8.VAR6) == 0)
return (VAR5);

VAR5 = FUN2(sizeof (*VAR5) * 2);
VAR5[0].VAR6 = VAR3->VAR7.VAR8.VAR9->VAR7.VAR8.VAR6;
VAR5[0].VAR10 = 0;
VAR5[1].VAR6 = NULL;
if ((VAR4 = FUN3(VAR11, (void *)VAR5,
(VAR12)VAR13)) != NULL) {
FUN4(VAR5);
return (VAR4);
}
VAR11 = FUN5(VAR11, (void *)VAR5, (void *)VAR5, (VAR12)VAR13);
FUN6(VAR14);
FUN7(VAR15, 2 * sizeof (struct VAR1));
return (VAR5);
}