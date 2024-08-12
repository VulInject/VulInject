FUN1 (void)
{
int VAR1;
pid_t VAR2;

FUN2 (NULL);

VAR2 = FUN3 ();
if (VAR2 == (VAR3)-1)
{
FUN4 (VAR4, "", strerror (VAR5));
FUN5 (1);
}
if (VAR2)
FUN5 (0);

if (FUN6() == -1)
{
FUN4 (VAR4, "", strerror(VAR5));
FUN5 (1);
}

signal (VAR6, VAR7);

VAR2 = FUN3 ();
if (VAR2 == (VAR3)-1)
{
FUN4 (VAR4, VAR8 "", strerror (VAR5));
FUN5 (1);
}
if (VAR2)
FUN5 (0); 

VAR9 = 1;

if (FUN7(""))
{
FUN4 (VAR4, ""/\"", strerror (VAR5));
FUN5 (1);
}
FUN8 (0);

for (VAR1=0; VAR1 <= 2; VAR1++)
close (VAR1);

FUN9 (VAR8, VAR10, VAR11);
}