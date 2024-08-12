static int FUN1(void)
{
int VAR1 = -1, VAR2;
VAR3 *VAR4;
VAR5 *VAR6;
VAR7 *VAR8;


VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN4(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN4(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN4(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN4(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN8(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
VAR2 = FUN3("", &VAR8);
if ((VAR1 = FUN8(VAR6, VAR8, VAR2)) < 0)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);
free(VAR8);

VAR6 = FUN2(0, 0);
if ((VAR1 = FUN9(VAR6, VAR10, 
"", NULL)) != VAR11)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);

VAR6 = FUN2(0, 0);
if ((VAR1 = FUN9(VAR6, VAR10, 
"", NULL)) != VAR11)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);

VAR6 = FUN2(0, 0);
if ((VAR1 = FUN9(VAR6, 
VAR10, "", NULL)) != VAR11)
{
FUN5("");
FUN6(VAR1);
goto VAR9;
}

FUN7(VAR6);

if (FUN3("", &VAR8) < 0 ||
FUN10(VAR8, &VAR2, &VAR4))
{
FUN5("");
VAR1 = -1;
goto VAR9;
}

if (strcmp(VAR4->VAR12[1], ""))
{
FUN5("");
VAR1 = -1;
goto VAR9;
}
FUN11(VAR4);
free(VAR8);


VAR6 = FUN2(0, 0);
if (FUN9(VAR6, VAR13, 
"", NULL))
{
goto VAR9;
}

FUN7(VAR6);
VAR1 = 0;        
FUN5("");

VAR9:
if (VAR1)
FUN5("");

return VAR1;
}