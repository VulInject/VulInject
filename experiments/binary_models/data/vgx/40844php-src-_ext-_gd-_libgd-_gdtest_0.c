main (int argc, char **argv)
{
gdImagePtr VAR1, VAR2, VAR3, VAR4;
VAR5 *VAR6, *VAR7;
void *VAR8;
int VAR9;
gdIOCtxPtr VAR10;
char VAR11[256];
int VAR12, VAR13;
gdSource VAR14;
gdSink VAR15;
int VAR16;
int VAR17;
if (argc != 2)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR6 = fopen (argv[1], "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR1 = FUN2 (VAR6);

FUN3 (VAR6);
VAR2 = FUN2 (VAR6);

fclose (VAR6);

FUN4 ("", VAR2->VAR19);

FUN5 ("", VAR2, VAR1);





snprintf (VAR11, sizeof(VAR11), "", argv[1]);
VAR7 = fopen (VAR11, "");
FUN6 (VAR1, VAR7);
fclose (VAR7);

VAR6 = fopen (VAR11, "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN2 (VAR6);
fclose (VAR6);

FUN5 ("", VAR2, VAR3);

unlink (VAR11);
FUN7 (VAR3);

VAR8 = FUN8 (VAR1, &VAR9);
VAR10 = FUN9 (VAR9, VAR8);
VAR3 = FUN10 (VAR10);

FUN5 ("", VAR2, VAR3);

FUN7 (VAR3);
VAR10->FUN11 (VAR10);





snprintf (VAR11, sizeof(VAR11), "", argv[1]);
VAR7 = fopen (VAR11, "");
FUN12 (VAR1, VAR7, 128, 2);
fclose (VAR7);

VAR6 = fopen (VAR11, "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN13 (VAR6);
fclose (VAR6);

FUN5 ("", VAR2, VAR3);

unlink (VAR11);
FUN7 (VAR3);

VAR8 = FUN14 (VAR1, 128, 2, &VAR9);

VAR10 = FUN9 (VAR9, VAR8);

VAR3 = FUN15 (VAR10);


FUN5 ("", VAR2, VAR3);

FUN7 (VAR3);
VAR10->FUN11 (VAR10);





snprintf (VAR11, sizeof(VAR11), "", argv[1]);
VAR7 = fopen (VAR11, "");
FUN16 (VAR1, VAR7);
fclose (VAR7);

VAR6 = fopen (VAR11, "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN17 (VAR6);
fclose (VAR6);

FUN5 ("", VAR2, VAR3);

unlink (VAR11);
FUN7 (VAR3);

VAR8 = FUN18 (VAR1, &VAR9);

VAR10 = FUN9 (VAR9, VAR8);

VAR3 = FUN19 (VAR10);


FUN5 ("", VAR2, VAR3);

FUN7 (VAR3);
VAR10->FUN11 (VAR10);



VAR6 = fopen (argv[1], "");

VAR14.VAR20 = VAR21;
VAR14.VAR22 = VAR6;
VAR3 = FUN20 (&VAR14);
fclose (VAR6);

if (VAR3 == NULL)
{
FUN4 ("");
}
else
{
FUN5 ("", VAR2, VAR3);
FUN7 (VAR3);
};




snprintf (VAR11, sizeof(VAR11), "", argv[1]);
VAR7 = fopen (VAR11, "");
VAR15.VAR23 = VAR24;
VAR15.VAR22 = VAR7;
FUN21 (VAR1, &VAR15);
fclose (VAR7);
VAR6 = fopen (VAR11, "");
if (!VAR6)
{
fprintf (VAR18, "");
}
else
{
VAR3 = FUN2 (VAR6);
fclose (VAR6);

FUN5 ("", VAR2, VAR3);
FUN7 (VAR3);
};

unlink (VAR11);




VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN2 (VAR6);
fclose (VAR6);


VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR4 = FUN22 (VAR6, 200, 300, 150, 100);
fclose (VAR6);

FUN5 ("", VAR3, VAR4);

FUN7 (VAR3);
FUN7 (VAR4);




VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN2 (VAR6);
fclose (VAR6);

VAR4 = FUN23 (100, 60);
VAR12 = FUN24 (VAR4, 255, 0, 0);
VAR13 = FUN24 (VAR4, 0, 0, 255);
FUN25 (VAR4, 0, 0, 49, 30, VAR12);
FUN25 (VAR4, 50, 30, 99, 59, VAR13);

FUN26 (VAR3, VAR4, 150, 200, 10, 10, 90, 50, 50);
FUN26 (VAR3, VAR4, 180, 70, 10, 10, 90, 50, 50);

FUN27 (VAR3, VAR4, 250, 160, 10, 10, 90, 50, 50);
FUN27 (VAR3, VAR4, 80, 70, 10, 10, 90, 50, 50);

FUN7 (VAR4);

VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR4 = FUN2 (VAR6);
fclose (VAR6);

FUN4 ("", VAR3->VAR19);
FUN5 ("", VAR3, VAR4);

FUN7 (VAR3);
FUN7 (VAR4);

VAR7 = fopen ("", "");
if (!VAR7)
{
fprintf (VAR18, "");
FUN1 (1);
}
FUN28 (VAR1, VAR7, -1);
fclose (VAR7);
VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN29 (VAR6);
fclose (VAR6);
if (!VAR3)
{
fprintf (VAR18, "");
FUN1 (1);
}
FUN7 (VAR3);
FUN4 (""
""
"");

fprintf (VAR18, ""
"");
VAR16 = FUN30 (VAR1, 0, 0, 0);
fprintf (VAR18, "", VAR16);
if (VAR16 == -1)
{
fprintf (VAR18, "");
}
else
{
VAR7 = fopen ("", "");
if (!VAR7)
{
fprintf (VAR18, "");
FUN1 (1);
}
FUN31 (VAR1, VAR16, VAR7);
fclose (VAR7);
VAR6 = fopen ("", "");
if (!VAR6)
{
fprintf (VAR18, "");
FUN1 (1);
}
VAR3 = FUN32 (VAR6);
fprintf (VAR18, "", FUN33 (VAR3));
fprintf (VAR18, "");
for (VAR17 = 0; (VAR17 < FUN33 (VAR3)); VAR17++)
{
fprintf (VAR18, "",
FUN34 (VAR3, VAR17),
FUN35 (VAR3, VAR17),
FUN36 (VAR3, VAR17));
}
fclose (VAR6);
if (!VAR3)
{
fprintf (VAR18, "");
FUN1 (1);
}
FUN5 ("", VAR2, VAR3);
VAR7 = fopen ("", "");
if (!VAR7)
{
fprintf (VAR18, "");
FUN1 (1);
}
FUN6 (VAR3, VAR7);
fclose (VAR7);
FUN7 (VAR3);
}
FUN7 (VAR1);
FUN7 (VAR2);

return 0;
}