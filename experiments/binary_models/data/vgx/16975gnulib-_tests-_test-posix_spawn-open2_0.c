FUN1 (void)
{
VAR1 *VAR2;
char *argv[3] = { VAR3, "", NULL };
posix_spawn_file_actions_t VAR4;
bool VAR5;
int VAR6;
pid_t VAR7;
int VAR8;
int VAR9;


VAR2 = fopen (VAR10, "");
if (VAR2 == NULL)
{
FUN2 ("");
return 1;
}
fwrite ("", 1, 6, VAR2);
if (FUN3 (VAR2) || fclose (VAR2))
{
FUN2 ("");
return 1;
}


VAR5 = false;
if ((VAR6 = FUN4 (&VAR4)) != 0
|| (VAR5 = true,
(VAR6 = FUN5 (&VAR4, VAR11, VAR10, VAR12 | VAR13, 0600)) != 0
|| (VAR6 = FUN6 (&VAR7, VAR3, &VAR4, NULL, argv, VAR14)) != 0))
{
if (VAR5)
FUN7 (&VAR4);
VAR15 = VAR6;
FUN2 ("");
return 1;
}
FUN7 (&VAR4);
VAR8 = 0;
while (FUN8 (VAR7, &VAR8, 0) != VAR7)
;
if (!FUN9 (VAR8))
{
fprintf (VAR16, "", VAR8);
return 1;
}
VAR9 = FUN10 (VAR8);
if (VAR9 != 0)
{
fprintf (VAR16, "", VAR9);
return 1;
}


VAR2 = fopen (VAR10, "");
if (VAR2 == NULL)
{
FUN2 ("");
return 1;
}
char VAR17[1024];
int VAR18 = fread (VAR17, 1, sizeof (VAR17), VAR2);
if (!(VAR18 == 11 && memcmp (VAR17, "", 11) == 0))
{
fprintf (VAR16, "", VAR18, 11);
return 1;
}
if (fclose (VAR2))
{
FUN2 ("");
return 1;
}


unlink (VAR10);

return 0;
}