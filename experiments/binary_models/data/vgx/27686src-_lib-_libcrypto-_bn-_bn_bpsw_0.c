static int
FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, const VAR1 *VAR5,
const VAR1 *VAR6, VAR7 *VAR8)
{
VAR1 *VAR9;
int VAR10 = 0;

FUN2(VAR8);

if ((VAR9 = FUN3(VAR8)) == NULL)
goto VAR11;


if (!FUN4(VAR9, VAR2, VAR8))
goto VAR11;
if (!FUN5(VAR9, VAR5, VAR9, VAR8))
goto VAR11;


if (!FUN6(VAR2, VAR2, VAR3, VAR6, VAR8))
goto VAR11;


if (!FUN4(VAR3, VAR3, VAR8))
goto VAR11;
if (!FUN7(VAR3, VAR3, VAR9))
goto VAR11;
if (!FUN8(VAR3, VAR6, VAR8))
goto VAR11;

if (VAR4 == 1) {

if (!FUN5(VAR9, VAR5, VAR2, VAR8))
goto VAR11;


if (!FUN7(VAR2, VAR2, VAR3))
goto VAR11;
if (!FUN8(VAR2, VAR6, VAR8))
goto VAR11;


if (!FUN7(VAR3, VAR3, VAR9))
goto VAR11;
if (!FUN8(VAR3, VAR6, VAR8))
goto VAR11;
}

VAR10 = 1;

VAR11:
FUN9(VAR8);

return VAR10;
}