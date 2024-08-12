void
FUN1(u_int VAR1, u_int VAR2)
{
register int VAR3;

struct consdev VAR4, *VAR5;


VAR5 = VAR6;
FUN2(&VAR4, sizeof(VAR4));
VAR4.VAR7 = &VAR8;
VAR6 = &VAR4;


FUN3("",
VAR1, VAR2, VAR9[VAR1], VAR5);


for (VAR3 = 1; VAR3 <= VAR10; VAR3++)
FUN3("", VAR11[VAR3-1], *VAR12[VAR3-1],
((VAR3%4)? '': ''));

FUN4("", (void *)*VAR12[8], 8);

FUN4("", (void *)0x1a000, 48);
FUN4("", (void *)(*VAR12[4]), 48);


VAR6 = VAR5;
}