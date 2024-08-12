static void FUN1(struct VAR1 *VAR2)
{
int VAR3 = -1, VAR4 = -1, VAR5 = -1;
char VAR6[1000];
int VAR7 = -1;
int VAR8, VAR9;

VAR3 = FUN2(VAR10, VAR11, VAR12, 0, 0);
if (!FUN3(VAR3, -1, ""))
goto VAR13;

VAR4 = FUN4(VAR3, 0);
if (!FUN3(VAR4, -1, ""))
goto VAR13;

VAR5 = FUN5(VAR3, NULL, NULL);
if (!FUN3(VAR5, -1, ""))
goto VAR13;


for (VAR8 = 0; VAR8 < 1000; VAR8++)
VAR6[VAR8] = '';

VAR9 = send(VAR4, VAR6, 1000, 0);
if (!FUN6(VAR9, 1000, ""))
goto VAR13;

VAR9 = recv(VAR5, VAR6, 1000, 0);
if (!FUN6(VAR9, 1000, ""))
goto VAR13;


for (VAR8 = 0; VAR8 < 500; VAR8++)
VAR6[VAR8] = '';

VAR9 = send(VAR5, VAR6, 500, 0);
if (!FUN6(VAR9, 500, ""))
goto VAR13;

VAR9 = recv(VAR4, VAR6, 500, 0);
if (!FUN6(VAR9, 500, ""))
goto VAR13;


FUN7(VAR5, VAR14);
VAR7 = recv(VAR4, VAR6, 1, 0);
if (!FUN8(VAR7, ""))
goto VAR13;

FUN7(VAR4, VAR14);
VAR7 = recv(VAR5, VAR6, 1, 0);
FUN8(VAR7, "");
VAR13:
if (VAR5 != -1)
close(VAR5);
if (VAR4 != -1)
close(VAR4);
if (VAR3 != -1)
close(VAR3);

if (!VAR7)
FUN9(VAR2);
}