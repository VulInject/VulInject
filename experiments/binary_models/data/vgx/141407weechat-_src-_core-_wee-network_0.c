FUN1 (struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct addrinfo VAR5, *VAR6, *VAR7, *VAR8, *VAR9;
char VAR10[VAR11 + 1];
char VAR12[2], *VAR13, *VAR14;
char VAR15[VAR16 + 1];
char VAR17[1 + 5 + 1];
const char *VAR18;
int VAR19, VAR20, VAR21;
int VAR22, VAR23, VAR24, VAR25;
struct msghdr VAR26;
struct VAR27 *VAR28;
char VAR29[FUN2(sizeof (VAR22))];
struct iovec VAR30[1];
char VAR31[1] = { 0 };

int VAR32, VAR33, VAR34;
int VAR35, VAR36, VAR37, VAR38;
struct VAR39 **VAR40;
int VAR41;
struct timeval VAR42;

VAR6 = NULL;
VAR7 = NULL;
VAR40 = NULL;
VAR10[0] = '';

VAR12[1] = '';
VAR14 = NULL;

VAR13 = NULL;

FUN3 (&VAR42, NULL);
srand ((VAR42.VAR43 * VAR42.VAR44) ^ FUN4 ());

VAR4 = NULL;
if (FUN5(VAR2, VAR45)
&& FUN5(VAR2, VAR45)[0])
{
VAR4 = FUN6 (FUN5(VAR2, VAR45));
if (!VAR4)
{

snprintf (VAR17, sizeof (VAR17),
"", '' + VAR46);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
goto VAR48;
}
}


memset (&VAR5, 0, sizeof (VAR5));
VAR5.VAR49 = VAR50;
VAR5.VAR51 = VAR52;
FUN7 ();
if (VAR4)
{
VAR5.VAR53 = (FUN8(VAR4->VAR54[VAR55])) ?
VAR56 : VAR57;
snprintf (VAR10, sizeof (VAR10), "", FUN9(VAR4->VAR54[VAR58]));
VAR19 = getaddrinfo (FUN10(VAR4->VAR54[VAR59]),
VAR10, &VAR5, &VAR7);
}
else
{
VAR5.VAR53 = FUN5(VAR2, VAR60) ? VAR56 : VAR57;
snprintf (VAR10, sizeof (VAR10), "", FUN5(VAR2, VAR10));
VAR19 = getaddrinfo (FUN5(VAR2, VAR61), VAR10, &VAR5, &VAR7);
}

if (VAR19 != 0)
{

VAR14 = NULL;
VAR18 = FUN11 (VAR19);
if (VAR18)
{
VAR20 = 1 + 5 + strlen (VAR18) + 1;
VAR14 = malloc (VAR20);
if (VAR14)
{
snprintf (VAR14, VAR20, "",
'' + VAR62,
(int)strlen (VAR18), VAR18);
}
}
if (VAR14)
{
VAR21 = write (FUN5(VAR2, VAR47),
VAR14, strlen (VAR14));
}
else
{
snprintf (VAR17, sizeof (VAR17),
"", '' + VAR62);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
}
(void) VAR21;
goto VAR48;
}

if (!VAR7)
{

snprintf (VAR17, sizeof (VAR17),
"", '' + VAR62);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
goto VAR48;
}


if (FUN5(VAR2, VAR63)
&& FUN5(VAR2, VAR63[0]))
{
memset (&VAR5, 0, sizeof (VAR5));
VAR5.VAR53 = VAR56;
VAR5.VAR49 = VAR50;
VAR5.VAR51 = VAR52;
VAR19 = getaddrinfo (FUN5(VAR2, VAR63),
NULL, &VAR5, &VAR6);
if (VAR19 != 0)
{

VAR14 = NULL;
VAR18 = FUN11 (VAR19);
if (VAR18)
{
VAR20 = 1 + 5 + strlen (VAR18) + 1;
VAR14 = malloc (VAR20);
if (VAR14)
{
snprintf (VAR14, VAR20, "",
'' + VAR64,
(int)strlen (VAR18), VAR18);
}
}
if (VAR14)
{
VAR21 = write (FUN5(VAR2, VAR47),
VAR14, strlen (VAR14));
}
else
{
snprintf (VAR17, sizeof (VAR17),
"", '' + VAR64);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
}
(void) VAR21;
goto VAR48;
}

if (!VAR6)
{

snprintf (VAR17, sizeof (VAR17),
"", '' + VAR64);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
goto VAR48;
}
}




VAR41 = VAR56;
VAR35 = 0;
VAR37 = 0;
for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR65)
{
if (VAR8->VAR53 != VAR41)
if (VAR41 != VAR56)
VAR35++;

VAR37++;
VAR41 = VAR8->VAR53;
}
if (VAR41 != VAR56)
VAR35++;

VAR40 = malloc (sizeof (*VAR40) * VAR37);
if (!VAR40)
{
snprintf (VAR17, sizeof (VAR17),
"", '' + VAR66);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
goto VAR48;
}


VAR32 = FUN5(VAR2, VAR32);
if (VAR35 > 0)
{
VAR32 %= VAR35;
VAR34 = 0;

VAR41 = VAR56;
VAR36 = 0;
VAR38 = VAR34; 


for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR65)
{
if (VAR8->VAR53 != VAR41)
{
if (VAR41 != VAR56)
VAR36++;

VAR38 = VAR34;
}

if (VAR36 >= VAR32)
{

VAR33 = VAR38 + (rand () % ((VAR34 + 1) - VAR38));
if (VAR33 == VAR34)
VAR40[VAR34++] = VAR8;
else
{
VAR40[VAR34++] = VAR40[VAR33];
VAR40[VAR33] = VAR8;
}
}

VAR41 = VAR8->VAR53;
}

