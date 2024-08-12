FUN1 (drbg_state_t VAR1,
unsigned char *VAR2, unsigned int VAR3,
VAR4 *VAR5)
{
gpg_err_code_t VAR6 = VAR7;

if (0 == VAR3 || !VAR2)
{
FUN2 ((""));
return VAR6;
}
if (VAR5 && NULL == VAR5->VAR2 && 0 < VAR5->VAR8)
{
FUN2 ((""));
return VAR6;
}


if (VAR3 > (FUN3 ()))
{
FUN2 (("", VAR3));
return VAR6;
}


if (VAR5 && VAR5->VAR8 > (FUN4 ()))
{
FUN2 (("",
VAR5->VAR8));
return VAR6;
}


if ((FUN5 ()) < VAR1->VAR9)
VAR1->VAR10 = 0;

if (VAR1->VAR11 || !VAR1->VAR10)
{
FUN2 (("", VAR1->VAR11 ? "" : "", VAR1->VAR10 ? "" : ""));

VAR6 = FUN6 (VAR1, VAR5, 1);
if (VAR6)
return VAR6;

VAR5 = NULL;
}

if (VAR5 && VAR5->VAR2)
{
FUN2 ((""));
}


VAR6 = VAR1->VAR12->FUN7 (VAR1, VAR2, VAR3, VAR5);


VAR1->VAR9++;
if (VAR6)
return VAR6;



if (VAR1->VAR9 && !(VAR1->VAR9 % 4096))
{
FUN2 ((""));
VAR6 = FUN8 ();
if (VAR6)
{
FUN9 ((""));
return VAR6;
}
else
{
FUN2 ((""));
}
}

return VAR6;
}