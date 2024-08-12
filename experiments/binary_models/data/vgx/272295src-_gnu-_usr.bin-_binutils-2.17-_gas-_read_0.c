FUN1 (char *VAR1)
{
register char VAR2;
register char *VAR3;		
register int VAR4;
VAR5 *VAR6;

VAR7 = 0;

VAR8 = FUN2 (VAR1);

FUN3 (VAR1);
FUN4 (NULL);
FUN5 (VAR1);


FUN6 ();

while ((VAR9 = FUN7 (&VAR10)) != 0)
{				

static char *VAR11;

VAR11 = NULL;
FUN8 (VAR9[-1] == '');	

while (VAR10 < VAR9)
{



if (VAR12[(unsigned char) VAR10[-1]])
{
FUN9 ();
if (VAR10[-1] == '')
FUN10 ();

VAR13 = NULL;

if (VAR14 || VAR15)
{

if (FUN11 (*VAR10))
{
char *VAR16 = VAR10;
char VAR2;
int VAR17;

FUN12 ();
FUN13 ();

VAR2 = FUN14 ();


VAR17 = 0;
if (VAR15)
{
char *VAR18 = VAR10 + 1;

if (*VAR18 == '')
++VAR18;
if (*VAR18 == '' || *VAR18 == '')
++VAR18;
if ((FUN15 (VAR18, "", 3) == 0
|| FUN15 (VAR18, "", 3) == 0)
&& (VAR18[3] == '' || VAR18[3] == ''))
{
VAR10 = VAR18 + 3;
FUN16 (VAR16,
FUN15 (VAR18, "", 3) == 0);
continue;
}
if (FUN15 (VAR18, "", 5) == 0
&& (VAR18[5] == ''
|| VAR18[5] == ''
|| VAR12[(unsigned char) VAR18[5]]))
VAR17 = 1;
}


if (!VAR17
&& FUN17(VAR2,
VAR10)
)
VAR13 = FUN18 (VAR16);
else
VAR13 = FUN19 (VAR16,
VAR19,
(VAR20) 0,
&VAR21);

*VAR10 = VAR2;
if (VAR2 == '')
VAR10++;
}
}
}


if ((VAR2 = *VAR10++) == ''
|| VAR2 == ''
|| VAR2 == ''
|| VAR2 == 0)
VAR2 = *VAR10++;

FUN8 (VAR2 != '');	


if (VAR22)
{
if ((VAR22 & VAR23) && VAR24 > 0)
{
char *copy;
int VAR25;


VAR3 = FUN20 (VAR10 - 1, VAR15);

if (VAR3 != VAR11)
{
VAR11 = VAR3;

VAR25 = VAR3 - (VAR10 - 1);
copy = (char *) xmalloc (VAR25 + VAR24 + 2);
memset (copy, '', VAR24);
copy[VAR24] = '';
memcpy (copy + VAR24 + 1, VAR10 - 1, VAR25);
copy[VAR24 + 1 + VAR25] = '';


FUN4 (copy);
}
}
else
FUN4 (NULL);
}

if (FUN11 (VAR2))
{

FUN13 ();

VAR3 = --VAR10;
VAR2 = FUN14 ();	


if (FUN21 (VAR2, VAR10))
{
if (VAR15)
{
char *VAR18 = VAR10 + 1;


if (*VAR18 == '')
++VAR18;

if (*VAR18 == '' || *VAR18 == '')
++VAR18;

if ((FUN15 (VAR18, "", 3) == 0
|| FUN15 (VAR18, "", 3) == 0)
&& (VAR18[3] == '' || VAR18[3] == ''))
{
VAR10 = VAR18 + 3;
FUN16 (VAR3, 1);
continue;
}
}

VAR13 = FUN18 (VAR3);	

*VAR10++ = '';
FUN22 (VAR13);

FUN23 ();
}
else if (VAR10[1] == ''
&& (VAR2 == ''
|| ((VAR2 == '' || VAR2 == '')
&& VAR10[2] == '')))
{
FUN16 (VAR3, -1);
FUN24 ();
}
else if ((VAR2 == ''
|| ((VAR2 == '' || VAR2 == '')
&& VAR10[1] == ''))
&& !FUN25 (VAR2, VAR3)
)
{
FUN16 (VAR3, 1);
FUN24 ();
}
else
{

VAR6 = NULL;

{
char *VAR26 = VAR3;

strncpy (VAR27, VAR26, sizeof (VAR27));
VAR27[sizeof (VAR27) - 1] = 0;

while (*VAR26)
{
*VAR26 = FUN26 (*VAR26);
VAR26++;
}
}
if (VAR28 || VAR15)
{

VAR6 = (VAR5 *) FUN27 (VAR29, VAR3);
if (VAR6 != NULL && VAR6->VAR30 == NULL)
VAR6 = NULL;
}

if (VAR6 != NULL
|| (!VAR15 && *VAR3 == ''))
{


if (VAR6 == NULL)
VAR6 = (VAR5 *) FUN27 (VAR29, VAR3 + 1);
if (VAR6 && !VAR6->VAR30)
VAR6 = NULL;


if (VAR31
&& (VAR6 == NULL
|| !((VAR6->VAR30 == VAR32
&& VAR6->VAR33 == 1)
|| (VAR6->VAR30 == VAR34
&& VAR6->VAR33 == 1)
|| FUN28 (VAR6)
|| VAR6->VAR30 == VAR35
|| VAR6->VAR30 == VAR36
|| VAR6->VAR30 == VAR37
|| VAR6->VAR30 == VAR38
|| VAR6->VAR30 == VAR39
|| VAR6->VAR30 == VAR40
|| VAR6->VAR30 == VAR41
|| VAR6->VAR30 == VAR42)))
{
FUN29 (1, (char *) NULL, 0, 0);
VAR31 = 0;

if (VAR13 != NULL)
{
FUN30 (VAR13, VAR43);
FUN31 (VAR13, FUN32 ());
}
}


if (VAR6 == NULL)
{
char *VAR44 = VAR10;

*VAR10 = VAR2;
FUN33 (0);
VAR2 = *--VAR10;
*VAR10 = '';
if (! VAR45 || ! FUN34 (VAR2, VAR3))
{
*VAR44 = '';
FUN35 (FUN36(""), VAR3);
*VAR10++ = VAR2;
}
continue;
}


*VAR10 = VAR2;

if (VAR2 == '' || VAR2 == '')
VAR10++;


(*VAR6->VAR30) (VAR6->VAR33);


if (VAR6->VAR30 == VAR46)
goto VAR47;
}
else
{


*VAR10 = VAR2;
VAR10 = FUN37 (VAR10, VAR15, 1);
VAR2 = *VAR10;
*VAR10 = '';

FUN38 ();

if (VAR45 && FUN34 (VAR2, VAR3))
continue;

if (VAR31)
{
FUN29 (1, (char *) NULL, 0, 0);
VAR31 = 0;
if (VAR13 != NULL)
{
FUN30 (VAR13, VAR43);
FUN31 (VAR13, FUN32 ());
}
}

FUN39 (VAR3);	

*VAR10++ = VAR2;


}
}
continue;
}


if (VAR12[(unsigned char) VAR2])
continue;

if ((VAR48 || VAR49) && FUN40 (VAR2))
{

char *VAR50 = VAR10;

FUN13 ();

VAR4 = VAR2 - '';


while (FUN40 (*VAR10))
{
VAR4 = (VAR4 * 10) + *VAR10 - '';
++VAR10;
}

if (VAR48
&& *VAR10 == ''
&& *(VAR10 + 1) == '')
{
VAR10 += 2;

if (FUN41 (VAR4))
{
FUN42 (FUN36(""%VAR51$\""), VAR4);
}

FUN43 (VAR4);
FUN18 (FUN44 (VAR4, 0));
continue;
}

if (VAR49
&& *VAR10++ == '')
{
FUN45 (VAR4);
FUN18 (FUN46 (VAR4, 0));
continue;
}

VAR10 = VAR50;
}			

if (VAR2 && strchr (VAR52, VAR2))
{			
sb VAR53;
char *VAR54;
char *VAR55;
char *VAR56;
unsigned int VAR57;
char *VAR58 = 0;

FUN10 ();
VAR3 = VAR10;
if (FUN47 (VAR3, "", 4))
continue;	
VAR3 += 4;

FUN48 (&VAR53);
VAR54 = strstr (VAR3, "");

if (!VAR54)
{
unsigned int VAR59;
unsigned int VAR60;


VAR59 = VAR9 - VAR3;
VAR58 = xmalloc (VAR59 + 1);
memcpy (VAR58, VAR3, VAR59);
do
{
VAR56 = FUN7 (&VAR8);
if (!VAR56)
break;
else
VAR9 = VAR56;
VAR10 = VAR8;
VAR54 = strstr (VAR8, "");
if (VAR54)
VAR60 = VAR54 - VAR8;
else
VAR60 = VAR9 - VAR8;

VAR58 = xrealloc (VAR58, VAR59 + VAR60);
memcpy (VAR58 + VAR59, VAR8, VAR60);
VAR59 += VAR60;
}
while (!VAR54);

VAR10 = VAR54 ? VAR54 + 8 : NULL;

VAR3 = VAR58;
VAR54 = VAR3 + VAR59;

}
else
{
VAR10 = VAR54 + 8;
}

VAR61 = VAR3;
VAR62 = VAR54;

VAR57 = VAR54 - VAR3;
VAR55 = (char *) xmalloc (VAR57);
VAR56 = VAR55;
for (;;)
{
int VAR63;
int VAR64;

VAR63 = (VAR55 + VAR57) - VAR56;
VAR64 = FUN49 (VAR65, VAR56, VAR63);

if (VAR64 < VAR63)
{
VAR56[VAR64] = 0;
break;
}

VAR55 = xrealloc (VAR55, VAR57 + 100);
VAR56 = VAR55 + VAR57;
VAR57 += 100;
}

if (VAR58)
free (VAR58);


FUN50 (&VAR53, VAR55);
FUN51 (&VAR53, VAR10, 0);
FUN52 (&VAR53);
VAR9 = FUN7 (&VAR10);
free (VAR55);
continue;
}

FUN13 ();

if (FUN53 (VAR2))
continue;
VAR10--;

FUN24 ();
}

FUN54 ();
}

VAR47:

FUN55 ();

FUN56 ();
{
if (VAR66 && VAR7)
FUN57 (VAR67, VAR7,
"");
}
}