VAR41 = VAR56;
VAR36 = 0;
VAR38 = VAR34; 


for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR65)
{
if (VAR8->VAR53 != VAR41)
{
if (VAR41 != VAR56)
VAR36++;

VAR38 = VAR34;
}

if (VAR36 < VAR32)
{

VAR33 = VAR38 + (rand () % ((VAR34 + 1) - VAR38));
if (VAR33 == VAR34)
VAR40[VAR34++] = VAR8;
else
{
VAR40[VAR34++] = VAR40[VAR33];
VAR40[VAR33] = VAR8;
}
}
else
break;

VAR41 = VAR8->VAR53;
}
}
else
{

snprintf (VAR17, sizeof (VAR17),
"", '' + VAR67);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
goto VAR48;
}

VAR12[0] = '' + VAR67;


VAR22 = -1;
for (VAR34 = 0; VAR34 < VAR37; VAR34++)
{
VAR8 = VAR40[VAR34];

if (VAR68)
{

VAR22 = socket (VAR8->VAR53,
VAR8->VAR49,
VAR8->VAR69);
}
else
{

VAR22 = -1;
for (VAR25 = 0; VAR25 < VAR70; VAR25++)
{
if (VAR8->VAR53 == VAR57)
{
VAR22 = FUN5(VAR2, VAR71[VAR25]);
if (VAR22 != -1)
{
FUN5(VAR2, VAR71[VAR25]) = -1;
break;
}
}
else if (VAR8->VAR53 == VAR72)
{
VAR22 = FUN5(VAR2, VAR73[VAR25]);
if (VAR22 != -1)
{
FUN5(VAR2, VAR73[VAR25]) = -1;
break;
}
}
}
if (VAR22 < 0)
continue;
}
if (VAR22 < 0)
{
VAR12[0] = '' + VAR74;
continue;
}


VAR23 = 1;
FUN12 (VAR22, VAR75, VAR76, (void *) &VAR23, sizeof (VAR23));


VAR23 = 1;
FUN12 (VAR22, VAR75, VAR77, (void *) &VAR23, sizeof (VAR23));


VAR24 = FUN13 (VAR22, VAR78);
if (VAR24 == -1)
VAR24 = 0;
FUN13 (VAR22, VAR79, VAR24 | VAR80);

if (VAR6)
{
VAR19 = -1;


for (VAR9 = VAR6; VAR9; VAR9 = VAR9->VAR65)
{
if (VAR9->VAR53 != VAR8->VAR53)
continue;

VAR19 = FUN14 (VAR22, VAR9->VAR81, VAR9->VAR82);
if (VAR19 < 0)
continue;
}

if (VAR19 < 0)
{
VAR12[0] = '' + VAR64;
close (VAR22);
VAR22 = -1;
continue;
}
}


if (FUN15 (VAR22, VAR8->VAR81, VAR8->VAR82))
{
VAR12[0] = '' + VAR83;
VAR19 = getnameinfo (VAR8->VAR81, VAR8->VAR82,
VAR15, sizeof (VAR15),
NULL, 0, VAR84);
if (VAR19 == 0)
VAR13 = VAR15;
break;
}
else
{
VAR12[0] = '' + VAR85;
close (VAR22);
VAR22 = -1;
}
}

FUN5(VAR2, VAR22) = VAR22;

if (VAR4 && VAR12[0] == '' + VAR83)
{
if (!FUN16 (FUN5(VAR2, VAR45),
FUN5(VAR2, VAR22),
FUN5(VAR2, VAR61),
FUN5(VAR2, VAR10)))
{

VAR12[0] = '' + VAR46;
}
}

if (VAR12[0] == '' + VAR83)
{
VAR14 = NULL;
if (VAR13)
{
VAR20 = strlen (VAR12) + 5 + strlen (VAR13) + 1;
VAR14 = malloc (VAR20);
if (VAR14)
{
snprintf (VAR14, VAR20, "",
VAR12, (int)strlen (VAR13), VAR13);
}
}

if (VAR14)
{
VAR21 = write (FUN5(VAR2, VAR47),
VAR14, strlen (VAR14));
(void) VAR21;
}
else
{
snprintf (VAR17, sizeof (VAR17),
"", VAR12);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
}


if (VAR68)
{
memset (&VAR26, 0, sizeof (VAR26));
VAR26.VAR86 = VAR29;
VAR26.VAR87 = sizeof (VAR29);


memset (VAR30, 0, sizeof (VAR30));
VAR30[0].VAR88 = VAR31;
VAR30[0].VAR89 = 1;
VAR26.VAR90 = VAR30;
VAR26.VAR91 = 1;

VAR28 = FUN17(&VAR26);
VAR28->VAR92 = VAR75;
VAR28->VAR93 = VAR94;
VAR28->VAR95 = FUN18(sizeof (VAR22));
memcpy (FUN19(VAR28), &VAR22, sizeof (VAR22));
VAR26.VAR87 = VAR28->VAR95;
VAR21 = sendmsg (FUN5(VAR2, VAR96), &VAR26, 0);
(void) VAR21;
}
else
{
VAR21 = write (FUN5(VAR2, VAR47), &VAR22, sizeof (VAR22));
(void) VAR21;
}
}
else
{
snprintf (VAR17, sizeof (VAR17),
"", VAR12);
VAR21 = write (FUN5(VAR2, VAR47),
VAR17, strlen (VAR17));
(void) VAR21;
}

VAR48:
if (VAR14)
free (VAR14);
if (VAR40)
free (VAR40);
if (VAR6)
FUN20 (VAR6);
if (VAR7)
FUN20 (VAR7);
}