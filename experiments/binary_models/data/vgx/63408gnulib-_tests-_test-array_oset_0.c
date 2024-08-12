main (int argc, char *argv[])
{
gl_oset_t VAR1;
gl_list_t VAR2;


if (argc > 1)
srand (FUN1 (argv[1]));

{
size_t VAR3 = FUN2 (20);
size_t VAR4;
unsigned int VAR5;


VAR1 = FUN3 (VAR6, (VAR7) strcmp, NULL);
FUN4 (VAR1 != NULL);


VAR2 = FUN5 (VAR8, NULL, NULL, NULL, false);

FUN6 (VAR1, VAR2);


for (VAR4 = 0; VAR4 < VAR3; VAR4++)
{
const char *VAR9 = FUN7 ();
FUN4 (FUN8 (VAR1, VAR9)
== (FUN9 (VAR2, (VAR10)strcmp, VAR9) != NULL
? false
: (FUN10 (VAR2, (VAR10)strcmp, VAR9), true)));
FUN6 (VAR1, VAR2);
}

for (VAR5 = 0; VAR5 < 100000; VAR5++)
{
unsigned int VAR11 = FUN2 (4);
switch (VAR11)
{
case 0:
{
const char *VAR9 = FUN7 ();
FUN4 (FUN11 (VAR1, VAR9)
== (FUN9 (VAR2, (VAR10)strcmp, VAR9) != NULL));
}
break;
case 1:
{
const char *VAR9 = FUN7 ();
FUN4 (FUN8 (VAR1, VAR9)
== (FUN9 (VAR2, (VAR10)strcmp, VAR9) != NULL
? false
: (FUN10 (VAR2, (VAR10)strcmp, VAR9), true)));
}
break;
case 2:
{
const char *VAR9 = FUN7 ();
FUN4 (FUN12 (VAR1, VAR9)
== FUN13 (VAR2, (VAR10)strcmp, VAR9));
}
break;
case 3:
{
const char *VAR9 = FUN7 ();
gl_oset_iterator_t VAR12 = FUN14 (VAR1, VAR13, VAR9);
size_t VAR14 = FUN15 (VAR2, VAR13, VAR9);
const void *VAR15;

if (VAR14 == (VAR16)(-1))
FUN4 (!FUN16 (&VAR12, &VAR15));
else
{
FUN4 (FUN16 (&VAR12, &VAR15));
FUN4 (VAR15 == FUN17 (VAR2, VAR14));
if (VAR14 + 1 == FUN18 (VAR2))
FUN4 (!FUN16 (&VAR12, &VAR15));
else
{
FUN4 (FUN16 (&VAR12, &VAR15));
FUN4 (VAR15 == FUN17 (VAR2, VAR14 + 1));
}
}
FUN19 (&VAR12);
}
break;
}
FUN6 (VAR1, VAR2);
}

FUN20 (VAR1);
FUN21 (VAR2);
}

FUN22 (VAR6);

return 0;
}