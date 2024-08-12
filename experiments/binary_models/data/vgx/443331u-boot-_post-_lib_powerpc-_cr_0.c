int FUN1 (void)
{
int VAR1 = 0;
unsigned int VAR2;
unsigned long VAR3;
int VAR4 = FUN2();

asm ( "" : "" (VAR3) : );

for (VAR2 = 0; VAR2 < VAR5 && VAR1 == 0; VAR2++)
{
ulong VAR6 = VAR7[VAR2];
ulong VAR8;

unsigned long VAR9[] =
{
FUN3(3),
FUN4(3),
VAR10,
};

FUN5 (VAR9, &VAR8, VAR6);

VAR1 = VAR8 == VAR6 ? 0 : -1;

if (VAR1 != 0)
{
FUN6 ("", VAR2);
}
}

for (VAR2 = 0; VAR2 < VAR11 && VAR1 == 0; VAR2++)
{
struct VAR12 *VAR13 = VAR14 + VAR2;
ulong VAR8;
ulong VAR15;

unsigned long VAR9[] =
{
FUN7(3),
FUN8(VAR13->VAR6),
FUN4(3),
FUN9(4),
VAR10,
};

FUN10 (VAR9, &VAR8, &VAR15, VAR13->VAR15);

VAR1 = VAR15 == 0 && ((VAR8 << (4 * VAR13->VAR6)) & 0xe0000000) == VAR13->VAR15 ?
0 : -1;

if (VAR1 != 0)
{
FUN6 ("", VAR2);
}
}

for (VAR2 = 0; VAR2 < VAR16 && VAR1 == 0; VAR2++)
{
struct VAR17 *VAR13 = VAR18 + VAR2;
ulong VAR8;

unsigned long VAR9[] =
{
FUN3(3),
FUN11(VAR13->VAR19, VAR13->VAR20),
FUN4(3),
VAR10,
};

FUN5 (VAR9, &VAR8, VAR13->VAR6);

VAR1 = VAR8 == VAR13->VAR8 ? 0 : -1;

if (VAR1 != 0)
{
FUN6 ("", VAR2);
}
}

for (VAR2 = 0; VAR2 < VAR21 && VAR1 == 0; VAR2++)
{
struct VAR22 *VAR13 = VAR23 + VAR2;
ulong VAR8;

unsigned long VAR9[] =
{
FUN3(3),
FUN12(VAR13->VAR24, VAR13->VAR25, VAR13->VAR26, VAR13->VAR27),
FUN4(3),
VAR10,
};

FUN5 (VAR9, &VAR8, VAR13->VAR6);

VAR1 = VAR8 == VAR13->VAR8 ? 0 : -1;

if (VAR1 != 0)
{
FUN6 ("", VAR2);
}
}

asm ( "" : : "" (VAR3));

if (VAR4)
FUN13();

return VAR1;
}