FUN1 (char *VAR1, int VAR2)
{
struct sockaddr_in VAR3;
struct sockaddr_in VAR4;
struct sockaddr_in VAR5;
struct VAR6 *VAR7;
struct VAR8 *new;
int VAR9 = 0;
unsigned int VAR10;
int VAR11;
int VAR12, VAR13;
int VAR14;
int VAR15 = 1;



VAR11 = socket (VAR16, VAR17, 0);
if (VAR11 < 0)
{
fprintf (VAR18,
"");
return NULL;
}



memset (&VAR4, 0, sizeof (struct VAR19));
VAR4.VAR20 = VAR16;
VAR4.VAR21.VAR22 = FUN2 (VAR23);
VAR4.VAR24 = FUN3 (VAR2+1);
VAR9 = sizeof (struct VAR19);
VAR4.VAR25 = VAR9;


VAR14 = FUN4 (VAR11, VAR26,
VAR27, (void *) &VAR15, sizeof (VAR15));
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR11);
return NULL;
}

VAR14 = FUN4 (VAR11, VAR26, VAR28,
(void *) &VAR15, sizeof (VAR15));
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR11);
return NULL;
}


VAR14 = FUN5 (VAR11, (struct VAR29 *) &VAR4, VAR9);
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR11);
return NULL;
}


VAR14 = FUN6 (VAR11, VAR30);
if (VAR14 < 0)
{
fprintf (VAR18, "", FUN7 (VAR31));
close (VAR11);
return NULL;
}



VAR7 = FUN8 (VAR1);
if (!VAR7)
{
fprintf (VAR18, "", VAR1);
close (VAR11);
return NULL;
}

VAR12 = socket (VAR16, VAR17, 0);
if (VAR12 < 0)
{
fprintf (VAR18,
"");
return NULL;
}



VAR14 = FUN4 (VAR12, VAR26,
VAR27, (void *) &VAR15, sizeof (VAR15));
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR12);
return NULL;
}

VAR14 = FUN4 (VAR12, VAR26, VAR28,
(void *) &VAR15, sizeof (VAR15));
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR12);
return NULL;
}




memset (&VAR3, 0, sizeof (struct VAR19));
VAR3.VAR20 = VAR16;
VAR3.VAR24 = FUN3 (VAR2);
VAR3.VAR25 = sizeof (struct VAR19);

VAR14 = FUN5 (VAR12, (struct VAR29 *) &VAR3, VAR9);
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR12);
return NULL;
}


memcpy (&VAR3.VAR21, VAR7->VAR32, VAR7->VAR33);
VAR3.VAR20 = VAR16;
VAR3.VAR24 = FUN3(FUN9 ());
VAR3.VAR25 = sizeof (struct VAR19);


VAR14 = connect (VAR12, (struct VAR29 *) &VAR3,
sizeof (struct VAR19));
if (VAR14 < 0)
{
fprintf (VAR18, "");
close (VAR11);
close (VAR12);
return NULL;
}


VAR10 = sizeof (struct VAR19);
memset (&VAR5, 0, VAR10);

VAR13 =
FUN10 (VAR11, (struct VAR29 *) &VAR5, &VAR10);
if (VAR13 < 0)
{
fprintf (VAR18, "");
close (VAR11);
close (VAR12);
return NULL;
}


close (VAR11);


new = FUN11 (VAR34, sizeof (struct VAR8));


new->VAR35 = VAR12;
new->VAR36 = VAR13;

return new;
}