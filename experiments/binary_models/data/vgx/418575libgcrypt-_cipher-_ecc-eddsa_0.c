FUN1 (unsigned char **VAR1, mpi_ec_t VAR2)
{
gpg_err_code_t VAR3;
unsigned char *VAR4 = NULL;
unsigned int VAR5;
unsigned char *VAR6;
int VAR7, VAR8, VAR9;
gcry_buffer_t VAR10[2];

*VAR1 = NULL;

VAR8 = (VAR2->VAR11+7)/8;


if (VAR2->VAR11 == 255)
{
VAR7 = VAR12;
VAR9 = 64;
}
else if (VAR2->VAR11 == 448)
{
VAR8++;
VAR7 = VAR13;
VAR9 = 2 * VAR8;
}
else
return VAR14;


VAR6 = FUN2 (2, VAR8);
if (!VAR6)
return FUN3 ();

VAR4 = FUN4 (VAR2->VAR15, 0, &VAR5, NULL);
if (!VAR4)
{
FUN5 (VAR6);
return FUN3 ();
}

memset (VAR10, 0, sizeof VAR10);

VAR10[0].VAR16 = VAR6;
VAR10[0].VAR17 = (VAR7 == VAR12 && VAR8 > VAR5)
? VAR8 - VAR5 : 0;
VAR10[1].VAR16 = VAR4;
VAR10[1].VAR17 = VAR5;
VAR3 = FUN6 (VAR7, 0, VAR6, VAR9, VAR10, 2);

FUN5 (VAR4);
if (VAR3)
{
FUN5 (VAR6);
return VAR3;
}


FUN7 (VAR6, VAR8);  


if (VAR2->VAR11 == 255)
{
VAR6[0]   = (VAR6[0] & 0x7f) | 0x40;
VAR6[31] &= 0xf8;
}
else
{
VAR6[0]   = 0;
VAR6[1]  |= 0x80;
VAR6[56] &= 0xfc;
}

*VAR1 = VAR6;
return 0;
}