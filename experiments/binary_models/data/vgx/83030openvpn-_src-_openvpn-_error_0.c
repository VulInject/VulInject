void
FUN1(const unsigned int VAR1, const char *VAR2, va_list VAR3)
{
struct gc_arena VAR4;
int VAR5;
char *VAR6;
char *VAR7;
char *VAR8;
int VAR9;
const char *VAR10;
const char *VAR11;

void FUN2(void);


if (!FUN3(VAR1))
{
return;
}

bool VAR12 = false;
VAR9 = FUN4(&VAR12);



if (!FUN5(VAR1))
{
return;
}

FUN6(&VAR4);

VAR6 = (char *) FUN7(VAR13, false, &VAR4);
VAR7 = (char *) FUN7(VAR13, false, &VAR4);

vsnprintf(VAR6, VAR13, VAR2, VAR3);
VAR6[VAR13 - 1] = 0; 

if ((VAR1 & VAR14) && VAR9)
{
FUN8(VAR7, VAR13, "",
VAR6, FUN9(VAR9, VAR12, &VAR4), VAR9);
VAR15;
}

if (VAR1 & VAR16)
{
FUN8(VAR7, VAR13, "", VAR6);
VAR15;
}

if (VAR1 & (VAR17|VAR18|VAR19))
{
VAR5 = VAR20;
}
else if (VAR1 & VAR21)
{
VAR5 = VAR22;
}
else
{
VAR5 = VAR23;
}


if (VAR1 & VAR24)
{
VAR10 = NULL;
}
else
{
VAR10 = FUN10();
}
VAR11 = "";
if (!VAR10)
{
VAR11 = VAR10 = "";
}


if (!VAR25)
{
const struct VAR26 *VAR27 = FUN11();
if (VAR27)
{
FUN8(VAR7, VAR13, "",
VAR10,
VAR11,
VAR6);
FUN12(VAR27, VAR1, VAR7);
}
}

if (!(VAR1 & VAR28))
{
if (VAR29 && !VAR30 && !VAR25)
{
syslog(VAR5, "",
VAR10,
VAR11,
VAR6);
}
else
{
VAR31 *VAR32 = FUN13(VAR1);
const bool VAR33 = FUN14(VAR34);

if (VAR35)
{
struct timeval VAR36;
FUN15(&VAR36, NULL);

fprintf(VAR32, "" VAR37 "",
(VAR38)VAR36.VAR39,
(long)VAR36.VAR40,
VAR1,
VAR10,
VAR11,
VAR6,
"");

}
else if ((VAR1 & VAR41) || VAR42)
{
fprintf(VAR32, "",
VAR10,
VAR11,
VAR6,
(VAR1&VAR43) ? "" : "");
}
else
{
fprintf(VAR32, "",
FUN16(0, 0, VAR33, &VAR4),
VAR10,
VAR11,
VAR6,
(VAR1&VAR43) ? "" : "");
}
FUN17(VAR32);
++VAR44;
}
}

if (VAR1 & VAR17)
{
FUN18(VAR45, "");
}

if (VAR1 & VAR17)
{
FUN19(VAR46); 

}
if (VAR1 & VAR19)
{
FUN2();
}

FUN20(&VAR4);
}