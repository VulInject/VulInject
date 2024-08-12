FUN1 ()
{
int VAR1;
int VAR2;
basic_block VAR3;


VAR4 = 0;


VAR5;


if (VAR6)
FUN2 ();


VAR2 = (VAR7 - VAR8);



VAR9 = (struct VAR9 *) xmalloc (VAR2 * sizeof (struct VAR9));
VAR10
= (VAR11 *) xmalloc (VAR2 * sizeof (VAR11));
VAR12 = (short *) xmalloc (VAR2 * sizeof (short));
VAR13 = (VAR11 *) xmalloc (VAR2 * sizeof (VAR11));
VAR14 = (short *) xmalloc (VAR2 * sizeof (short));

VAR15 = (int *) xmalloc (VAR7 * sizeof (int));
VAR16 = (char *) xmalloc (VAR7 * sizeof (char));
VAR17 = (int *) xmalloc (VAR7 * sizeof (int));



for (VAR1 = VAR8; VAR1 < VAR7; VAR1++)
{
if (FUN3 (VAR1) >= 0 && FUN4 (VAR1) == 1)
VAR15[VAR1] = -2;
else
VAR15[VAR1] = -1;
}


VAR18 = VAR2;



FUN5 (VAR3)
{


if (VAR18 < 6)
{
for (VAR1 = 0; VAR1 < VAR18; VAR1++)
{
FUN6 (VAR10[VAR1]);
VAR12[VAR1] = 0;
FUN6 (VAR13[VAR1]);
VAR14[VAR1] = 0;
}
}
else
{
memset ((char *) (VAR19), 0, (sizeof (*(VAR19))) * VAR18);

FUN7 (VAR10);
FUN7 (VAR12);
FUN7 (VAR13);
FUN7 (VAR14);
}

VAR18 = 0;

FUN8 (VAR3->VAR20);
}

free (VAR9);
free (VAR10);
free (VAR12);
free (VAR13);
free (VAR14);

free (VAR15);
free (VAR16);
free (VAR17);

return VAR4;
}