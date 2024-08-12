int FUN1(const char *VAR1, const char *VAR2)
{
struct VAR3 *VAR4 = FUN2();
if (!VAR4)
return -1;

struct KeyEvent VAR5 = { VAR6, VAR6 };
int VAR7;
bool VAR8 = true;
int VAR9 = 1;

struct VAR10 *VAR11 = NULL;
if (FUN3(VAR12))
{
struct VAR10 *VAR13 = FUN4(VAR14);
VAR13 = FUN5(VAR13, FUN4(VAR15));

VAR11 = FUN4(VAR12);
VAR11 = FUN5(VAR13, VAR11);
}

struct VAR3 *VAR16 = FUN6(VAR4);
enum MuttCursorState VAR17 = FUN7(VAR18);
FUN8(NULL);
while (true)
{
if (VAR8 || VAR19)
{
VAR8 = false;
if (VAR19)
{
VAR19 = false;
FUN9();
FUN10(VAR20, true);
FUN8(NULL);
}
if (VAR4->VAR21.VAR22)
{
int VAR23 = FUN11(VAR1) + 2; 

if (VAR11)
VAR23 -= 2 * FUN12(VAR2);

VAR9 = (VAR23 + VAR4->VAR21.VAR22 - 1) / VAR4->VAR21.VAR22;
VAR9 = FUN13(1, FUN14(3, VAR9));
}
if (VAR9 != VAR4->VAR21.VAR24)
{
FUN15(VAR9);
FUN8(NULL);
}

FUN16(VAR4, 0, 0);

if (VAR11)
{
char *VAR25 = NULL;

while ((VAR25 = strchr(VAR1, '')))
{

FUN17(VAR15);
FUN18(VAR4, VAR1, VAR25 - VAR1);

if (FUN19(VAR25[1]) && (VAR25[2] == ''))
{

FUN20(VAR11);
FUN21(VAR4, VAR25[1]);
VAR1 = VAR25 + 3;
}
else
{

FUN21(VAR4, VAR25[0]);
VAR1 = VAR25 + 1;
}
}
}

FUN17(VAR15);
FUN22(VAR4, VAR1);
FUN23(VAR14);

FUN21(VAR4, '');
FUN24(VAR4);
}

FUN25();

VAR5 = FUN26(30 * 1000);
if (VAR5.VAR26 == VAR27)
continue;
if (VAR5.VAR26 == VAR28 || FUN27(VAR5.VAR5))
{
VAR7 = -1;
break;
}
else
{
char *VAR29 = strchr(VAR2, VAR5.VAR5);
if (VAR29)
{
VAR7 = VAR29 - VAR2 + 1;
break;
}
else if ((VAR5.VAR5 <= '') && (VAR5.VAR5 > ''))
{
VAR7 = VAR5.VAR5 - '';
if (VAR7 <= FUN12(VAR2))
break;
}
}
FUN28(false);
}

if (VAR4->VAR21.VAR24 == 1)
{
FUN29(VAR4, 0);
}
else
{
FUN15(1);
FUN8(NULL);
}

FUN23(VAR14);
FUN6(VAR16);
FUN7(VAR17);
FUN25();
return VAR7;
}