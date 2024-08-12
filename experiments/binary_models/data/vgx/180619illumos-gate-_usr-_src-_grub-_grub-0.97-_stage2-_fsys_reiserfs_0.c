FUN1 (void)
{
unsigned int VAR1 = VAR2->VAR3;
unsigned int VAR4;
unsigned int VAR5;
unsigned int VAR6;
struct reiserfs_journal_header VAR7;
struct reiserfs_journal_desc   VAR8;
struct reiserfs_journal_commit VAR9;
VAR10 *VAR11 = VAR12;

FUN2 (VAR1, sizeof (VAR7), (char *) &VAR7);
VAR4 = VAR7.VAR13;
if (VAR4 >= VAR1)
return 0;

VAR2->VAR14 = VAR4;
VAR6 = VAR7.VAR15 + 1;

FUN3 ("", 
VAR7.VAR15);

while (1) 
{
FUN2 (VAR4, sizeof (VAR8), (char *) &VAR8);
if (FUN4 (VAR16, VAR8.VAR17) > 0
|| VAR8.VAR18 != VAR6
|| VAR8.VAR19 != VAR7.VAR19)

break;

VAR5 = (VAR4 + VAR8.VAR20 + 1) & (VAR1 - 1);
FUN2 (VAR5, sizeof (VAR9), (char *) &VAR9);
if (VAR8.VAR18 != VAR9.VAR18
|| VAR8.VAR20 != VAR9.VAR20)

break;

FUN3 ("", 
VAR8.VAR18, VAR8.VAR19, VAR4);

VAR6++;
if (VAR11 < VAR21)
{
if ((VAR11 + 1 + VAR8.VAR20) >= VAR21)
{

*VAR11 = 0xffffffff;
VAR11 = VAR21;
}
else
{
int VAR22;

*VAR11++ = VAR8.VAR20;
for (VAR22 = 0; VAR22 < VAR8.VAR20 && VAR22 < VAR23; VAR22++)
{
*VAR11++ = VAR8.VAR24[VAR22];
FUN3 ("", 
VAR8.VAR24[VAR22], VAR4);
}
for (     ; VAR22 < VAR8.VAR20; VAR22++)
{
*VAR11++ = VAR9.VAR24[VAR22-VAR23];
FUN3 ("", 
VAR9.VAR24[VAR22-VAR23], 
VAR4);
}
}
}
VAR4 = (VAR5 + 1) & (VAR1 - 1);
}
FUN3 ("", 
VAR8.VAR18, VAR8.VAR19, VAR4);

VAR2->VAR25
= VAR6 - VAR7.VAR15 - 1;
return VAR26 == 0;
}